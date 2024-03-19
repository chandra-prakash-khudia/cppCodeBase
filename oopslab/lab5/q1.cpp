#include <iostream>
#include <string>

using namespace std;

class Date
{
public:
    int day, month, year; // day is 1-30, month is 1-12 and year is any positive integer.
public:
    void setday(int d)
    {
        if (d >= 1 && d <= 30)
        {
            day = d;
        }
    }
    int getday()
    {
        return day;
    }
    void setmonth(int m)
    {
        if (m >= 1 && m <= 12)
            month = m;
    }
    int getmonth()
    {
        return month;
    }
    void setyear(int y)
    {
        if (y > 2000)
        {
            year = y;
        }
    }
    int getyear()
    {
        return year;
    }
     void date()
        {
            cout << getday() << "/" << getmonth() << "/" << getyear() << endl;
        }
};
class student
{
    string name;
    string rollno;
    Date DOB;
    int marks[5];

public:
    student()
    {
        name = "NULL";
        rollno = "NULL";
        for (int i = 0; i < 5; i++)
        {
            marks[i] = 0;
        }
    }
    student(string n, string rn, Date d, int m[])
    {
        name = n;
        rollno = rn;
        DOB = d;
        for (int i = 0; i < 5; ++i)
        {
            marks[i] = m[i];
        }
    }
    int calculateavg()
    {
        int sum = 0;
        for (int i = 0; i < 5; i++)
        {
            sum += marks[i];
        }
        return (sum / 5);
    }
    int totalmarks()
    {
        int sum = 0;
        for (int i = 0; i < 5; i++)
        {
            sum += marks[i];
        }
        return sum;
    }
    void grade()
    {
        cout << "name :" << name << endl;
        cout << "roll no: " << rollno << endl;
        cout << "date of birth is: ";
        DOB.date();
        cout << endl;
        cout << "total marks are " << totalmarks() << endl;
    }
};

int main()
{
   
    Date d1;

    d1.setday(15);
    d1.setmonth(7);
    d1.setyear(2004);
    int marks[5]={45,78,78,56,87};
 student s1("chandra","2022BCSE063",d1,marks);
    s1.grade();
}