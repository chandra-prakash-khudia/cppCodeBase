#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int i=0;
    int k=n/2;
    for(int i=1;i<=k;i++)
    {
        for(int j=1;j<=k-i;j++){
            cout<<" ";
        }
        for(int j=k-i+1;j<=k;j++)
        {
            cout<<"* ";
        }cout<<endl;
    }


    for( i=1+k;i<=n;i++)
    {
        for(int j=0;j<i-k;j++){
            cout<<" ";
        }
         for(int j=i-k;j<=n;j++)
        {
            cout<<"* ";
        }cout<<endl;
        
    }
   
}