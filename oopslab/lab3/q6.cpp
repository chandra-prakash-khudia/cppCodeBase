#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
int main(){
    
    int arr[]={5,4,3,2,6,7,8,4,2};
    sort(arr,arr+9);
    for(int i=0;i<9;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    string brr[]={"banana","apple","dog","elephant","cat"} ;
    sort(brr, brr+5);
    for(int i=0;i<5;i++){
     cout<<brr[i]<<" ";   
    }
    
}