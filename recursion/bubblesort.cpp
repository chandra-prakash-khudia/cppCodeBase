#include<iostream>
using namespace std;
void sort(int *arr,int size)
{
    if(size==0||size==1) {return ;}
    //first element 
    for(int i=0;i<size-1;i++)
    {
        if(arr[i]>arr[i+1])
        {
            swap(arr[i],arr[i+1]);
        }
    }
    sort(arr,size-1);
}

int main()
{
    int arr[6]={8,3,6,9,10,1};
    sort(arr,6);
    for(int i=0;i<6;i++)
    {
        cout<<" "<<arr[i]<<" ";
    }
}