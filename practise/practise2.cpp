#include<iostream>
#include<algorithm>
#include<vector>
#include<array>
using namespace std;
// vector<int>reverse(vector<int>v){
//     int s=0,e=v.size()-1;
//     while(s<=e){
//         swap(v[s],v[e]);
//         s++;
//         e--;
//     }
//     return v;
// }
// void print(vector<int>v){
//     for(int i=0;i<v.size();i++){
//         cout<<v[i]<<" "<<endl;
//     }
// }
// int main(){
//     // array<int ,6> a={1,2,3,4,5,6};
//     // //int m;
//     // //cin>>m;
//     // // reverse(a.begin()+m+1,a.end());
//     //  reverse(a.begin(),a.end());
//     // for(int i=0;i<6;i++){
//     //     cout<<a[i]<<" "<<endl;
//     // }

//     vector<int >v;
//     v.push_back(1);
//     v.push_back(2);
//     v.push_back(3);
//     v.push_back(4);
//     v.push_back(5);
//     vector<int >ans=reverse(v);
//     print(ans);
   
// }
// void bubblesorting(int arr[],int n){
    
//     for(int i=1;i<n;i++){
//         for(int j=0;j<n-i;j++){
//             if(arr[j+1]<arr[j]){
//                 swap(arr[j+1],arr[j]);
//             }
//         }
//     }
//      for(int i=0;i<8;i++){
//         cout<<arr[i]<<" ";
//     }
// }

// int main(){
//     int arr1[5]={1,3,5,7,9};
//     int arr2[3]={2,4,6};
//     int arr3[8]={0};
//     int j;
//     for(int i=0;i<5;i++){
//         arr3[i]=arr1[i];
//     }
//      for(int i=5,j=0;i<8;i++,j++){
//         arr3[i]=arr2[j];
//     }
//     //  for(int i=0;i<8;i++){
//     //     cout<<arr3[i]<<" ";
//     // }cout<<endl;
//     bubblesorting(arr3,8);
     

// }
// void merge(int arr1[],int n,int arr2[],int m,int arr3[]){
// int i=0,j=0,k=0;
//     while(i<n && j<m){
//         if(arr1[i]<arr2[j]){
//             arr3[k++]=arr1[i++];
//             }
//         else {
//             arr3[k++]=arr2[j++];
//         }
//     }

// while(i<n){
//   arr3[k++]=arr1[i++];
// }
// while(j<m){
//   arr3[k++]=arr2[j++];
 
// }
// for(int i=0;i<m+n;i++){
//     cout<<arr3[i]<<" ";
// }
// }

// int main(){
//      int arr1[5]={1,3,5,7,9};
//     int arr2[3]={2,4,6};
//     int arr3[8]={0};
//     merge(arr1,5,arr2,3,arr3);
// }


// int main(){
//     int arr[7]={0,1,0,3,0,12,0};
//     int j=0;
//     for(int i=0;i<7;i++){
//         if(arr[i]!=0){
//             swap(arr[i],arr[j]);
//             j++;
//         }
//     }
    
//     for(int i=0;i<7;i++){
//         cout<<arr[i]<<" ";
//     }
// }



