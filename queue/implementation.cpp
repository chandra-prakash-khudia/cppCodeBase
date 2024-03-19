#include<bits/stdc++.h>
using namespace std;
 class Queue {

    int* arr;
    int qfront;
    int rear; 
    int size;

public:
    Queue() {
        size = 100001;
        arr = new int[size];
        qfront = 0;
        rear = 0;
    }

    /*----------------- Public Functions of Queue -----------------*/

    bool isEmpty() {
        if(qfront == rear) {
            return true;
        }
        else
        {
            return false;
        }
    }

    void enqueue(int data) {              // enqueue is used to insert element in the queue
        if(rear == size)
            cout << "Queue is Full" << endl;
        else
        {
            arr[rear] = data;
            rear++;
        }
    }

    int dequeue() {   //dequeue is used to delete element in the queue
        if(qfront == rear) {
            return -1;
        }
        else
        {	int ans = arr[qfront];
            arr[qfront] = -1;
            qfront++;
            if(qfront==rear){
                qfront = 0;
                rear = 0;
            }
         return ans;
        }
    }

    int front() {
        if(qfront == rear) {
            return -1;
        }
        else
        {
            return arr[qfront];
        }
    }
};
/*----------------- Main Function -------------------*/
int main(){
    Queue q;
    for (int i=0 ;i<5; i++)
    q.enqueue(i);
    while(!q.isEmpty())
    {
        cout<<q.dequeue()<<endl;
        }
        }
        
