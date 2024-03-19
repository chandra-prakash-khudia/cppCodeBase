#include<iostream>
#include<vector>
#include<iostream>
using namespace std;
// bool primeornot(int n)
// {
//     if(n==1)
//     {
//         return 0;
//     }
//     for(int i=2;i<n;i++)
//     {
//         if(n%i==0)
//         {
//             return 0;
//         }
//     }
//     return 1;
// }
// int main()
// {
//     int n;
//     cin>>n;
//     for(int i=1;i<=n;i++)
//     {
//         int x=primeornot(i);
//         if(x==1)
//         {
//             cout<<i<<endl;
//         }
//     }
// }


//sieveoferathoers


int primeornot(int n)
{
    int count=0;
    vector<bool>prime(n+1,true);
    prime[0]=prime[1]=false;
    for(int i=2;i<n;i++)
    {
        if(prime[i])
        {
            count++;
        
        for(int j=2*i;j<n;j=j+i)
        {
            prime[j]=0;
        }
        }
    }
    return count;
}
int main()
{
    int n;
    cin>>n;
    int x=primeornot(n);
    cout<<x<<endl;

}

//complexility o(nlog(log n))
