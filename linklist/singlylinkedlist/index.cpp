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
bool palindromornot(Node* head){
    // find middle element 
    Node* slow =head;
    Node* fast =head;
    while(fast && fast->next){
        slow=slow->next;
        fast=fast->next->next;
    }
    //break the linklist from mid
    Node* curr =slow->next;
    Node* prev =slow;
    slow->next=NULL;

    //reverse the linklist
    while(curr){
        Node* new_node=curr->next;
        curr->next=prev;
        prev=curr;
        curr=new_node;
    }
    //check if linked lsit are eqaul or not
    Node* head1 =head;
    Node* head2 =prev;
    while(head2){
        if(head1!=head2){
            return false;
        }
        head1=head1->next;
        head2=head2->next;

    }
    return true;

}
Node reverse(Node* head){
    Node prev=NULL;
    Node curr =head;
    
    while(curr){
       Node forward = curr->next;
       curr->next= prev;
       curr=prev;
       forward=curr;
    }
}
Node reversebyk(Node* head,int k){
    int count =0; 
    Node* prev=head->next;
    Node* curr =prev->next;
    while(count<k){
        prev->next=head;
        
    }
}