#include <iostream>
using namespace std;
#include<vector>

class Node
{
public:
    int val;
    Node *next;
    Node(int data)
    {
        val = data;
        next = NULL;
    }
};
class linkedlist
{
public:
    Node *head;
    linkedlist()
    {
        head = NULL;
    }
    void insertattail(int value)
    {
        Node *new_node = new Node(value);
        if (head == NULL) // link list is empty
        {
            head = new_node;
            return;
        }
        Node *temp = head;
        while (temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = new_node;
    }
    void display()
    {
        Node *temp = head;
        while (temp != NULL)
        {
            cout << temp->val << "->";
            temp = temp->next;
        }
        cout << " NULL" << endl;
    }
};
bool checkeqaullinkedlist(Node* head1,Node* head2)  
{
    Node* ptr1=head1;
    Node* ptr2 =head2;
    while(ptr1!=NULL && ptr2!=NULL)
    {
        if(ptr1->val!=ptr2->val){
            return false;
        }
        ptr1=ptr1->next;
        ptr2=ptr2->next;
    }
    //at this point eithewr ptr1 or ptr2 is null or both null
    return(ptr1==NULL && ptr2==NULL);
}
//given the heads of two singly linked list/eqaul head A and headB ,return the node at which the two lists intersect. if the ywo linked list have no intersection at all return nill
int getlength(Node* head)
{
    Node* temp=head;
    int length =0;
    while(temp!=NULL)
    {
        length++;
        temp=temp->next;
    }
    return length;
}
Node* moveheadbyk(Node* head ,int k)
{
    Node* ptr = head;
    while(k--)
    {
        ptr=ptr->next;
    }
    return ptr;
}
Node* getInstersection(Node* head1,Node* head2)
{

    //calculate the lenghth of both linked list
    int l1=getlength(head1);
    int l2=getlength(head2);
    //step:find the difference bw the linked lsit and move longer linked list by k steps
    Node* ptr1;
    Node* ptr2;
    if(l1>l2)
    {
        int k=l1-l2;
        ptr1 =moveheadbyk(head1,k);
        ptr2=head2;
    }
    else {
        int k=l2-l1;
        ptr1=head1;
        ptr2 =moveheadbyk(head2,k);
    }
    //step3: compare part1 and part2
    while(ptr1)
    {
        if(ptr1==ptr2)
        {
            return ptr1;
        }
        ptr1=ptr1->next;
        ptr2 =ptr2->next;
    }
    return NULL;
}

//given the head of as linked list ,remove  kth node from the end of the list return its heads;
//assuming k is always less than length of linked list

void removekthnodefromend(Node* &head,int k)
{
    Node* ptr1=head;
    Node* ptr2=head;
    //move ptr2 by k steps ahead
    int count =k;
    while(k--)
    {
        ptr2=ptr2->next;
    }
    if(ptr2==NULL)
    {
        //we have to delete head node
        Node* temp=head;
        head=head->next;
        free(temp);
        return ;
    }
    //now ptr 2 is ahead of ptr1 by kth step
    //when ptr2 is at null (end of list),ptr1 will be at node to be deleted
    while(ptr2->next!=NULL)
    {
       ptr1 = ptr1->next;
       ptr2= ptr2->next;
    } 
    //now ptr1 is pointing to the node before kth node from end
    //node to be deleted is ptr1->next
    Node* temp= ptr1->next;
    ptr1->next =ptr1->next->next;
    free(temp);
}
// int main()
// {
    // linkedlist li1;
    // // linkedlist li2;
    // // li1.insertattail(1);
    // // li1.insertattail(2);
    // // li1.insertattail(3);
    // // li2.insertattail(1);
    // // li2.insertattail(2);
    // // li2.insertattail(3);
    // // li1.display();
    // // li2.display();
//     // cout<<checkeqaullinkedlist(li1.head,li2.head)<<endl;


//     // li1.insertattail(1);
//     // li1.insertattail(2);
//     // li1.insertattail(3);
//     // li1.insertattail(4);
//     // li1.insertattail(5);
//     // linkedlist li2;
//     // li2.insertattail(6);
//     // li2.insertattail(7);
//     // //6->7->4->5
//     // li2.head->next->next=li1.head->next->next->next;
//     // Node* intersection=getInstersection(li1.head,li2.head);
//     // if(intersection)
//     // {
//     //     cout<<intersection->val<<endl;
//     // }
//     // else{
//     //     cout<<"-1"<<endl;
//     // }
//     // li1.insertattail(1);
//     // li1.insertattail(2);
//     // li1.insertattail(3);
//     // li1.insertattail(4);
//     // li1.insertattail(5);
//     // li1.display();
//     // removekthnodefromend(li1.head,3);
//     // li1.display();

// }

   //given 2 sorted linked lists ,merge them into linked link such that the resulting list is also sorted
Node* mergelinkedlist(Node* &head1,Node* &head2)
{
    Node* dummyheadnode=new Node(-1);
    Node* ptr1=head1;
    Node* ptr2=head2;
    Node* ptr3=dummyheadnode;
    while(ptr1 && ptr2)
    {
        if(ptr1->val < ptr2->val)
        {
            ptr3->next =ptr1;
            ptr1=ptr1->next;
        }
        else{
            ptr3->next=ptr2;
            ptr2 =ptr2->next;
        }
        ptr3 =ptr3->next;
    }
    if(ptr1)
    {
        ptr3->next=ptr1;

    }
    else{
        ptr3->next=ptr2;
    }
    return dummyheadnode->next;
}
// int main()
// {
//    linkedlist li1;
//     linkedlist li2;
//     li1.insertattail(1);
//     li1.insertattail(3);
//     li1.insertattail(4);
//     li2.insertattail(2);
//     li2.insertattail(5);
//     li2.insertattail(6);
//     li1.display();
//     li2.display();
//     linkedlist li3;
//     li3.head=mergelinkedlist(li1.head,li2.head);
//     li3.display();

// }


  //you are given an array of k linked list ,each linked list is sorted in ascending order.merge all the linked lists into one sorted linked list and return it;
Node* mergeklinkedlist(vector<Node*> &lists)
{
    while(lists.size()>1)
    {
        if(lists.size()==0)
        {
            return NULL;
        }
        Node* mergedhead =mergelinkedlist(lists[0],lists[1]);
        lists.push_back(mergedhead);
        lists.erase(lists.begin());
        lists.erase(lists.begin());
    }
    return lists[0];
    //vector -> head1 head2 head3 head4 
    //head1 and head2 li will be meged
    //  vector ->head3 head4 mergedhead 1_2;
    // h3 and h4 will be merged
    // vector-> merged1_2 mergeshead3_4
    //same soon
}
// int main()
// {
//     linkedlist li1;
//     linkedlist li2;
//     li1.insertattail(1);
//     li1.insertattail(3);
//     li1.insertattail(4);
//     li2.insertattail(2);
//     li2.insertattail(5);
//     li2.insertattail(6);
//     li1.display();
//     li2.display();
//     linkedlist li3;
//     li3.insertattail(7);
//     li3.insertattail(8);
//     vector<Node*>lists;
//     lists.push_back(li1.head);
//     lists.push_back(li2.head);
//     lists.push_back(li3.head);
//     linkedlist mergedLL;
//     mergedLL.head=mergeklinkedlist(lists);
//     mergedLL.display();

// }

/////pattern:slow fast pointer (find middle element of the given linked list)
Node* findmiddleelement(Node* &head)
{
    Node* slow =head;
    Node* fast =head;
    while(fast!=NULL && fast->next!=NULL)
    {
        slow=slow->next;
        fast =fast->next->next;
    }
    return slow;
}
// int main()
// {
    // linkedlist li;
    // li.insertattail(1);
    // li.insertattail(2);
    // li.insertattail(3);
    // li.insertattail(4);
    // li.insertattail(5);
//     li.display();
//     Node* middle =findmiddleelement(li.head);
//     cout<<middle->val<<endl;
// }

//given head,the head of a linked list ,deermine if the linked list has a cycle in it.
bool detectcycle(Node* head)
{
    if(!head)
    {
        return false;
    }
    Node* slow =head;
    Node* fast =head;
    while(fast && fast->next)
    {
        slow=slow->next;
        fast =fast->next->next;
        if(slow==fast)
        {
            cout<<slow->val<<endl;
            return true;
        }
    }
    return false;
}
void removecycle(Node* &head)
{
    Node* slow =head;
    Node* fast =head;
    do{
        slow=slow->next;
        fast=fast->next->next;
    }while (slow!=fast);
    fast=head;
    while(slow->next!=fast->next)
    {
        slow=slow->next;
        fast=fast->next;
    }
    slow->next=NULL;

}

// int main()
// {
//     linkedlist li;
//     li.insertattail(1);
//     li.insertattail(2);
//     li.insertattail(3);
//     li.insertattail(4);
//     li.insertattail(5);
//     li.insertattail(6);
//     li.insertattail(7);
//     li.insertattail(8);
//     //li.display();
//     li.head->next->next->next->next->next->next->next->next=li.head->next->next;
//     cout<<detectcycle(li.head)<<endl;
//     removecycle(li.head);
//     li.display();
// }
//given head ,the head of a linked list ,determine if the linked list is palindrome or not
bool ispalindrome(Node* head)
{
    //find middle element
    Node* slow=head;
    Node* fast =head;
    while(fast&& fast->next)
    {
        slow=slow->next;
        fast=fast->next->next;
    }
    //now slow is pointiong to middle element
    //2/breakmthe linked listmin the middle
    Node* curr =slow->next;
    Node* prev =slow;
    slow->next=NULL;
    //3.reverse the second half of linked list
    while(curr)
    {
        Node* nextnode=curr->next;
        curr->next=prev;
        prev=curr;
        curr=nextnode;
    }
    //4/check if the two linked list are eqaul or not
    Node* head1=head;
    Node* head2 =prev;
    while(head2)
    {
        if(head1->val!=head2->val)
        {
            return false;
        }
        head1=head1->next;
        head2=head2->next;
    }
    return true;

}
// int main()
// {
    
    // linkedlist li;
    // li.insertattail(1);
    // li.insertattail(2);
    // li.insertattail(3);
    // li.insertattail(4);
    // li.insertattail(3);
    // li.insertattail(2);
    // li.insertattail(1);

//     //li.display();
//     cout<<ispalindrome(li.head)<<endl;
// }
//given the head of a linked list ,rotate the list to the right by k places
Node* rotatebyk(Node* &head ,int k)
{
   //1.find the length of li
   int n=0;
   //2.find tail node
   Node* tail =head;
   while(tail->next)
   {
    n++;
    tail =tail->next;
   } 
   n++; //for counting last node
   k=k%n;
   if(k==0)
   {
    return head;
   }
   tail->next=head;
   //3.transverse n-k nodes
   Node* temp =head;
   for(int i=1;i<n-k;i++)
   {
    temp=temp->next;
   }
   // temp is now pointed toward n-k posn
   Node* newhead =temp->next;
   temp->next=NULL;
   return newhead;
}
// int main()
// {
//     linkedlist li;
//     li.insertattail(1);
//     li.insertattail(2);
//     li.insertattail(3);
//     li.insertattail(4);
//     li.insertattail(5);
//     li.insertattail(6);
//     li.insertattail(7);
//     li.display();
//     li.head =rotatebyk(li.head,3);
//     li.display();
// }

//given the head of a singly linked list ,group all the nodes withodd indices together followed by the nodes with even indices and return the reordered list
 Node* oddevenlinkedlist(Node* &head)
 {
    if(!head)
    {
        return head;
    }
    Node* evenhead =head->next;
    Node* oddptr=head;
    Node* evenptr=evenhead;
    while(evenptr && evenptr->next)
    {
        oddptr->next=oddptr->next->next;
        evenptr->next=evenptr->next->next;
        oddptr=oddptr->next;
        evenptr=evenptr->next;
    }
    oddptr->next=evenhead;
    return head;
 }
//  int main()
// {
//     linkedlist li;
//     li.insertattail(1);
//     li.insertattail(2);
//     li.insertattail(3);
//     li.insertattail(4);
//     li.insertattail(5);
//     li.insertattail(6);
//     li.insertattail(7);
//     li.display();
//     li.head =oddevenlinkedlist(li.head);
//     li.display();
// }

//you aregiven the head of a singly linked list.the list can be represented as;
//L0->L1->....Ln-1 ->Ln
//reorder the list to be on the following form:
//L0->Ln->L1->Ln-1 -> L2->.....
Node* requiredorderedform(Node* &head)
{
    //1. finding the middle one
    Node* slow=head;
    Node* fast=head;
    while(fast && fast->next)
    {
        slow=slow->next;
        fast=fast->next->next;
    }
    //slow is pointing to the middle element
    //separte the linkedlist and reverse second half
    Node* curr=slow->next;
    slow->next=NULL;
    Node* prev=slow;
    while(curr)
    {
        Node* nextptr =curr->next;
        curr->next=prev;
        prev =curr;
        curr=nextptr;

    }
    //3.merging two halves of linkedlist
    Node* ptr1 =head; //linkedlist1
    Node* ptr2 =prev;//linkedlist2
    while(ptr1!=ptr2)
    {
        Node* temp=ptr1->next;
        ptr1->next=ptr2;
        ptr1=ptr2;
        ptr2=temp;
    }
    return head;
}

//  int main()
// {
//     linkedlist li;
//     li.insertattail(1);
//     li.insertattail(2);
//     li.insertattail(3);
//     li.insertattail(4);
//     li.insertattail(5);
//     li.insertattail(6);
//     li.insertattail(7);
//     li.display();
//     li.head =requiredorderedform(li.head);
//     li.display();
// }

  //given a linked list swap every two adjacent nodes and return its head,you may not modifiy the values in the list's nodes.only themseleves may be changed.
Node* swapadjcent(Node* &head)
  {
    //base case
    if(head==NULL || head->next==NULL)
    {
        return head;
    }
    //recursive case
    Node* secondnode =head->next;
    head->next =swapadjcent(secondnode->next);
    secondnode->next=head; //reversing the link bw first and second node
    return secondnode;
  }
int main()
{
    linkedlist li;
    li.insertattail(1);
    li.insertattail(2);
    li.insertattail(3);
    li.insertattail(4);
    li.insertattail(5);
    li.insertattail(6);
    li.insertattail(7);
    li.display();
    li.head =swapadjcent(li.head);
    li.display();
}