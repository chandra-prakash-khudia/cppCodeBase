#include<iostream>
using namespace std;
bool check(string str,int i,int j)
{
    //base coide
    if(i>j) return true;
    if(str[i]!=str[j])
    {
      return false;
    }
    else {
       return check(str,i+1,j-1);
    }
}
int main()
{
    string cp="abccba";
    cout<<"check parildrom "<<check(cp,0,cp.length()-1)<<endl;
}