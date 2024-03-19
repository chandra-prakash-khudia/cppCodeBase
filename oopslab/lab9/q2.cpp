#include <iostream>
#include <string>
using namespace std;
class Employee {
protected:
    string name;
    int experience; 
    double baseSalary;
public:
    Employee( string n, int exp, double salary){
        this->name =n;
        this->experience=exp;
        this->baseSalary=salary;
    }

    virtual double calculateSalary() const {
        return baseSalary + (experience * 1000); 
    }
    virtual ~Employee() {}

    void displaySalary() const {
      cout << "The salary of " << name << " is " << calculateSalary() << endl;
    }
};
class Teaching : public Employee {
private:
    double teachingAllowance;
public:
    Teaching(string n, int exp, double salary, double allowance)
        : Employee(n, exp, salary){
            this->teachingAllowance = allowance;
        }
    double calculateSalary() const override {
        return baseSalary + (experience * 1000) + teachingAllowance;
    }
};
class NonTeaching : public Employee {
private:
    double nonTeachingAllowance;
public:
    NonTeaching(string n, int exp, double salary, double allowance)
        : Employee(n, exp, salary){
            this->nonTeachingAllowance = allowance;
        }
    double calculateSalary() const override {
        return baseSalary + (experience * 500) + nonTeachingAllowance; 
    }
};
class Contractual : public Employee {
private:
    int contractDuration; 
public:
    Contractual(string n, int exp, double salary, int duration)
        : Employee(n, exp, salary){
            this->contractDuration = duration;
        }

    double calculateSalary() const override {
        return baseSalary * (contractDuration / 12.0); 
    }
};
int main() {
    Teaching teachingEmp("ARJUN", 5, 3000, 500);
    NonTeaching nonTeachingEmp("salman", 3, 2500, 300);
    Contractual contractualEmp("AShok", 2, 2000, 6);

    teachingEmp.displaySalary();
    nonTeachingEmp.displaySalary();
    contractualEmp.displaySalary();
}
