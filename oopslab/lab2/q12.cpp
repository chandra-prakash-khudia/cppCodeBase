#include<iostream>
using namespace std;
int fibbo(int n)
{ 
    if(n==1) return 0;
    if(n==2 ) return 1;
    
    return fibbo(n-1)+fibbo(n-2) ;
    
    }
int main()
{
    int n;
    cout<<"enter the number:"<<endl;
    cin>>n;
    cout<<"fibbnocci series is given by: ";
    for(int i=1;i<=n;i++)
    {
        cout<<fibbo(i+1)<<" ";
    }
    
}
