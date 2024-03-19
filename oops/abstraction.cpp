// abstraction->enables us to display only essential information while hiding implementation details
//interitance->a class inherits properties of another class
//modes of specifiers & model of inheritance. 1)public 2)private 3)protected

#include<iostream>
using namespace std;
class parent
{
    public:
    int x;
    protected:
    int y;
    private:
    int z;
};
class child:public parent
{
    // x will remain public
    //y will remian protected
    // z will not be accessible
};
class child2: private parent {
    // x will be parent 
    //y will be private
    // z will be inaccesible
};
class child3:protected parent{
    // x will be protected
    // y will be protected
    //z will be inaccessible
};
int main()
{
    parent p;
    p.x;

}