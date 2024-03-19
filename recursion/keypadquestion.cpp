#include<iostream>
#include<vector>
using namespace std;
void solve(int arr[],string output,int index,vector<string>&ans,string map[])
{
    //base case
    if(index>= sizeof(arr)/4)
    {
        ans.push_back(output);
        return ;
    }
    int number=arr[index];
    string value= map[number];
    for(int i=0;i<value.length();i++)
    {
        output.push_back(value[i]);
        solve(arr,output,index+1,ans,map);
        output.pop_back();
    }
}
void keypad(int arr[],vector<string>&ans)
{
    string output;
    int index=0;
    string map[10]={"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
    solve(arr,output,index,ans,map);
}
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    vector<string>ans;
    keypad(arr,ans);
    for(const auto& i:ans){
        cout<<"["<<i<<"]\t";
    }
}
