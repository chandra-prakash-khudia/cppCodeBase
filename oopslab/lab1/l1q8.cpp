 #include <iostream>
using namespace std;
int main() {
    int dividend, divisor;
    cout << "Enter dividend: ";
    cin >> dividend;
    cout << "Enter divisor: ";
    cin >> divisor;

    if (divisor == 0) {
        cout << "Divisor cannot be zero." << endl;
    } else {
        int quotient = dividend / divisor;
         cout<< "Truncated Quotient: " << quotient << endl;
    }

  
}