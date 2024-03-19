
#include<iostream>
#include<vector>
using namespace std;
void solve(string str,string output,int index,vector<string>& ans){
    // base case
    if(index >= str.length()){
        ans.push_back(output);
        return ;
    }
    // exclude
    solve(str,output,index+1,ans);
    // include
    char element = str[index];
    output.push_back(element);
    solve(str,output,index+1,ans);
}
void subsets(string str,vector<string>& ans){
    string output;
    int index = 0;
    solve(str,output,index,ans);
}
int main()
{
    string arr;
    cin>>arr;
    vector<string> ans;
    subsets(arr,ans);
    for(const auto& i:ans){
        cout<<"["<<i<<"]\t";
    }
}