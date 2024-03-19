#include<iostream>
using namespace std;
bool binary(int *arr,int s,int e,int k )
{
    int mid=s +(e-s)/2;
    if(s>e)
    {
        return false;
    }
    if(arr[mid]==k)
    {
        return true;
    }
    if(arr[mid]<k)
    {
        return binary(arr,mid+1,e,k);
    }
    else{
        return binary(arr,s,mid-1,k);
    }
}
int main()
{
    int arr[5]={1,3,5,7,9};
    int key=8;
    cout<<binary(arr,0,4,key)<<endl;
}