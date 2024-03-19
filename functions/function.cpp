#include<iostream>
#include<math.h>
using namespace std;
// void evenodd(int a){
//     if(a%2==0){
//         cout<<"even number"<<endl;
//     }
//     else{
//         cout<<"number is odd"<<endl;

//     }
//}


// int ncr(int n){
//     int nfact=1;
   
//    for(int i=1;i<=n;i++){
//     nfact=nfact*i;
//    }
//    return nfact;
   
    
// }
// int main()
// {
//     int n,r;
//     cin>>n>>r;
//     //evenodd(n);
//     int num=ncr(n);
//     int deno=(ncr(r))*ncr(n-r);
//     cout<<(num/deno)<<endl;


// }


// int AP(int n){
//     int nth= 3*n +7;
//     return nth;
// }
// int main(){
//     int n;
//     cin>>n;
//     cout<<AP(n)<<endl;
//}

// int fibbo(int n){
//     if(n==1){
//         return 0;
//     }
//     else if(n==2||n==3) return 1;
//    return fibbo(n-1)+fibbo(n-2);
// }
// int main(){
//     int n;
//     cin>>n;
//     cout<<fibbo(n)<<endl;

// }

int bitset(int a){
    int ans=0;
    int i=0;
    while(a!=0){
        int bit=a&1;
        ans= (bit*pow(10,i))+ans;
        a=a>>1;
        i++;
    }
    return ans;
}
int main(){
    int a,b;
    cin>>a;
    cin>>b;;
    int x=bitset(a);
    int y=bitset(b);
    cout<<x<<" "<<y<<endl;
    int count=0;
    int ans=0;
    for(int i=0;x>0;i++){
         ans=x%10;
        x=x/10;
        if(ans==1){
            count =count+1;
        }
    }for(int i=0;y>0;i++){
         ans=y%10;
        y=y/10;
        if(ans==1){
            count =count+1;
        }
    }
    cout<<count<<endl;
}