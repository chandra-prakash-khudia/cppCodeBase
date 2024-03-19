#include<iostream>
// #include<lib.h>
using namespace std;
int main(){
    // int num=2;;
    // while(1){
    //     switch(num){
    //         case 1: cout<<"chandra"<<endl;
    //         exit(0);
    //         break;
    //         case 2: cout<<"chandra prakash"<<endl;
    //        exit(0);
    //         break;
    //         default: cout<<"not any case"<<endl;
    //         exit(0);
    //     }

    // }

// int a;
// cin>>a;
// int b;
// cin>>b;
// fflush(stdin);
// // char op=cin.get();
// char op;
// cin>>op;


// switch(op){
//     case '+': cout<<a+b<<endl;
//     break;
//     case '-': cout<<a-b<<endl;
//     break;
//     case '*': cout<<a*b<<endl;
//     break;
//     default: cout<<"sorry"<<endl;
// }


int n;
cin>>n;
int count;
count=n/100;
n=n%100;
count =count +n/50;
n=n%50;
count=count+n/20;
n=n%20;
count=count+n/1;
n=n%1;
cout<<count<<endl;

}