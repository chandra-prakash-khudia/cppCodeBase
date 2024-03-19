#include<iostream>
#include<vector>
#include <algorithm>
using namespace std;
int main(){
    cout<<"enter the size "<<endl;
    int n;
    cin>>n;
    int arr[n];
    cout<<"Enter the array"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    sort(arr, arr + n);
    int second_largest=0;
    int second_smallest=0;
    int e=n-1;
    for(;e>=0;e--){
        if(arr[e-1]<arr[e]){
            second_largest=arr[e-1];
            break;
        }
    }
    int s=0;
    while(s<n){
        if(arr[s]<arr[s+1]){
            second_smallest=arr[s+1];
            break;
        }
        else{
            s++;
        }
    }
cout<<" second largest:"<<second_largest<<" "<<"second smallest :"<<second_smallest;

}