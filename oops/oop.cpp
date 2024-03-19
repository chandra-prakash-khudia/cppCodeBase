#include<iostream>
using namespace std;
class Fruit
{
    public:
    string name;
    string color;
};
int main()
{
    //static
    Fruit apple;
    apple.name="apple";
    apple.color="red";
    cout<<apple.name<<endl<<apple.color<<endl;
    cout<<"cp"<<endl;
    //dyanmic 
    Fruit *mango=new Fruit();
    mango->name="mango";
    (*mango).color="orange";
    cout<< mango->name<<" "<<(*mango).color<<endl;

    
}
