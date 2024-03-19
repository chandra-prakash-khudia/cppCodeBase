#include<iostream>
using namespace std;
 class Node{
    public :
    int data;
    Node* next;
    Node(int data){
        this->data = data;
        next = NULL;
    }
    //destructer
    ~Node(){
        int value = this->data;
        if(this->next!=NULL){
            delete next;
            this->next =NULL;
            }
        }
 };
 void insertNode(Node* &tail , int element , int d){
    if(tail==NULL){
        Node* temp = new Node(d);
        tail = temp;
         temp->next = temp;
    }
    else{
       
        Node* curr = tail;
        while(curr->data!= element){
            curr =curr->next;
        }
        Node* temp = new Node(d);
        temp ->next = curr->next;
        curr->next = temp; 
    }
 }
 void deleteNode(Node* &tail , int value){
    if(tail==NULL){
        cout<<"list is empty"<<endl;
        return ;
    }
    else{
        Node* prev =tail;
        Node* curr = prev->next;
        while(curr->data!=value){
            prev = curr;
            curr= curr->next;
        }
        prev->next = curr->next;

        //1 node ll
        if(curr==prev){
            tail = NULL;
        }
        //more than 1 node

        else if(tail == curr){
            tail = prev;
        }
        curr->next = NULL;
        delete curr;
    }
 }

 void print(Node* tail){
    if(tail== NULL){
        cout<<"list is empty";
        return ;
    }
    Node* temp = tail;
    do{
        cout<<temp->data <<" ";
        temp = temp->next;
    }while(tail!=temp);
    cout<<endl;
 }

 int main(){
    Node* tail = NULL;
    insertNode(tail,5,3);
    insertNode(tail,3,4);
    insertNode(tail,4,6);
    insertNode(tail,6,7);
    insertNode(tail,7,8);
    print(tail);

 }