#include<iostream>
#include<string.h>
#include<algorithm>
using namespace std;
int main()
{
    char str[20]="a@b11BA";
    int count=0,i=0;
    while(str[i++]!='\0')
    {
        count++;
    }

    // deleting symbols
    char st[count];
    int x;
    int j=0;
    for(i=0;i<count;i++)
    {
         x= str[i];
        if((x>=48 && x<=57)||(x>=65 && x<=90)|| (x>=97 && x<=122))
        {
            st[j++]=str[i];
        }
    }
    cout<<st<<endl;

strcpy(str,st);
    //convert to lower case
    strlwr(str);
    strlwr(st);
    strrev(st);
    int y=strcmp(str,st);
    if(y==0)
    {
        cout<<"this is parrildrom"<<endl;
    }
    else{
        cout<<"this is not paralidrom";
}
}
