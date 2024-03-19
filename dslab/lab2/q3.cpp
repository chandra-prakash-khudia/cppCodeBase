#include<bits/stdc++.h>
using namespace std;

int main(){
    cout<<"enter the size "<<endl;
    int n;
    cin>>n;
    int arr[n];
    cout<<"Enter the array"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    set<int>s;
    vector<int>ans;
   for(int i=0;i<n;i++){
    s.insert(arr[i]);
   }
   for(auto i :s){
    ans.push_back(i);
   }
   for(int i=0;i<ans.size();i++){
    cout<<ans[i]<<" ";
   }

}