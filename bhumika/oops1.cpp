#include<iostream>
#include<string>
using namespace std;
class person{
    string name;
    // int age;
    // string city;
    // long long int adhar;
    // string school;
    // string college;
    // char gender;
    public:
    void setname(string n){
        name =n;
    }
    string getname(){
        return name;
    }
    void print(){
        cout<<name<<endl;
        // cout<<age<<endl;
        // cout<<adhar<<endl;
        // cout<<school<<endl;
        // cout<<college<<endl;
        // cout<<gender<<endl;
    }
};
int main(){
    person p;
    p.setname("bhumika");
    // cout<< p.getname()<<endl;
    // p.age = 19;
    // p.city = "surat";
    // p.adhar = 1234567890;
    // p.school = "noschool";
    // p.college = "bakvas";
    // p.gender = 'f';
    p.print();
}