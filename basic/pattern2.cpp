#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int i;   
    for( i=1;i<=n;i++)
    {
        for(int j=0;j<i;j++){
            cout<<" ";
        }
         for(int j=i;j<=n;j++)
        {
            cout<<"* ";
        }cout<<endl;
        
    }
   
}