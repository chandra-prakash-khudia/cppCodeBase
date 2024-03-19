#include<iostream>
using namespace std ;
// int power(int n)
// {
//     if(n==0)
//     {
//         return 1;
//     }
//     return 2*power(n-1);
//}

void count(int n)
{
    if(n==0)
    {
        return;
    }
    cout<<n<<endl;
     count(n-1);

   
     cout<<n<<endl;
}
int main()
{
    int n;
    cin>>n;
    // int ans=power(n);
    // cout<<ans<<endl;
    count( n);

}