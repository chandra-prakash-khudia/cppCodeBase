#include<iostream>
using namespace std;
class Host{
public:
class Nested{
public:
void print(){
cout << "Hello world"<<endl;
}
};
};
int main(){

Host::Nested bar;
bar.print();
int **arr = new int*[3];
delete arr[3];
return 0;
}