#include<iostream>
#include<array>
#include<algorithm>
#include<vector>
#include<math.h>
using namespace std;

// void rotate(vector<int>&num,int k)
// {
//     vector<int>temp(num.size());
//     for(int i=0;i<num.size();i++){
//         temp[(i+k)%num.size()]=num[i];

//     }
//     num=temp;
//     for(int i=0;i<num.size();i++){
//         cout<<num[i]<<" ";
//     }
// }
// int main(){
//     // array<int,7>v={1,2,3,4,5,6,7};
//     // int k=11;;
//     // k=k%7;
//     // rotate(v.begin(),v.begin()+k,v.end());
//     // for(int i=0;i<7;i++){
//     //     cout<<v[i]<<" ";
//     // }

   
//    vector<int>num;
//     num.push_back(1);
//     num.push_back(2);
//     num.push_back(3);
//     num.push_back(4);
//     num.push_back(5);
//     num.push_back(6);
//     num.push_back(7);
//     int k=3;
//     rotate(num,k);

// }

int main(){
    int arr1[3]={9,9,9};
    int arr2[3]=  {9,9,9};
    vector<int>v;
    int i=2,j=2;
    int carry =0;
    while(i>=0 && j>=0){
        int sum= arr1[i]+arr2[j]+carry;
        carry=sum/10;
        v.push_back(sum%10);
        i--,j--;
    }
    while(i>=0){
        int sum=arr1[i]+carry;
        carry=sum/10;
        v.push_back(sum%10);
        i--;
    }
     while(j>=0){
        int sum=arr2[j]+carry;
        carry=sum/10;
        v.push_back(sum%10);
        j--;
    }
     while(carry!=0){
        int sum=carry;
        carry=sum/10;
        v.push_back(sum%10);
    }
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }cout<<endl;
    int s=0;
    int e=v.size()-1;
    while(s<e){
        swap(v[s],v[e]);
        s++;
        e--;
    }
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
}