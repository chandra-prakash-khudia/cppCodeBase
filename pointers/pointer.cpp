#include<iostream>
using namespace std;
int main()
{
//     int arr[5]={23,45,67,87,56};
//     int *ptr=arr;
//     for(int i=0;i<5;i++)
//     {
//         cout<<(*(ptr +i))<<" ";
//     }
//     // i[arr]= *(i + arr)


// int arr[10];
// //ERROR
// //arr=arr+1;
// int *ptr=&arr[0];
// cout<<ptr<<endl;
// ptr=ptr+1;
// cout<<ptr<<endl;


//in case of character pointer cout function differently
// char ch[6]="abcde";
// char *c=&ch[0];
// cout<<c<<endl;
// cout<<*c<<endl;
char temp='z';
char *p=&temp;
cout<<p<<endl;
}