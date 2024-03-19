#include<iostream>
 using namespace std;
const int  col=2;
const int row=2;
//function to add two integer number
 void add( int A[][col],int B[][col],int result[][col]){
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            result[i][j]= A[i][j]+B[i][j];
        }
    }
    cout<<"add two integer matrices"<<endl;
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++){
            cout<<result[i][j]<<" ";
        }cout<<endl;
    }
 }
 
 //function to add double matrices number
 void add( double A[][col],double B[][col],double result[][col]){
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            result[i][j]= A[i][j]+B[i][j];
        }
    }
     cout<<"add two double matrices"<<endl;
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++){
            cout<<result[i][j]<<" ";
        }cout<<endl;
    }
 }
 //function to subtract two integers number
 void sub( int A[][col],int B[][col],int result[][col]){
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            result[i][j]= A[i][j]-B[i][j];
        }
    }
     cout<<"subtarct two integer matrices"<<endl;
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++){
            cout<<result[i][j]<<" ";
        }cout<<endl;
    }
 }
 //function to subtract two double number
 void sub( double A[][col],double B[][col],double result[][col]){
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            result[i][j]= A[i][j]-B[i][j];
        }
    }
     cout<<"subtarct two double matrices"<<endl;
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++){
            cout<<result[i][j]<<" ";
        }cout<<endl;
    }
 }
 //function to multiply  two integers matrices
 void mul( int A[][col],int B[][col],int result[][col]){
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            result[i][j]=  0;
            for(int k=0;k<col;k++){
                result[i][j]=result[i][j] +(A[i][k]*B[k][j]);
            }
        }
    }
     cout<<"multiply two integer matrices"<<endl;
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++){
            cout<<result[i][j]<<" ";
        }cout<<endl;
    }
 }
  //function to multiply  two double matrices
 void mul( double A[][col],double B[][col],double result[][col]){
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            result[i][j]=  0.0;
            for(int k=0;k<col;k++){
                result[i][j]=result[i][j] +(A[i][k]*B[k][j]);
            }
        }
    }
     cout<<"multiply two double matrices"<<endl;
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++){
            cout<<result[i][j]<<" ";
        }cout<<endl;
    }
 }
  int main(){
    int intmatrix1[row][col]={{1,2},{3,4}};
    int intmatrix2[row][col]={{5,6},{7,8}};
    int intresult[row][col];
    double doublematrix1[row][col]={{1.2,2.2},{3.2,4.2}};
    double doublematrix2[row][col]={{5.4,6.4},{7.4,8.4}};
    double doubleresult[row][col];
    //perform matrix operation
    add(intmatrix1,intmatrix2,intresult);
    sub(intmatrix1,intmatrix2,intresult);
    mul(intmatrix1,intmatrix2,intresult);
    add(doublematrix1,doublematrix2,doubleresult);
    sub(doublematrix1,doublematrix2,doubleresult);
    mul(doublematrix1,doublematrix2,doubleresult);

  }