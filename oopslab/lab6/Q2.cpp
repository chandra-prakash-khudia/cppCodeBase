#include <iostream>
#include<string>
using namespace std;

class Employee;

void calculateAnnualBonus(Employee& emp);

class Employee {
private:
    string name;
    string designation;
    double salary;

    
    friend void calculateAnnualBonus(Employee& emp);

public:
    
    Employee(string name, string designation, double salary){
      this->name = name;
      this->designation = designation;
      this->salary = salary;
    }
};

void calculateAnnualBonus(Employee &emp) {
    double bonus = 0.0;

     if (emp.designation == "Manager") {
        bonus = emp.salary * 0.15;
    } else if (emp.designation == "Engineer") {
        bonus = emp.salary * 0.10;
    } else {
        bonus = emp.salary * 0.05;
    }
    cout << "Annual bonus for " << emp.name << " is: " << bonus <<endl;
}

int main() {
    Employee emp1("random1", "Manager", 50000.0);
    calculateAnnualBonus(emp1);
    Employee emp2("random2", "Engineer", 40000.0);
    calculateAnnualBonus(emp2);
    Employee emp3("random3", "Intern", 30000.0);
    calculateAnnualBonus(emp3);
    return 0;
}
