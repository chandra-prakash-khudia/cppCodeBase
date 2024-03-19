#include<iostream>
//#########################SEQUENCE CONTAINER#####################//


//array
// #include<array>
// using namespace std;
// int main(){
//     int arr[3]={1,2,3};
//     array<int,4> a={1,2,3,4};
//     int size =a.size();
//     for(int i=0;i<size;i++){
//         cout<<a[i]<<endl;
//     }
//     cout<<"elements at 2nd Index-"<<a.at(2)<<endl;
//     cout<<"empty or non empty  "<<a.empty()<<endl;
//     cout<<"first element "<<a.front()<<endl;
//     cout<<"last element-"<<a.back()<<endl;
// }


                  //VECTOR
// #include<vector>
// using namespace std;
// int main(){
//     vector<int>v;
//     vector<int >a(5,1);  //a vector of size 5 all elements initalised with 1
//     vector<int>last(a); //copy all elements of a in last vector
//     for(int i:last){
//         cout<<i<<" "; 
//     }
//     // cout<<"capacity "<< v.capacity()<<endl;
//     // v.push_back(1);
//     // cout<<"capacity "<< v.capacity()<<endl;
//     // v.push_back(2);
//     // cout<<"capacity "<< v.capacity()<<endl;
//     // v.push_back(3);
//     // cout<<"capacity "<< v.capacity()<<endl;
//     // cout<<"size "<<v.size()<<endl;

//     // cout<<"element at 2nd index "<<v.at(2);
//     // cout<<"front "<<v.front()<<endl;
//     // cout<<"last "<<v.back()<<endl;

//     // cout<<"before pop"<<endl;
//     // for( int i:v){
//     //     cout<<i<<" ";
//     // }cout<<endl;
//     // v.pop_back();
//     // cout<< " after popout"<<endl;
//     // for(int i:v){
//     //     cout<<i<<" "<<endl;
//     // }
//     // cout<<"before clear size"<<v.size()<<endl;
//     // v.clear();
//     // cout<<"after clear size"<<v.size()<<endl;
    

// }


                                //DEQUE
// #include<deque>
// using namespace std;
// int main(){
//     deque<int>d;
//     d.push_back(1);
//     d.push_front(2);
//     // for(int i:d){
//     //     cout<<i<<" ";
//     // }
//     //  cout<<endl;
//     // d.pop_back();
//     // for(int i:d){
//     //     cout<<i<<" ";
//     // }cout<<endl;
//     // d.pop_front();
//     // for(int i:d){
//     //     cout<<i<<" ";
//     // }cout<<endl;
//     cout<<" element at 1st index "<<d.at(1)<<endl;
//     cout<<"front "<<d.front()<<endl;
//     cout<<"last "<<d.back()<<endl;
//     cout<<"before erase out  "<<d.size()<<endl;
//     d.erase(d.begin(),d.begin()+1);
//     cout<<"after erase out  "<<d.size()<<endl;


// }


    //************ LIST ****************//
// #include<list>
// using namespace std;
// int main(){
//     list<int>l;
//     list<int>a(5,100);
//     l.push_back(2);
//     l.push_front(1);
//     for(int i:l){
//         cout<<i<<" ";
//     }
//     l.erase(l.begin());
//     cout<<" after erase out "<<endl;
//     for(int i:l){
//         cout<<i<<" ";
//     }
//     cout<<" the size of list is "<<l.size()<<endl;
// }


  //########################### CONTANINER ADAPTORS ###################//

     //******************stack***************//

// #include<stack>
// using namespace std;
// int main (){
//     stack<string>s;
//     s.push("chandra ");
//     s.push("prakash");
//     s.push("khudia");
//     cout<<" the top stack "<<s.top()<<endl;
//     s.pop();
//     cout<<" the top stack "<<s.top()<<endl;
//     cout<<" the stack is empty or not"<<s.empty()<<endl;
//     cout<<" the size of stack "<<s.size()<<endl;
// }


//**********************queue**************//
// #include<queue>
// using namespace std;
// int main(){
// queue<string>  q;
//     q.push("chandra ");
//     q.push("prakash");
//     q.push("khudia");
//     cout<<" the first  "<<q.front()<<endl;
//     q.pop();
//     cout<<" the first after popout "<<q.front()<<endl;
//     cout<<" the stack is empty or not"<<q.empty()<<endl;
//     cout<<" the size of stack "<<q.size()<<endl;

// }


//******************priority************//
// #include<queue>
// using namespace std;
// int main(){
// // max heap
// priority_queue<int>maxi;
// //mini heap
// priority_queue<int ,vector<int>,greater<int>>mini;
//  maxi.push(1);
//  maxi.push(3);
//  maxi.push(2);
//  maxi.push(0);
// int n=maxi.size(); 
// for(int i=0;i<n;i++){
//     cout<<maxi.top()<<" ";
//     maxi.pop();
// }cout<<endl;

// mini.push(5);
// mini.push(1);
// mini.push(0);
// mini.push(4);
// mini.push(3);
// int m=mini.size();
// for(int i=0;i<m;i++){
//     cout<<mini.top()<<" ";
//     mini.pop();
// }cout<<endl; 
// }

//************set******//
// #include<set>
// using namespace std;
// int main(){
//     set<int>s;
//     s.insert(5);
//     s.insert(5);
//     s.insert(6);
//     s.insert(4);
//     s.insert(2);
//     s.insert(3);
//     s.insert(0);
//     s.insert(1);
//     for(auto i:s){
//         cout<<i<<" ";
//     }cout<<endl;
//     set<int>::iterator it=s.begin();
//     it++;
//     it++;
//     s.erase(it);
//     for(auto i:s){
//         cout<<i<<" ";
//     }cout<<endl;
//   cout<<" 5 is present or not->"<<s.count(5)<<endl;
//   set<int> ::iterator itr =s.find(5);
//   for(auto it=itr;it!=s.end();it++){
//     cout<<*it<<" ";
//   }cout<<endl;

// }

//********************MAP*****************//
// #include<map>
// using namespace std;
// int main(){
//     map<int,string>m;
//     m[1]="chandra";
//     m[3]="khudia";
//     m[2]="prakash";
//     m.insert({5,"bheem"});
//     // for(auto i:m){
//     //     cout<<i.first<<" "<<i.second<<endl;
//     // }
//     cout<<" 3 is present or not?"<<m.count(3);
//     cout<<"after erase"<<endl;
//    // m.erase(3);
     
//     auto it=m.find(2);
//     for(auto i=it;i!=m.end();i++){
//         cout<<(*i).first<<" "<<(*i).second<<endl;
//     }
// }

//******************alogrithm*************//
#include<algorithm>
#include<vector>
using namespace std;
int main()
{
    vector<int>v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    v.push_back(5);
    cout<<"finding 5 "<<binary_search(v.begin(),v.end(),3)<<endl;
    cout<<"lower bound  "<<lower_bound(v.begin(),v.end(),3)-v.begin()<<endl;
    cout<<"upper  bound  "<<upper_bound(v.begin(),v.end(),4)-v.begin()<<endl;
    int a=3;
    int b=4;
    cout<<"max "<<max(a,b)<<endl;
     cout<<"min "<<min(a,b)<<endl;
     swap(a,b);
     string cp="ABCD";
     reverse(cp.begin(),cp.end());
     cout<<cp<<endl;
     rotate(v.begin(),v.begin()+2,v.end());
     cout<<" after rotate "<<endl;
     for(int i:v){
        cout<<i<<" ";
     }
}