#include <iostream>
#include <string>
using namespace std;
class Student;

double calculateAverageGrade(const Student &student1, const Student &student2, const Student &student3);

class Student
{
private:
    string name;
    int studentID;
    double grade;

public:
    Student(const string &studentName, int studentID, double studentGrade)
    {
        this->name = studentName;
        this->studentID = studentID;
        this->grade = studentGrade;
    }
    void getDetails()
    {
        cout << "Student Name is " << this->name << endl;
        cout << "Student ID is " << this->studentID << endl;
        cout << "Student Grade is " << this->grade << endl;
    }
    friend double calculateAverageGrade(const Student &student1, const Student &student2, const Student &student3);
};

double calculateAverageGrade(const Student &student1, const Student &student2, const Student &student3)
{
    double averageGrade = (student1.grade + student2.grade + student3.grade) / 3.0;
    return averageGrade;
}

int main()
{
    Student student1("student1", 101, 90.5);
    student1.getDetails();
    Student student2("student2", 102, 85.0);
    student2.getDetails();
    Student student3("student3", 103, 88.5);
    student3.getDetails();

    double average = calculateAverageGrade(student1, student2, student3);
    cout << "Average Grade for the group of students: " << average << endl;
}
