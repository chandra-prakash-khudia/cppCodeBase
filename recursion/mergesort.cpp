#include<iostream>
using namespace std;
void merge(int *arr,int s,int e)
{
    int mid=s+(e-s)/2;
    int l1=mid-s+1;
    int l2=e-mid;
    int *first=new int[l1];
    int *second=new int[l2];
    //copy values
    int mainarrayindex=s;
    for(int i=0;i<l1;i++)
    {
        first[i]=arr[mainarrayindex++];
    }

     mainarrayindex=mid+1;
    for(int i=0;i<l2;i++)
    {
        second[i]=arr[mainarrayindex++];
    }

    //merge two sorted array
    int index1=0;
    int index2=0;
    mainarrayindex=s;
    while(index1<l1 &&index2<l2)
    {
        if(first[index1]<second[index2])
        {
            arr[mainarrayindex++]=first[index1++];
        }
        else{
            arr[mainarrayindex++]=second[index2++];
        }
    }
    while(index1<l1)
    {
        arr[mainarrayindex++]=first[index1++];
    }
    while(index2<l2)
    {
        arr[mainarrayindex++]=second[index2++];
    }
    delete []first;
    delete []second;
}
void mergesort(int *arr,int s,int e)
{
    //basecase
    if(s>=e)
    return ;
    int mid=s+(e-s)/2;
    //left vala part sort karna h
    mergesort(arr,s,mid);
    cout<<"left vala"<<endl;
     for(int i=0;i<7;i++)
    {
        cout<<arr[i]<<" ";
    }cout<<endl;
    //right vala part sort karna h
    mergesort(arr,mid+1,e);
    //merge
    cout<<"right vala"<<endl;
     for(int i=0;i<7;i++)
    {
        cout<<arr[i]<<" ";
    }cout<<endl;
    merge(arr,s,e);
    cout<<"merge ke bd vala vala"<<endl;
     for(int i=0;i<7;i++)
    {
        cout<<arr[i]<<" ";
    }cout<<endl;

}
int main()
{
    int arr[7]={3,4,58,67,54,32,15};
    int n=7;
    mergesort(arr,0,n-1);
    // for(int i=0;i<n;i++)
    // {
    //     cout<<arr[i]<<" ";
    // }
}