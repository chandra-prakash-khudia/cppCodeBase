#include <iostream>
using namespace std;
class Person {
private:
    string name;
    int age;    
public:
    Person(const string& name, int age) {
       //declare the name
       this->name = name;
       //declare the age
       this->age = age;
    
    }

    void displayInfo() const {
        cout << "Name: " << name << ", Age: " << age;
    }
};

class Employee : public Person {
private:
    double hourlyRate;
    double hoursWorked;    
public:
    Employee(const string& name, int age, double hourlyRate, double hoursWorked):Person(name,age){
        // call the constructor of class person to initialize name and age.
        
        hourlyRate = hourlyRate;
        hoursWorked = hoursWorked;

    } 

    double calculateWage() const {
        return hourlyRate * hoursWorked;
    }

    void displayWage() const {
        cout << "Wage: " << calculateWage();
    }


};

class RegularEmployee : public Employee {
public:
    RegularEmployee(const string& name, int age, double hourlyRate, double hoursWorked):Employee(name, age, hourlyRate, hoursWorked){
        // call the constructor of class employee to initialize all fields.
    

    }

    void displayEmployeeType() const {
         cout << "Employee Type: Regular";
    }
};

class ContractualEmployee : public Employee {
public:
    ContractualEmployee(const string& name, int age, double hourlyRate, double hoursWorked): Employee(name, age, hourlyRate, hoursWorked){
        // call the constructor of class employee to initialize all fields.
      

    }

    void displayEmployeeType() const {
        cout << "Employee Type: Contractual";
    }
};

class GuestEmployee : public Employee {
public:
    GuestEmployee(const string& name, int age, double hourlyRate, double hoursWorked):Employee(name, age, hourlyRate, hoursWorked){
        //write 
    
    }

    void displayEmployeeType() const {
        cout << "Employee Type: Guest";
    }
};

int main() {
    RegularEmployee regularEmployee("John", 30, 15.0, 40);
    ContractualEmployee contractualEmployee("Alice", 25, 20.0, 30);
    GuestEmployee guestEmployee("Bob", 22, 18.0, 25);

    regularEmployee.displayInfo();cout <<endl;
    regularEmployee.displayEmployeeType();cout<<endl;
    regularEmployee.displayWage(); cout <<endl <<endl;

    contractualEmployee.displayInfo();cout <<endl;
    contractualEmployee.displayEmployeeType();cout <<endl;
    contractualEmployee.displayWage();cout<<endl <<endl;

    guestEmployee.displayInfo();cout<<endl;
    guestEmployee.displayEmployeeType();cout <<endl;
    guestEmployee.displayWage();
}
