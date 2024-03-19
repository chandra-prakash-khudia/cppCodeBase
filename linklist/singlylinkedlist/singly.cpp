//linear dta structure used to store a list of values
//memory blocks linked to each other
//dyanmic size allocation
//non contingous memory allocation
#include<iostream>
using namespace std;

// class Node{
//     public:
//     int val;
//     Node* next;
//     Node(int data)
//     {
//         val=data;
//         next=NULL;
//     }
// };

// int main()
// {
//     Node* n= new Node(1);
//     cout<< n->val <<" "<<n->next <<endl;
// }


//*********traversal in a singly linked list
//use temp such that temp= temp->next

//****insertion at kth position in a singly linked list
//add node at the start
// class Node{
//     public:
//     int val;
//     Node* next;
//     Node(int data)
//     {
//         val=data;
//         next=NULL;
//     }
// };
// void insertathead(Node* &head,int value)
// {
//     Node* new_node = new Node(value);
//     new_node->next = head ;
//     head = new_node ;

// }
// void display (Node* head)
// {
//     Node* temp =head;
//     while(temp!=NULL)
//     {
//         cout<<temp->val <<" ->";
//         temp =temp->next;
//     }
//      cout<<" NULL"<<endl;
// }

// int main()
// {
//     Node* head=NULL ;
    // insertathead(head,2);
    // display(head);
    // insertathead(head,1);
    // display(head);
// }

// insertion at kth position in a singly linked list
//add node at the end
 class Node{
    public:
    int val;
    Node* next;
    Node(int data)
    {
        val=data;
        next=NULL;
    }
};
void insertathead(Node* &head,int value)
{
    Node* new_node = new Node(value);
    new_node->next = head ;
    head = new_node ;
}

void insertattail(Node* &head, int val)
{
    Node* new_node = new Node(val);
    Node* temp =head;
    while(temp->next!=NULL)
    {
        temp =temp->next;
    }
    //temp has reached last node
    temp->next=new_node;

}
void insertatposition(Node* &head,int val,int pos)
{
    if(pos==0)
    {
        insertathead(head,val);
        return ;
    }
    Node* new_node= new Node(val);
    Node* temp=head;
    int current_pos=0;
    while(current_pos!=pos-1)
    {
        temp=temp->next;
        current_pos++;
    }
    //temp is pointing to node at pos-1
    new_node->next =temp->next;
    temp->next =new_node;


}
void updateatposition(Node* &head ,int pos,int val)
{
    Node* temp=head;
    int curr_pos=0;
    while(curr_pos!=pos)
    {
        temp=temp->next;
        curr_pos++;
    }
    //temp will be pointing to the posth node
    temp->val=val;
}
void deleteathead(Node* &head)
{
    Node* temp =head; //node to be deleted
    head=head->next;
    free (temp);
}
void deleteattail(Node* &head)
{
    Node* second_last =head;
    while(second_last->next->next !=NULL)
    {
        second_last=second_last->next;
    }
    //now second_last points to second last node
    Node* temp=second_last->next; //node to be deleted
    second_last->next = NULL;
    free(temp);
}
void deleteatpostion(Node* &head,int pos)
{
    if(pos==0)
    {
        deleteathead(head);
        return;
    }
    int curr_pos=0;
    Node* prev =head;
    while(curr_pos!=pos-1)
    {
        prev=prev->next;
        curr_pos++;
    }
    //prev is ponting to node at pos-1
    Node* temp = prev->next;//node to be deleted
    prev->next=prev->next->next;
    // prev->next=temp->next;
    free(temp);

}

void display (Node* head )
{
    Node* temp =head;
    while(temp!=NULL)
    {
        cout<<temp->val <<" ->";
        temp =temp->next;
    }
     cout<<" NULL"<<endl;
}

int main()
{
    Node* head=NULL ;
    insertathead(head,2);
    display(head);
    insertathead(head,1);
    display(head);
    insertattail(head,3);
    display(head);
    insertatposition(head,4,2);
    display(head);
    updateatposition(head,2,5);
    display(head);
    deleteathead(head);
    display(head);
    deleteattail(head);
    display(head);
    deleteatpostion(head,1);
    display(head);
    
}