#include<iostream>
#include<vector>
#include <algorithm>
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
    sort(arr, arr + n);
    vector<int>ans;
    for(int i=0;i<n;i++){
        if(ans.empty()){
             ans.push_back(arr[i]);
        }
         else if(ans.back()!=arr[i] && arr[i]!=arr[i+1] ){
            ans.push_back(arr[i]);
        }
    }
     for(int i=0; i<ans.size();i++){
        cout<<ans[i]<<" ";
    }

}