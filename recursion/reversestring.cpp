#include<iostream>
using namespace std;
void reverse(string& cp,int i,int j)
{
    if(i>j)
        return ;
    
    swap(cp[i],cp[j]);
    i++;
    j--;
    reverse(cp,i,j);
}
using namespace std;
int main()
{
   string cp="chandraprakash";
   reverse(cp,0,cp.length()-1);
   cout<<cp<<endl;
}