#include<iostream>
using namespace std;

class Node
{
    public:
    int val;
    Node* next;
    Node(int data)
    {
        val=data;
        next=NULL;
    }
};
class linkedlist
{
    public:
    Node* head;
    linkedlist()
    {
        head=NULL;
    }
    void insertattail(int value)
{
    Node* new_node = new Node(value);
    if(head==NULL) //link list is empty
    {
        head=new_node;
        return;
    }
    Node* temp=head;
    while(temp->next !=NULL)
    {
        temp =temp->next;
    }
    temp->next =new_node;

}
void display()
{
    Node* temp= head;
    while(temp!=NULL)
    {
        cout<<temp->val<<"->";
        temp=temp->next;
    } cout<<" NULL"<<endl;
}
};
void deleteduplicate(Node* &head)
{
    Node* curr_node=head;
    while(curr_node!=NULL)
    {
        while(curr_node->next!=NULL && curr_node->val==curr_node->next->val)
        {
            //delete curr_node next
            Node* temp =curr_node->next;
            curr_node->next=curr_node->next->next;
            free(temp);
        }
        //this loops end when curent node and next node are dfferent and next node =null.
        curr_node=curr_node->next;
    }
}

int main()
{
    linkedlist li;
    li.insertattail(1);
    li.insertattail(2);
    li.insertattail(2);
    li.insertattail(2);
    li.insertattail(3);
    li.insertattail(3);
    li.insertattail(4);
    li.display();
    deleteduplicate(li.head);
    li.display();

}