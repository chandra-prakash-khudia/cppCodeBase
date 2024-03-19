#include<iostream>
#include<vector>
using namespace std;
void solve(vector<int>num,vector<int> output,int index,vector<vector<int>>&ans)
{
    //base case
    if(index>=num.size())
    {
        ans.push_back(output);
        return;
    }
    
    //exclude
    solve(num,output,index+1,ans);
    //include
    int element= num[index];
    output.push_back(element);
    solve(num,output,index+1,ans);
}
void subset(vector<int>&num,vector<vector<int>>&ans){
    vector<int>output;
    int index=0;
    solve(num,output,index,ans);
}

int main()
{
    int n;
    cin>>n;
    vector<int>arr;
    for(int i=0;i<n;i++)
    {
        int t;
        cin>>t;
        arr.push_back(t);
    }
    vector<vector<int>>ans;
    subset(arr,ans);
     for(const auto& i:ans){
        cout<<"[";
        for(const auto& j:i){
            cout<<j<<" ";
        }
        cout<<"]\t";
    }
}