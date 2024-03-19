#include<iostream>
#include<list>
using namespace std;
// template <typename T>
// class Node{
//     public:
//     T val;
//     Node* next;
//     Node(T data)
//     {
//         val=data;
//         next=NULL;
//     }
// };
// int main()
// {
//     Node<int>* node1= new Node<int>(3);
//     Node<int>* node1= new Node<int>(2);
//     Node<int>* node1= new Node<int>(4);
//     Node<int>* node1= new Node<int>(1);
//     cout<<node1->val<<endl;
//     Node<char>* node2 = new Node<char>('a');
//     cout<<node2->val<<endl;

// }

//*********list*********//
int main()
{
  list<int>l1={1,2,3,4};
  auto itr = l1.begin(); // iterator for the first element
//   auto rev_itr=l1.rbegin();
//   cout<<*rev_itr<<endl;
  //li.end()-iterator pointing to the memory location after last(4) element
  // list.rbegin()- iterator for the first element in reverse iteration
  // list.rend()- iterator for the position after last element in reverse iteration
  //advance(itr,u) -> advance the itr by u places
//   advance(itr,2);
//   cout<<*itr<<endl; 

// using  range-based loop
// for(auto num: l1)
// {
//     cout<<num<<endl;
// }

//using iterator
// for(auto itr=l1.begin();itr!=l1.end();itr++)
// {
//     cout<<*itr<<" ";
// }cout<<endl;

// reverse traversal
// for(auto itr=l1.rbegin();itr!=l1.rend();itr++)
// {
//     cout<<*itr<<" ";
// }cout<<endl;

// inserting elements into a list
// list.insert(itr,value)m-> insert value before the position of the itr;
// list.insert(itr,count,value) --> insert value count number of times before itr;
// list.insert(itr,str.itr,end-itr) -> insert values from str-itr ....end-itr before itr
// advance(itr,2);
// l1.insert(itr,5);
// l1.insert(itr,3,5);
auto l=l1.begin();
auto r=l1.begin();
advance(r,2);
l1.insert(itr,l,r);

for(auto itr=l1.begin();itr!=l1.end();itr++)
{
    cout<<*itr<<" ";
}cout<<endl;

//deleting elements from list
// list.erase(itr) -> delete the element pointed to by itr
// list.erase(str_itr ,end_itr) -> delete elements from stat to end itr
 // 1 2 1 2 3 4
 auto s_itr = l1.begin();
 advance (s_itr,2); // s_itr pointing to 3rd element
 auto e_itr = l1.begin();
 advance (e_itr,4); // e_itr pointing to fifth element
 l1.erase(s_itr,e_itr);
 
for(auto itr=l1.begin();itr!=l1.end();itr++)
{
    cout<<*itr<<" ";
}cout<<endl;
// push-front(val) -> insert val in the front of list
// pop-front()-> remove val from front of list
//push-back(val) ->  insert value in the back of the list 
//pop-back() -> remove val from back of list
}