#include <iostream>
#include <cmath>
using namespace std;
double PI =3.14;
class Shape {
public:
    virtual double getArea() =0;
    virtual double getPerimeter()=0 ;
};
class Circle : public Shape {
private:
    double radius;

public:
    Circle(double r){
        this->radius=r;
    }

    double getArea()  {
        return PI * radius * radius;
    }

    double getPerimeter()  {
        return 2 *PI* radius;
    }
};

class Rectangle : public Shape {
private:
    double length;
    double width;

public:
    Rectangle(double l, double w) {
        this->length = l;
        this->width = w;
    }

    double getArea()  {
        return length * width;
    }

    double getPerimeter()  {
        return 2 * (length + width);
    }
};

class Triangle : public Shape {
private:
    double side1;
    double side2;
    double side3;

public:
    Triangle(double s1, double s2, double s3) {
        this->side1 = s1;
        this->side2 = s2;
        this->side3 = s3;
    }

    double getArea()  {
        double s = getPerimeter() / 2;
        return sqrt(s * (s - side1) * (s - side2) * (s - side3));
    }

    double getPerimeter()  {
        return side1 + side2 + side3;
    }
};

int main() {
    Circle circle(5.0);
    Rectangle rectangle(4.0, 6.0);
    Triangle triangle(3.0, 4.0, 5.0);

    cout << "Circle - Area: " << circle.getArea() << ", Perimeter: " << circle.getPerimeter() << endl;
    cout << "Rectangle - Area: " << rectangle.getArea() << ", Perimeter: " << rectangle.getPerimeter() << endl;
    cout << "Triangle - Area: " << triangle.getArea() << ", Perimeter: " << triangle.getPerimeter() << endl;

}
