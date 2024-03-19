#include<iostream>
using namespace std;
int main()
{
    int row,column;
    cin>>row>>column;
    int **arr= new int*[row];
    for(int i=0;i<row;i++)
    {
        arr[i]= new int[column];
       
    }
     //creation done
        //input
        for(int i=0;i<row;i++)
        {
            for(int j=0;j<column;j++)
            {
                cin>>arr[i][j];
            }
        }
        //output
         for(int i=0;i<row;i++)
        {
            for(int j=0;j<column;j++)
            {
                cout<<arr[i][j]<<" ";
            }cout<<endl;
        }
    //releasing memory
    for(int i=0;i<row;i++)
    {
      delete arr[i];
    }
     delete []arr ;
}