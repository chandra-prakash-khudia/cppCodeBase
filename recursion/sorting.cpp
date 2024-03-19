#include<iostream>
using namespace std;
bool issorting(int arr[],int size)
{
    if(size==0||size==1 ){
        return true;
    }
    if(arr[0]>arr[1]){
        return false;
    }
    return issorting(arr+1,size-1);
}
int main()
{
    int arr[5]={1,3,5,7,9};
    int size=5;
    cout<<issorting(arr,5)<<endl;
}