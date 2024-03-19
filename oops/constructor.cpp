// used to initilise an object . this is function which  is called when an object is created.same name as class name.
//function is called when object is deleted.cannot pass any parameters. name smae as class
#include <iostream>
using namespace std;
class rectangle
{
    public:
    int l;
    int b;
    rectangle() //default constructer-no argument passed
    {
        l=0;
        b=0;
    }
    rectangle(int x,int y) //parameterised constructor
    {
        l=x;
        b=y;
    }
    rectangle(rectangle& r) //copy constructer -initialise an object by another existing object
    {
        l=r.l;
        b=r.b;
    }
    ~rectangle() //destructer
    {
        cout<<" destructer is called"<<endl;
    }
};
int main()
{
    rectangle r1;
    cout<<r1.l<<" "<<r1.b<<endl;

    rectangle r2(3,4);
     cout<<r2.l<<" "<<r2.b<<endl;
    rectangle r3(r2);
     cout<<r3.l<<" "<<r3.b<<endl;
    
}