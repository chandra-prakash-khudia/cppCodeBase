#include<iostream>
using namespace std;
int main(){
    int k;
    int arr[6]={1,2,3,4,5,6};
    for(int i=0, j=5;i<j;i++,j--){
       k=arr[i];
       arr[i]=arr[j];
       arr[j]=k;
    }
    
   
    for(int i=0;i<6;i++){
       cout<<arr[i]<<" ";
    }
}