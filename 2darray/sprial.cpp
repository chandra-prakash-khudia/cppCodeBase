#include<iostream>
#include<vector>
#include<algorithm>
#include<array>
using namespace std;
int main()
{
    int arr[4][4]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16};



vector<int>v;
int startingrow=0;
int startingcol=0;
int endingrow=3;
int endingcol=3;
int count =0;
int total=16;
while(count<total)
{
    //1st row
    for(int index=startingcol;index<=endingcol && count<total;index++){
        v.push_back(arr[startingrow][index]);
        count++;
    }
    startingrow++;

    //end col print
    for(int index=startingrow;index<=endingrow && count<total;index++ )
    {
    v.push_back(arr[index][endingcol]);
    count++;
    }
    endingcol--;

    //last row
    for(int index=endingcol;index>=startingrow && count<total;index--)
    {
    v.push_back(arr[endingrow][index]);
    count++;
    }
    endingrow--;
    //bottom to top
    for(int index=endingrow;index>=startingrow && count<total;index--)
    {
    v.push_back(arr[index][startingcol]);
    count++;
    }
    startingcol++;
}
for(int i=0;i<16;i++)
{
    cout<<v[i]<<" ";
}
}