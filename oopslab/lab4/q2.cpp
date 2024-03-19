#include<iostream>
#include<string>
using namespace std;
class Date{
    int day,month,year;//day is 1-30, month is 1-12 and year is any positive integer.
    string dayname;
    public:
    void setday(int d){
        if (d>=1 && d<=30){
            day =d;
        }

    }
    int getday(){
        return day;
    }
    void setmonth(int m ){
        if(m >=1&&m <=12)
            month=m;
    }
    int getmonth(){
        return month;
    }
    void setyear(int y){
        if(y>2000){
            year=y;
        }
    }
    int getyear(){
        return year;
    }
    void setdayname(string dn){
        dayname=dn;
    }
    void print(){
        cout<<getday()<<"/"<<getmonth()<<"/"<<getyear()  <<endl;;
    }

};
int main(){
    Date d1,d2;
    d1.setday(25);
    d1.setmonth(07);
    d1.setyear(2004);
    d1.setdayname("Sunday");
    d2.setday(25);
    d2.setmonth(11);
    d2.setyear(2003);
    d2.setdayname("Tuesday");
    d1.print();
    d2.print();
}