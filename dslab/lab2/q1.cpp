#include <bits/stdc++.h>
using namespace std;
int main()
{
    int arr[] = {1, 2, 3, 4, 5, 3, 6, 1, 2, 1, 1, 5, 4, 6};
    unordered_map<int ,int> mp;
    for(int i=0 ;i<14;i++){
        mp[arr[i]]++;
    }
    int count =0;
    int element =-1;
    for(auto it : mp){
        if(it.second >count ){
            count = it.second ;
            element = it.first;

        }
    }
   
    cout << "maxm occurenece is of  : " << element << endl;
}