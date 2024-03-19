#include <bits/stdc++.h>
using namespace std;
long long int power(int n){
    if(n==0){
        return 1;
    }
    return 2*power(n-1);

}
int main()
{
    int n;
    cout<<"enter the number";
    cin>>n;
    cout<<n<<"th power of 2 is:"<<power(n)<<endl;;
}