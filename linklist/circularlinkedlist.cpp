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
class circularlinkedlist
{
public:
    Node *head;
    circularlinkedlist()
    {
        head = NULL;
    }
    void display()
    {
        Node *temp = head;
        do
        {
            cout << temp->val << "->";
            temp = temp->next;
        } while (temp != head);
        cout << endl;
    }
    void printcircular()
    {
        Node* temp=head;
        for(int i=0;i<15;i++)
        {
            cout<<temp->val<<"->";
            temp=temp->next;
        }cout<<endl;
    }

    void insertatstart(int val)
    {
        Node *new_node = new Node(val);
        if (head == NULL)
        {
            head = new_node;
            new_node->next = head; // circularlinkedlist
            return;
        }
        Node *tail = head;
        while (tail->next != head)
        {
            tail = tail->next;
        }
        // now tail is pointing to the last node
        tail->next = new_node;
        new_node->next = head;
        head = new_node;
    }
};

int main()
{
    circularlinkedlist cli;
    cli.insertatstart(3);
    cli.display();
    cli.insertatstart(2);
    cli.display();
    cli.insertatstart(1);
    cli.display();
    cli.printcircular();
}