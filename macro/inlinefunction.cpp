#include<iostream>
using namespace std;
// inline int getmax(int& a,int& b)
// {
//     return (a>b)?a:b;
// }
// int main()
// {
//     int a=5,b=6;
//     int ans=0;
//     // if(a>b)
//     // {
//     //     sum=a;
//     // }
//     // else{
//     //     sum=b;
//     // }

//     //tertiary operator
//     // sum=(a>b)?a:b;
//     // cout<<sum<<endl;

//     ans=getmax(a,b);
//     cout<<ans<<endl;
//     a=a+3;
//     b++;
//     ans=getmax(a,b);;
//     cout<<ans<<endl;
// }

//incline works only in 1 line code of function and in 2 or 3 line its depend on compiler and more than this tu bhag
//inline replace the function call by code of calling function before compliation



// ******************DEFAULT ARGUMENT************//

void print(int arr[],int n , int start=0)
{
    for(int i=start;i<n;i++)
    {
        cout<<arr[i]<<" "<<endl;
    }
}

int main()
{
    int arr[5]={1,3,5,7,9};
    int size=5;
    print(arr,size);
 cout<<endl;
 print(arr,size,3);
}
//always defaault from right
//void getmax(int arr[],int n,int start=0,int end=0)