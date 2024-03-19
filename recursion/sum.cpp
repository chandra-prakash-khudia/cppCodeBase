#include<iostream>
using namespace std;
int sum(int arr[],int size)
{
    if(size==0)
    {
        return 0;
    
    }
    if(size==1)
    return arr[0];
    int summ= arr[0] +sum(arr+1,size-1);   
    cout<<summ<<endl;
    return summ;
}
int main()
{
    int arr[5]={1,3,5,7,9};
    int size=5;
    cout<<sum(arr,5)<<endl;
}