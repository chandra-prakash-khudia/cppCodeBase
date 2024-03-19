#include<iostream>
#include<string>
using namespace std;
class person{
    string name;
    string ID;
    int age;
    char  gender;
    string address;
    long long int contact;
    float height;
    float weight;
    string bloodgroup;
    string parentage;
    public:
    void setdetails(string n,string i,int a,char  g, string ad,long long int c, float h,float w, string b,string p){
        name=n;
        ID=i;
        age=a;
        gender=g;
        address=ad;
        contact=c;
        height=h;
        weight=w;
        bloodgroup=b;
        parentage=p;
    }
    void print(){
        cout<<"Name:"<<name<<endl;
        cout<<"ID: "<<ID<<endl;
        cout<<"age: "<<age<<endl;
        cout<<"gender: "<<gender<<endl;
        cout<<"address: "<<address<<endl;
        cout<<"contact:"<<contact<<endl;
        cout<<"height in cm:"<<height<<endl;
        cout<<"wight in KG: "<<weight<<endl;
        cout<<"bg: "<<bloodgroup<<endl;
        cout<<"parentage: "<<parentage<<endl;

    }
};
int main(){
    person p1;
    p1.setdetails("Random","2022BCE999",47,'M',"UK ",123567890 ,175.2,56,"B+","Random  ");
    p1.print();
}