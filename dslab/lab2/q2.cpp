#include<bits/stdc++.h>
using namespace std;

int main()
{
    cout<<"enter the size "<<endl;
    int n;
    cin>>n;
    int arr[n];
    cout<<"Enter the array"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int k;
    cout<<"enter the key which to be deleted";
    cin>>k;
    vector<int>ans;
    for(int i=0;i<n;i++){
        if(arr[i]!=k){
            ans.push_back(arr[i]);
        }
    }
    for(int i=0; i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
}