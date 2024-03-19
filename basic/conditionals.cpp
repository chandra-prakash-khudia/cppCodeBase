#include<iostream>
using namespace std;
int main()
{
    
    // cin>>a>>b;
    // if(a>b)
    // {
    //     cout<<"A IS big \n";
    // }
    // if(b>a)
    // {
    //     cout<<"B is big\n";
    // }
    // a=cin.get();
    // cout<<a;
    // if(a==9)
    // {
    //     cout<<"niney\n";
    // }
    // if(a>0)
    // {
    //     cout<<"positive";
    // }
    // else
    // {
    //     cout<<"negative";
    // }
    // int b=a+1;
    // if((a=3)==b)
    // {
    //     cout<<a;
    // }
    // else
    // {
    //     cout<<a+1;
    // }
    int a;
    // a=cin.get();
    // if(a>=48 && a<=57)
    // {
    //     cout<<"it is digit\n";
    // }
    // else if(a>=65 && a<=90)
    // {
    //     cout<<"uppper case\n";
    // }
    // else if(a>=97 && a<=122)
    // {
    //     cout<<"LOWER CASE";
    // }
   // cin>>a;
    // int i=1;
    // int sum=0;
    // while (i<=a)
    // {
    // //    sum=sum+i ;
    // if(i%2==0)
    //    {
    //     sum=sum+i;
    //     i++;
    //    }
    //    else
    //    {
    //     i++;
    //    }

    // }
    // cout<<sum;
    // int i=2;
    // while(i<=a-1)
    // {
    //     if(a%i==0)
    //     {
    //         cout<<"not prime\n";
    //         break;
    //     }
    //     else{
    //         i=i+1;
    //     }
       
    // }
    //  if(i==a)
    //     {
    //         cout<<"prime";
    //     }

   
   int n;
   cin>>n;
   int i=1;
 
   while(i<=n)
   {
      int j=1;
    while(j<=n)
    {
        cout<<i;
        j=j+1;
    }
    cout<<endl;

    i=i+1;
   }
    return 0;
}
