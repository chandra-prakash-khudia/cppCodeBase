#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int i=0;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n-i;j++){
            cout<<" ";
        }
        for(int j=n-i+1;j<=n;j++)
        {
            cout<<"* ";
        }cout<<endl;
    }
   
}