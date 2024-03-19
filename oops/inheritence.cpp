#include<iostream>
using namespace std;
// class parent
// {
//     public:
//     parent()
//     {
//         cout<<"parent class"<<endl;
//     }
// };
// class child:public parent
// {
//     public:
//     child(){
//         cout<<"child class"<<endl;
//     }
// };
// class grandchild:public child{
//     public:
//     grandchild()
//     {
//         cout<<"grandchild class"<<endl;
//     }
// };
// int main()
// {
//     child c;
//     parent p;

// }


//multi-level inheritance
// int main()
// {
//     grandchild p;
// }

//multiple-inheritance

// class parent1
// {
//     public:
//     parent1()
//     {
//         cout<<"parent1 class"<<endl;
//     }
// };
// class parent2
// {
//     public:
//     parent2()
//     {
//         cout<<"parent2 class"<<endl;
//     }
// };
// class child:public parent1 , public parent2
// {
//     public:
//     child(){
//         cout<<"child class"<<endl;
//     }
// };
// int main()
// {
//     child c;
// }

//************Hierarchical Inheritance 
//  class parent1
// {
//     public:
//     parent1()
//     {
//         cout<<"parent1 class"<<endl;
//     }
// };

// class child1:public parent1
// {
//     public:
//     child1(){
//         cout<<"child1 class"<<endl;
//     }
// };

// class child2:public parent1
// {
//     public:
//     child2(){
//         cout<<"child2  class"<<endl;
//     }
// };
// int main()
// {
//     child1 c1;
//     child2 c2;
// }

//*************Hybrid inheritance
//combination of more than one inheritance

// diamond problem 

// class parent
// {
//     public:
//     parent()
//     {
//         cout<<"parent class"<<endl;
//     }
// };
// class child1:public parent
// {
//     public:
//     child1(){
//         cout<<"child1 class"<<endl;
//     }
// };
// class child2:public parent
// {
//     public:
//     child2(){
//         cout<<"child2 class"<<endl;
//     }
// };
// class grandchild:public child1,public child2{
//     public:
//     grandchild()
//     {
//         cout<<"grandchild class"<<endl;
//     }
// };
// int main()
// {
//     grandchild g;
// }

//*****polymorphism
//ability of  object/method to take different forms
// compile time polymorphan
// class sum {
//     public:
//     void add(int x,int y){
//     int sum=x+y;
//     cout<<sum<<endl;
//     }
//     void add(int x,int y,int z){
//     int sum=x+y+z;
//     cout<<sum<<endl;
//     }
//     void add( float x,float y){
//     float sum=x+y;
//     cout<<sum<<endl;
//     }
// };
// int main()
// {
//     sum s;
//     s.add(2,3);
//     s.add(2,3,4);
//     s.add(float(2.5),float(3.2));
// }

//opertor overloading
// class complex{
//     public:
//     int real;
//     int img;
//     complex(int x,int y)
//     {
//         real=x;
//         img=y;
//     }
//     complex operator+ (complex &c)
//     {
//         complex ans(0,0);
//         ans.real = real + c.real;
//         ans.img=img + c.img;
//         return ans;
//     }
// };
// int main()
// {
//     //c1.c2
//     complex c1(1,2);
//     complex c2(1,3);
//     complex c3= c1 + c2 ;
//     cout<< c3.real << " i" << c3.img <<endl;

// }


// runtime polymorphism

class parent 
{
public:
virtual void print() //virtual keyword is used for overriding
{
    cout<<"parent class"<<endl;
}
void show()
{
    cout<<"parent class"<<endl;
}
};
class child : public parent {
    public:
    void print()
    {
        cout<<"child class"<<endl;
    }
    void show()
{
    cout<<"child class"<<endl;
}
};
int main()
{
    parent *p;
    child c;
    p=&c;
    p->print();
    p->show();
    
}