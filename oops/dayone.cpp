#include<iostream>
#include<string>
// class  is  empty then object get 1 byte of memory for identification 
// #include "Hero.cpp"  (for icludimg other file in given code)
using namespace std;
class Hero{
    // properties
    private:
    int health;
    //private:
    public:
    char *name;
    char level ;

Hero ()
{
    cout<<"simple constructor called "<<endl;
    name=new char[100];
}

//parameterised constructer
Hero (int health)
{
   // cout<<" this "<<this<<endl;
   this->health=health;
}

Hero (int health,char level)
{
  //  cout<<" this "<<this<<endl;
   this->health=health;
   this->level=level;
}

    
 void print()
{
    cout<<" this "<<this<<endl;
    cout<<this->level<<endl;
    cout<<this->health<<endl;
    cout<<endl;
} 

    //copy constructer
 Hero(Hero& temp)
 {
 cout<<" copy constructer is called "<<endl;
 this->health=temp.health;
 this->level=temp.health;
 }
 int getHealth()
 {
     return health;
 } 
 char getLevel(){
     return level;
 }
 void setHealth(int h)
 {
     health =h;
 }
 void setLevel(char ch)
 {
     level =ch;
 }
 void getName(char name[])
 {
     strcpy(this->name ,name); S
 }
};

int main()
{

Hero suresh(80,'C');

//copy constructer called
Hero ritesh(suresh);
             // ritesh.health =suresh.health;   this is same as above 
             // ritesh.level =suresh.level;
ritesh.print();




    //creation of object s 
    //Hero h1;
    // cout<<"size:"<<sizeof(h1)<<endl; 
    // Hero ramesh;
    // //ramesh.health=70;
     
    // cout<<"ramesh health is "<<ramesh.getHealth()<<endl;
    // //use setter
    // ramesh.setHealth(70);
    // ramesh.level='A';
    // cout<<"ramesh health is "<<ramesh.getHealth()<<endl;
    // cout<< "level is :"<<ramesh.level<<endl;


// //statics memory
// Hero a;
// //dyanmic memory
// Hero *b=new Hero;
// cout<<" health is "<<(*b).level<<endl;
// cout<<" health is "<<(*b).getHealth()<<endl;

// b->setLevel('A');
// b->setHealth(70);
// cout<<" health is "<<b->level<<endl;
// cout<<" health is "<<b->getHealth()<<endl;

//object created statically 
// cout<<"hi"<<endl;
// Hero ramesh;
// cout<<"hello"; 


//dynamiclly
//  Hero *h =new Hero(); // new Hero;
//  h->print();
// cout<<" hi" <<endl;
// Hero ramesh (10);
// //cout<<"address of ramesh " << &ramesh <<endl; 
// //ramesh.getHealth();
// ramesh.print();


// Hero temp(20,'A');
// temp.print();

}