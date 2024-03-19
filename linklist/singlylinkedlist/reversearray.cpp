#include <iostream>
using namespace std;

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
void reverseprint(Node *head)
{
    // base cAse
    if (head == NULL)
    {
        return;
    }
    // condition
    reverseprint(head->next);
    cout << head->val << "->";
}

Node *reversee(Node *&head)
{
    Node *prevptr = NULL;
    Node *currptr = head;
    // currptr=>next =prev ptr;
    // move all 3 ptrs by 1 step ahead
    while (currptr != NULL)
    {
        Node *nextptr = currptr->next;
        currptr->next = prevptr;
        prevptr = currptr;
        currptr = nextptr;
    }
    Node* new_head=prevptr;
    return new_head;
}
Node* reversellrecursion(Node* &head)
{
    //base case
    if(head==NULL || head->next==NULL)
    {
        return head;
    }
    //recursive case
    Node* new_head =reversellrecursion(head->next);
    head->next->next=head;
    head->next=NULL; //head is now pointing to last node in reversed 
    return new_head;
}
//give the head of a linked list reverse the nodes of the lst k at a time and return the modified list

Node* reversekll(Node* &head ,int k)
{
    Node* prevptr=NULL;
    Node* currptr =head;
    int counter=0; //for counting first  k nodes
    while(currptr!=NULL && counter <k)
    {
        Node *nextptrn =currptr->next;
        currptr->next =prevptr;
        prevptr=currptr;
        currptr=nextptrn;
        counter++;  
    }
    if(currptr!=NULL)
    {
        Node* new_head =reversekll(currptr,k);//recursive call
        head ->next=new_head;
    }
    return prevptr; //prevptr will give the new_head of connected linked list
}
int main()
{
    linkedlist li;
    li.insertattail(1);
    li.insertattail(2);
    li.insertattail(3);
    li.insertattail(4);
    li.insertattail(5);

    li.display();
    // reverseprint(li.head);
    // li.head=reversee(li.head);
    // li.head =reversellrecursion(li.head);  
    li.head=reversekll(li.head,2);
    li.display();
}