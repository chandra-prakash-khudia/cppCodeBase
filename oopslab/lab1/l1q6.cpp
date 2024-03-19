#include<iostream>
using namespace std;
int main(){
    cout<<"Enter the number"<<endl;
    long long int n;
    cin>>n;
    long long int temp1=n;
    long  long int temp2=0;
    int add=0;
    while(temp1>0){
        temp2=temp1%10;
        temp1=temp1/10;
        add=add*10+temp2;
    }
    if(n==add){
        cout<<"this is palindrom"<<endl;
    }
    else{
        cout<<" this is not palindrom"<<endl;
    }

}