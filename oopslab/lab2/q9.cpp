#include <iostream>
using namespace std;
int main()
{
    cout << "Write the column title" << endl;
    string s;
    cin >> s;
    int count = 26;
    int sum = 0;
    int i;
    for (i = 0; i < s.length() - 1; i++)
    {
        int ascii = s[i] - 'A' + 1;
        sum = sum + ascii * count;
    }
    sum = sum + s[s.length() - 1] - 'A' + 1;
    cout <<"Column Number is : "<< sum << endl;
}