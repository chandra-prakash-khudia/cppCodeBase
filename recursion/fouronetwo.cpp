#include<iostream>
using namespace std;
void saydigit(int n,string arr[])
{
    //base case
    if(n==0)
    {
        return;
    }
    //processing 
    int digit=n%10;
    n=n/10;

    //recursive call
    saydigit(n,arr);
     
    cout<<arr[digit]<<" ";
}
int main()
{
    string arr[10]={"ZERO","ONE","TWO","THREE","FOUR","FIVE","SIX","SEVEN","EIGHT","NINE"};
    int n;
    cin>>n;
    saydigit(n,arr);
}