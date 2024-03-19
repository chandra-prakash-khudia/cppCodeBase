#include <iostream>
#include <string>
using namespace std;
class Complex {
public:
    int r;
    int i;
    Complex(int real, int imaginary) {
        this->r = real;
        this->i = imaginary;
    }
    Complex operator+(Complex &obj) const {
        Complex temp(0, 0);
        temp.r = r + obj.r;
        temp.i = i + obj.i;
        return temp;
    }
    Complex operator-(Complex &obj) const {
        Complex temp(0, 0);
        temp.r = r - obj.r;
        temp.i = i - obj.i;
        return temp;
    }
    Complex operator*(Complex &obj) const {
        Complex temp(0, 0);
        temp.r = r * obj.r - i * obj.i;
        temp.i = r * obj.i + i * obj.r;
        return temp;
    }
    void print() {
        cout << r << "+i" << i << endl;
    }
};
int main() {
    // Creating objects of class complex
    Complex c1(3, -2);
    Complex c2(1, 5);

    // Calling the overloaded operators
    Complex sum_c1_c2 = c1 + c2;
    Complex diff_c1_c2 = c1 - c2;
    Complex prod_c1_c2 = c1 * c2;

    // Printing results
    cout << "Sum : ";
    sum_c1_c2.print();
    cout << "Difference : ";
    diff_c1_c2.print();
    cout << "Product : ";
    prod_c1_c2.print();
}
