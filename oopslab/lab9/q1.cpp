#include <iostream>
using namespace std;
const double PI =3.14;
class Shape {
public:
    virtual double area() const = 0;
    virtual ~Shape() {} 
};
class Circle : public Shape {
private:
    double radius;
public:
    Circle(double r){
        this->radius=r;
    }
    double area() const override {
        return PI * radius * radius;
    }
};
class Rectangle : public Shape {
private:
    double width, height;
public:
    Rectangle(double w, double h){
        this->width=w;
        this->height=h;
    }
    double area() const override {
        return width * height;
    }
};
class Triangle : public Shape {
private:
    double base, height;
public:
    Triangle(double b, double h){
        this->base=b;
        this->height=h;
    }
    double area() const override {
        return 0.5 * base * height;
    }
};
int main() {
    Shape *shape;
    char shapeType;
    double radius, width, height, base;
  cout << "Enter the shape type (c for Circle, r for Rectangle, t for Triangle): ";
   cin >> shapeType;
    switch (shapeType) {
        case 'c':
            cout << "Enter the radius of the circle: ";
            cin >> radius;
            shape = new Circle(radius);
            break;
        case 'r':
            cout << "Enter the width and height of the rectangle: ";
            cin >> width >> height;
            shape = new Rectangle(width, height);
            break;
        case 't':
            cout << "Enter the base and height of the triangle: ";
            cin >> base >> height;
            shape = new Triangle(base, height);
            break;
        default:
            cout << "Invalid shape type" << endl;
            return 1;
    }
    cout << "The area of the shape is " << shape->area() << endl;
    delete shape; 
}
