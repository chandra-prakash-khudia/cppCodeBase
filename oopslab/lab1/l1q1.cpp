#include<bits/stdc++.h>
using namespace std;
int pointer(int temp){
    if(temp<=100 && temp > 90){
        return 10;
    }else if(temp<=90 && temp > 80){
        return 9;
    }else if(temp<=80 && temp > 70){
        return 8;
    }else if(temp<=70 && temp > 60){
        return 7;
    }else if(temp<=60 && temp > 50){
        return 6;
    }else if(temp<=50 && temp > 40){
        return 5;
    }else{
        return 0;
    }
}
string grade(float temp){
    if(temp<=10 && temp > 9){
        return "A+";
    }else if(temp<=9 && temp > 8){
        return "A";
    }else if(temp<=8 && temp > 7){
        return "B+";
    }else if(temp<=7 && temp > 6){
        return "B";
    }else if(temp<=6 && temp > 5){
        return "C+";
    }else if(temp<=5 && temp > 4){
        return "C";
    }else{
        return "F";
    }
}
int main(){
    string name,enroll,branch,dob;
    cout<<"Enter your full name: ";
    getline(cin,name);
    cout<<"Enter your DOB: ";
    getline(cin,dob);
    cout<<"Enter your branch:";
    getline(cin,branch);
    cout<<"Enter your enrollment number: ";
    getline(cin,enroll);
    map<string,int> sub_marks;
    cout<<"Enter your marks of 4 subjects: "<<endl;
    int sum1 = 0;
    for(int i = 0;i<4;i++){
        string subject;
        cout<<"Enter Subject name: ";
        getline(cin,subject);
        int temp;
        cout<<"Enter marks: ";
        cin>>temp;
        fflush(stdin);
        sub_marks[subject] = pointer(temp);
        sum1 += pointer(temp)*4;
    }
    map<string,int> lab_marks;
    cout<<"Enter your marks of 2 labs: "<<endl;
    int sum2 = 0;
    for(int i = 0;i<2;i++){
        string lab;
        cout<<"Enter lab name: ";
        getline(cin,lab);
        int temp;
        cout<<"Enter marks: ";
        cin>>temp;
        fflush(stdin);
        lab_marks[lab] = pointer(temp);
        sum2 += pointer(temp)*2;
    }
    int total_marks = sum1 + sum2;
    float sgpa = total_marks/20.0;
    cout<<"\t\t NIT SRINAGAR"<<endl;
    cout<<"Name : "<<name<<"\t"<<"Branch: "<<branch<<endl;
    cout<<"Enrollment Number: "<<enroll<<"\t"<<"DOB: "<<dob<<endl;
    cout<<"Subject/course Name \t\t Grade point \t\t Grade"<<endl;
    for(auto& i:sub_marks){
        cout<<i.first<<"\t"<<i.second<<"\t"<<grade(i.second)<<endl;
    }
    for(auto& i:lab_marks){
        cout<<i.first<<"\t"<<i.second<<"\t"<<grade(i.second)<<endl;
    }
    cout<<endl<<"SGPA: "<<sgpa<<"\t"<<"Grade: "<<grade(sgpa)<<endl;
}