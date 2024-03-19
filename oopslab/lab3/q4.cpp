#include<iostream>
using namespace std;
int area(int side){
    return (side*side);
}
int area(int length,int breadth){
    return (length*breadth);
}
int area(int a,int b,int height){
    return ((a+b)*height)/2;
    }
float area(float radius){
    return 3.14*(radius*radius);
}
double area(double base,int height){
    return  0.5*base*height;
}
int main(){
    cout<<"Area of square is: "<<area(6)<<endl; //calling function with one parameter
    cout<<" Area of rectangle is :"<<area(7,8) << endl;// calling funtion with two parameters
    cout<< " Area of trapezium is: " <<area(9,10,15) << endl ;//calling the function with three parameters
    cout<< " Area of circle is:" <<area(.5f) <<endl;;    ///calling the function with float parameter
    cout<<"area of triangle: " <<area(2.25,5)<<endl;
}