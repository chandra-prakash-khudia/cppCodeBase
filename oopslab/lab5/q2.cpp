#include<iostream>
#include<string>
using namespace std;
class Date{
    public:
    int day,month,year;//day is 1-30, month is 1-12 and year is any positive integer.
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
    void print(){
        cout<<getday()<<"/"<<getmonth()<<"/"<<getyear()  <<endl;;
    }

};
class GAP{
    Date d1;
    Date d2;
    public :
    void inputdategap(){
        cout <<"Enter the date of birth in dd/mm/yyyy format"<< endl ;
         int day1 = 365*(d1.year()) + 30*d1.getmonth()+ d1.getday();
         int day2 = 365*(d2.year()) + 30*d2.getmonth()+ d2.getday();
         cout<<"gap is "<< abs(day1 -day2)<<endl;
    }
};
int main(){
    Date d1,d2;
    d1.setday(25);
    d1.month(11);
    d1.setyear(2003);
    d2.setday(25);
    d2.setmonth(07);
    d2.setyear(2004);
    GAP g;
    g.inputdategap();
}