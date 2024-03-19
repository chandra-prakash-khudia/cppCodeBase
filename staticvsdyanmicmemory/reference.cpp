// same memory differnt name  . no new memory created 
#include<iostream>
using namespace std;
void update2(int& n)
{
    n++;
}
void update1(int n)
{
    n++;
}
int main()
{
    // int i=5;
    // int& j=i;
    // cout<<i<<endl;
    // i++;
    // cout<<i<<endl;
    // j++;
    int n=5;
    cout<<" befor "<<n<<endl;
    update2(n);
    cout<<" After "<<n<<endl;


}