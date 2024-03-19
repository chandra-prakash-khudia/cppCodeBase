#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n = 7;
    int arr[n] = {1,1,2,3,4,2,1};
    unordered_map<int,int> freq;
    for(int i = 0;i<n;i++){
        freq[arr[i]]++;
    }
    int j = n-1;
    vector<int> ans;
    while(j>=0){
        for(int i = j;i<n;i++){
            if(freq[arr[j]] < freq[arr[i]]){
                ans.push_back(arr[i]);
                break;
            }
            else if(i ==(n-1)){
                ans.push_back(-1);
            }
        }
        j--;
    }
    reverse(ans.begin(),ans.end());
    for(auto &i:ans){
        cout<<i<<" ";
    }
}