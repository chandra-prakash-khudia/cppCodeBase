#include<bits/stdc++.h>
using namespace std;
int  main(){
     int a1[3]={5,8,10};
    int a2[4]={1,6,9,15};
    int a3[]={2,19};
    vector<int>ans;

    for(int i=0;i<3;i++){
        ans.push_back(a1[i]);
    }
    for(int i=0;i<4;i++){
        ans.push_back(a2[i]);
    }
    for(int i=0;i<2;i++){
        ans.push_back(a3[i]);
    }
    sort(ans.begin(),ans.end());
    for(int k=0; k<ans.size();k++){
        cout<<ans[k]<<" ";
    }
}