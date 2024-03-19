#include<iostream>
using namespace std;
int main(){
    int repeat=1;
    cout<<"enter the operator"<<endl;
    char oper;
    cin>>oper;
    if(oper=='+'){
        while(repeat==1){
            cout<<"enter the number"<<endl;
            int n1,n2;
            cin>>n1>>n2;
            cout<<n1+n2<<endl;
            cout<<"do you want to repeat enter 0 or 1"<<endl;
            cin>>repeat;
        }
    }
   else if(oper=='-'){
        while(repeat==1){
            cout<<"enter the number"<<endl;
            int n1,n2;
            cin>>n1>>n2;
            cout<<n1-n2<<endl;
            cout<<"do you want to repeat enter 0 or 1"<<endl;
            cin>>repeat;
        }
    }
    else if(oper=='*'){
        while(repeat==1){
            cout<<"enter the numbers"<<endl;
            int n1,n2;
            cin>>n1>>n2;
            cout<<n1*n2<<endl;
            cout<<"do you want to repeat enter 0 or 1"<<endl;
            cin>>repeat;
        }
    }
    else if(oper=='/'){
        while(repeat==1){
            cout<<"enter the number"<<endl;
            int n1,n2;
            cin>>n1>>n2;
            cout<<n1/n2<<endl;
            cout<<"do you want to repeat enter 0 or 1"<<endl;
            cin>>repeat;
        }
    }
    if(oper=='%'){
        while(repeat==1){
            cout<<"enter the number"<<endl;
            int n1,n2;
            cin>>n1>>n2;
            cout<<n1%n2<<endl;
            cout<<"do you want to repeat enter 0 or 1"<<endl;
            cin>>repeat;
        }
    }
}