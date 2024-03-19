#include <iostream>
using namespace std;
class Date {
private:
    int day;
    int month;
    int year;
    bool isLeapYear(int y) const {
        return (y % 4 == 0 && (y % 100 != 0 || y % 400 == 0));
    }

    int daysInMonth(int m, int y) const {
        switch (m) {
            case 4: case 6: case 9: case 11: return 30;
            case 2: return (isLeapYear(y) ? 29 : 28);
            default: return 31;
        }
    }
public:
    Date(int d, int m, int y){
        this->day =d;
        this->month=m;
        this->year=y;
    }
    void addDays(int n) {
        day += n;
        while (day > daysInMonth(month, year)) {
            day -= daysInMonth(month, year);
            month++;
            if (month > 12) {
                month = 1;
                year++;
            }
        }
    }

    // Function to subtract days from a date
    void subtractDays(int n) {
        day -= n;
        while (day < 1) {
            month--;
            if (month < 1) {
                month = 12;
                year--;
            }
            day += daysInMonth(month, year);
        }
    }
    int operator-(const Date& other) const {
        return ((year - other.year) * 360 + (month - other.month) * 30 + (day - other.day));
    }
    bool operator<(const Date& other) const {
        if (year != other.year)
            return year < other.year;
        if (month != other.month)
            return month < other.month;
        return day < other.day;
    }

    // Overload the == operator to compare two dates
    bool operator==(const Date& other) const {
        return (day == other.day && month == other.month && year == other.year);
    }

    // Function to display date in DD-MM-YYYY format
   void displayDate() const {
    if (day < 10) cout << '0';
    cout << day << '-';
    if (month < 10) cout << '0';
    cout << month << '-' << year << endl;
}
};
int main() {
    Date date1(15, 10, 2023); // 15th October 2023
    Date date2(1, 1, 2024);   // 1st January 2024

    date1.addDays(20);         // Add 20 days to date1
    date1.displayDate();       // Should display the updated date

    date2.subtractDays(40);    // Subtract 40 days from date2
    date2.displayDate();       // Should display the updated date

    cout << "Days between dates: " << (date2 - date1) << endl; // Calculate difference
    if (date1 < date2) {
        cout << "Date1 is earlier than Date2" << endl;
    }
    if (date1 == date2) {
        cout << "Date1 is the same as Date2" << endl;
    }
}
