#include <iostream>
#include <queue>
using namespace std;

int main()
{
  queue<int> q;
  q.push(1);
  q.push(2);
  q.push(3);
  q.push(4);
  q.push(5);
  cout << "before pop operation, size of queue is :" << q.size() << endl;
  cout << "front of queue is:" << q.front() << endl;
  cout << "back of queue is :" << q.back() << endl;
  q.pop();
  cout << "After pop operation, size of queue is :" << q.size() << endl;
  cout << "front of queue is:" << q.front() << endl;
  cout << "Is queue is empty:" << q.empty() << endl;
  q.pop();
  q.pop();
  q.pop();
  q.pop();
  cout << "Is queue is empty:" << q.empty() << endl;
}