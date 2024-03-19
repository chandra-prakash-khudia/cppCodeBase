#include <iostream>
using namespace std;
int even(int n)
{
    if (n == 1)
        return 0;

    return (even(n - 1) + 2);
}
int main()
{
    int n;
    cout<<"enter the number:"<<endl;
    cin >> n;
    cout << even(n);
}