#include <iostream>
#include <string>

using namespace std;

class Employee
{
private:
    string name, qualification, department, skill_sets;
    int employeeID, age, experience, campusStay, basicPay, DA, TA, HRA;

public:
    void set_details(string name, int employeeID, int age, string qualification, string department, string skill_sets, int experience, int campusStay, int basicPay, int DA, int TA, int HRA)
    {
        this->name = name;
        this->employeeID = employeeID;
        this->age = age;
        this->qualification = qualification;
        this->department = department;
        this->skill_sets = skill_sets;
        this->experience = experience;
        this->campusStay = campusStay;
        this->basicPay = basicPay;
        this->DA = DA;
        this->TA = TA;
        this->HRA = HRA;
    }
    void set_campusStay(int campusStay)
    {
        this->campusStay = campusStay;
    }
    void set_name(string name)
    {
        this->name = name;
    }
    void set_employeeID(int employeeID)
    {
        this->employeeID = employeeID;
    }
    void set_age(int age)
    {
        this->age = age;
    }
    void set_qualification(string qualification)
    {
        this->qualification = qualification;
    }
    void set_department(string department)
    {
        this->department = department;
    }
    void set_skill_sets(string skill_sets)
    {
        this->skill_sets = skill_sets;
    }
    void set_experience(int experience)
    {
        this->experience = experience;
    }
    string get_name()
    {
        return name;
    }
    int get_employeeID()
    {
        return employeeID;
    }
    int get_age()
    {
        return age;
    }
    string get_qualification()
    {
        return qualification;
    }
    string get_department()
    {
        return department;
    }
    string get_skill_sets()
    {
        return skill_sets;
    }
    int get_experience()
    {
        return experience;
    }
    int get_campusStay()
    {
        return campusStay;
    }
    int total_salary(int basicPay,int DA, int TA , int HRA){
        return basicPay+DA+TA+HRA;
    }
    void show_details(){
        cout<<"Name: "<<name<<endl;
        cout<<"EmployeeID: "<<employeeID<<endl;
        cout<<"Age: "<<age<<endl;
        cout<<"Qualification: "<<qualification<<endl;
        cout<<"Department: "<<department<<endl;
        cout<<"Skill Sets: "<<skill_sets<<endl;
        cout<<"Experience: "<<experience<<endl;
        cout<<"Campus Stay: "<<campusStay<<endl;
        cout<<"Basic Pay: "<<basicPay<<endl;
        cout<<"Dearness Allowance: "<<DA<<endl;
        cout<<"Travell Allowance: "<<TA<<endl;
        cout<<"House Rent Allowance: "<<HRA<<endl;
        cout<<"Total Salary: "<<total_salary(basicPay,DA,TA,HRA)<<endl;
    }
};
int main(){
    Employee e1;
    e1.set_details("Random",101,19,"12th","CSE","C++, Python, HTML, CSS, C",0,16000,60000,5000,10000,8000);
    e1.show_details();
}