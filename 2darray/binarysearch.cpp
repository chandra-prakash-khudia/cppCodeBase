#include<iostream>
using namespace std;
// int main()
// {

//     int arr[4][3]={1,2,3,
//                    4,5,6,
//                    7,8,9,
//                    10,11,12};
//     int s=0,e=11;
//     int r=4,c=3;
//     int target=7;
//     int ans=0;
//     int mid=s+ (e-s)/2;
//     while(s<=e)
//     {
//         int element=arr[mid/c][mid%c];
//         if(element==target)
//         {
//             r=mid/c;
//             c=mid%c;
//         }
//         if(element<target)
//         {
//             s=mid+1;
//         }
//         else{
//             e=mid-1;
//         }
//         mid=s+ (e-s)/2;
//     }
//     cout<<" row is "<<r<<" the column is "<<c;
// }


bool presentornot(int arr[4][4],int row ,int target)
{
int rowindex=0;
int colindex=3;
while(rowindex<row && colindex>=0)
{
  int element=arr[rowindex][colindex];
  if(element==target)
  {
    return 1;
  }
  if(element<target)
  {
    rowindex++;
  }
  else{
    colindex--;
  }
}
 return 0;
}



int main()
{
int row=4,col=4;

int key=5;
int arr[4][4];
for(int i=0;i<row;i++)
{
    for(int j=0;j<col;j++)
    {
        cin>>arr[i][j];
    }
}
int x=presentornot(arr,4,key);
if(x==1)
{
    cout<<"true"<<endl;
}
else
{
    cout<<"false";
}

}