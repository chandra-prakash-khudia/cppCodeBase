#include <iostream>
#include <string>
using namespace std;
class Car;

bool canSubstitute(const Car& car1, const Car& car2);

class Car {
    string model;
    string color;
    double price;
    bool available;

public:
    Car(const string& carModel, const string& carColor, double carPrice){
        this->model = carModel;
        this->color = carColor;
        this->price=carPrice;
        this->available = true;
    }
        
    void setAvailability(bool isAvailable) {
        available = isAvailable;
    }

   
    friend bool canSubstitute(const Car& car1, const Car& car2);
};


bool canSubstitute(const Car& car1, const Car& car2) {

    return (car1.model == car2.model) && (car1.color == car2.color);
}
int main() {
    Car car1("Toyota Camry", "Blue", 25000.0);
    Car car2("Honda Accord", "Red", 28000.0);
    Car car3("Toyota Camry", "Blue", 23000.0);
    if (canSubstitute(car1, car2)) {
        cout << "Car 1 and Car 2 can be substituted for each other." << endl;
    } else {
        cout << "Car 1 and Car 2 cannot be substituted for each other." << endl;
    }
    if (canSubstitute(car1, car3)) {
        cout << "Car 1 and Car 3 can be substituted for each other." << endl;
    } else {
        cout << "Car 1 and Car 3 cannot be substituted for each other." << endl;
    }
}
