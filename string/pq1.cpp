#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s = "Hello world";
    string temp = "";
    for (int i = s.length() - 1; i >= 0; i--)
    {
        temp.push_back(s[i]);
    }

    string temp2 =" ";
    for (int i =0; i<temp.length(); ){
        int j= i;
        string temp3 ="";
        for(;temp[j] !='\0';j++){
            temp3.push_back(temp[i]);
        }
        reverse(temp3.begin(), temp3.end());
        temp2.push_back(temp3);
        i=i+j;
        temp2+=" ";

    }
      
    for(int i=0;i<temp2.length();i++){
        cout<<temp2[i];
    }
}
