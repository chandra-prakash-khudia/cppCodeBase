#include<iostream>
using namespace std;
class Node
{
    public:
    int val;
    Node* prev;
    Node* next;
    Node(int data){
        val=data;
        prev =NULL;
        next=NULL;
    }
};
class Doublylinkedlist{
    public:
    Node* head;
    Node* tail;
    Doublylinkedlist(){
        head=NULL;
        tail=NULL;
    }
    void display()
    {
        Node* temp=head;
        while(temp!=NULL)
        {
            cout<<temp->val <<" ";
            temp=temp->next;
        } cout<<endl;
    }
    void insertatstart(int val)
{
    Node* new_node=new Node(val);
    if(head==NULL)
    {
        head=new_node;
        tail=new_node;
        return;
    }
    new_node->next=head;
    head->prev =new_node;
    head=new_node;
    return;
}

void insertatend(int val)
{
    Node* new_node =new Node(val);
    if(tail==NULL)
    {
        head=new_node;
        tail=new_node;
        return;
    }
    tail->next =new_node;
    new_node->prev =tail;
    tail=new_node;
    return;
}

//insertion at kth position in a doubly linked list.add node at arbitary position
 void insertatposition(int val,int k)
 {
    //assuming k is small /equal to the length of linked list
    Node* temp=head;
    int count=1;
    while(count<(k-1))
    {
        temp=temp->next;
        count++;
    }
    //temp will be pointiong to the node at (k-1)th position
    Node* new_node = new Node(val);
    new_node->next=temp->next;
    temp->next=new_node;
    new_node->prev=temp;
    new_node->next->prev=new_node;
    return;
 }

 void deleteatstart(){
 
    if(head==NULL){
    return;
 }
 Node* temp=head;
 head=head->next;
 if(head==NULL) //if doubly linked list had only 1 node
 {
    tail==NULL;
 }else{
    head->prev=NULL;
    
 }
 free(temp); }

void deleteatend()
{
    if(head==NULL)
    {
        return;
    }
    Node* temp =tail;
    tail=tail->prev;
    if(tail==NULL)
    {
        head==NULL;
    }else{
        tail->next=NULL;
    }
    free(temp);
}

void deleteatpostion(int k)
{
    //assuming k is less/equal tha the length of dli
    Node* temp =head;
    int counter=1;
    while(counter<k)
    {
        temp=temp->next;
        counter++;
    }
    //now temp is pointing at kth position
    temp->prev->next=temp->next;
    temp->next->prev=temp->prev;
    free(temp);
}
};

void reversedLL(Node* &head ,Node* &tail)
{
    Node* currptr =head;
    while(currptr)
    {
        Node* nextptr = currptr->next;
        currptr->next=currptr->prev;
        currptr->prev=nextptr;
        currptr =nextptr;
    }
    //swaping head and tail
    Node* newhead=tail;
    tail =head;
    head=newhead;
}

//given the head of a doubly linked list ,fint its palindrom or not
bool ispalindrome(Node* head,Node* tail)
{
    while(head!=tail && tail!=head->prev)
    {
        if(head->val!=tail->val)
        {
            return false;
        }
        head=head->next;
        tail=tail->prev;
    }
    return true;
}

//given the head of aof a doubly linked list ,delete the nodes whose neighbours have the same value .transverse the list from right to left
void deletesameneighbournode(Node* &head , Node* &tail)
{
    Node* currnode =tail->prev; //secondlast node
    while(currnode!=head)
    {
        Node* prevnode=currnode->prev;
        Node* nextnode = currnode->next;
        if(prevnode->val == nextnode->val)
        {
            //i need to delete the curr node
            prevnode->next=nextnode;
            nextnode->prev=prevnode;
            free(currnode);
        }
        currnode=prevnode;
    }
}


// int main()
// {
//     // Node* new_node =new Node(3);
//     // Doublylinkedlist dli;
//     // dli.head=new_node;
//     // dli.tail=new_node;
//     // cout<<dli.head->val<<endl;
// // Doublylinkedlist dli;
// // dli.insertatstart(1);
// // dli.display();
// // dli.insertatstart(2);
// // dli.display();
// // dli.insertatstart(3);
// // dli.display();
// }

// int main()
// {
// Doublylinkedlist dli;
// dli.insertatend(1);
// // dli.display();
// dli.insertatend(2);
// // dli.display();
// dli.insertatend(3);
// dli.insertatend(5);
// dli.insertatposition(4,3);
// dli.display();
// dli.deleteatstart();
// dli.display();
// // dli.deleteatend();
// // dli.display();
// dli.deleteatpostion(3);
// dli.display();
// }


int main()
{
    Doublylinkedlist dli;
    // dli.insertatend(1);
    // dli.insertatend(2);
    // dli.insertatend(3);
    // dli.insertatend(3);
    // dli.insertatend(2);
    // dli.insertatend(1);
    // dli.display();
    // reversedLL(dli.head,dli.tail);
    // dli.display();
    //cout<<ispalindrome(dli.head,dli.tail)<<endl;
     dli.insertatend(2);
    dli.insertatend(1);
    dli.insertatend(1);
    dli.insertatend(2);
    dli.insertatend(1);
    dli.display();
    deletesameneighbournode(dli.head,dli.tail);
    dli.display();

}