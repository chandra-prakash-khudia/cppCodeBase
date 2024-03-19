#include<bits/stdc++.h>
using namespace std;
int main(){
    string s=" mississippi";
   vector<char> ans;
   for(int i=0;i<s.length();i++){
    if(ans.empty()){
        ans.push_back(s[i]);
    }
    else if(ans.back()!=s[i] ){
        ans.push_back(s[i]);
    }
   }
   for(int i=0;i<ans.size();i++){
    cout<<ans[i];
   }
}