//binding of methods & variables together into a single unit(class)
//data is only accessible from the class methods
//data leads to data abstraction (hiding class ->abstract)

#include<iostream>
using namespace std;
class abc
{
    int x;
    public:
    int getx()
    {
        return x;
    }
    void setx(int n)
    {
        x=n;
    }
};
int main()
{
    abc h1;
    cout<<h1.getx()<<endl;
    h1.setx(56);
    cout<<h1.getx()<<endl;

}