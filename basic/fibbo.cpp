#include<iostream>
using namespace std;
int fibbo(int n){
    //base case
    if(n==0){
        return 0;
    }
    if(n==1){
        return 1;
    }
    return fibbo(n-1) + fibbo(n-2);
}
int main(){
    cout<<"enter the number"<<endl;
    // int n;
    // cin>>n;
    cout<<fibbo(6)<<endl;
}