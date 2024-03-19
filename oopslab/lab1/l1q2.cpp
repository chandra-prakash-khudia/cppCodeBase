#include<iostream>
using namespace std;
int factorial(int n){
    if(n==0){
        return 1;
    }
    return n*factorial(n-1);
}
int sum(int n){
    int add=0;
    while(n>0){
        add= n%10 +add;
        n=n/10;
    }
    return add;
}
int main(){
    int n=5;
    if(n%2!=0){
        cout<<"factorial of "<<n<<" is "<<factorial(n)<<endl;
    }
    if(n%2==0){
        cout<<"sum of no of digits is "<<sum(n)<<endl;
    }
}