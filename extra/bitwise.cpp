#include<iostream>
using namespace std;
int main(){
    // int a=4;
    // int b=6;
    // cout<<"a&b "<< (a&b) <<endl;
    // cout<<"a|b "<< (a|b) <<endl; 
    // cout<<"~a "<< (~a) <<endl;
    // cout<<"a^b "<< (a^b) <<endl;
    // cout<<(5<<1)<<endl;
    // cout<<(5>>1)<<endl;


// int n;
// cin>>n;
// int a=0;
// int b=1;
// int i=1;
// cout<<" 0 1 ";
// int c;
// while(i<=n-2){
//     c=a+b;
//     cout<<c<<" ";
//     a=b;
//     b=c;
//     i++;
// }


// int prime=1;
// for(int i=2;i<n;i++) {
//     if(n%i==0){
        
//         prime=0;
//         break;
//     }
  
// }

// if(prime==0){
//     cout<<"this is not a prime"<<endl;
// }
// else{
//     cout<<"this is  a prime number";
// }

// for(int i=0;i<=5;i++){    //0 2 4
//     cout<<i<<" ";
//     i++;
// }

// for(int i=0;i<=5;i--){    //0 0 0 0 0
//     cout<<i<<" ";
//     i++;
// }


// for(int i=0;i<=15;i=i+2){    //0 
//     cout<<i<<" ";
//     if(i&1)
//     {
//         continue;
//     }
//     i++;
// }

// for(int i=0;i<5;i++){
//     for(int j=i;j<=5;j++){
//         cout<<i<<" "<<j<<endl;
//     }
// }


// int a=3;
// cout<< a <<endl;
// if(true){
//     int a=5;
//     cout<< a<<endl;
// }


int n;
 cin>>n;
// int product=1;
// int sum=0;
// for(int i=0;n>0;i++){
//     sum=sum+(n%10);
//     product=product*(n%10);
//     n=n/10;
// }
// cout<<(product-sum)<<endl;


int count =0;
while(n!=0){
    if(n&1){
        count++;
    }
    n=n>>1;
}
cout<<count<<endl;
    return 0;
}