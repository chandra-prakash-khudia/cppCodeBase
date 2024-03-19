#include <iostream>
#include <string>
#include <vector>
using namespace std;
class Vehicle {
protected:
    string make;
    string model;
    int year;
    double baseRate; 
public:
    Vehicle(string make, string model, int year, double baseRate){
        this->make = make;
        this->model = model;
        this->year = year;
        this->baseRate = baseRate;

    }

    virtual double calculateRentalCost(int duration, double distance,  vector<string> services) const {
        double cost = duration * baseRate;
        for (const auto& service : services) {
            if (service == "Insurance") {
                cost += 50.0 * duration;
            } else if (service == "Extra Driver") {
                cost += 15.0 * duration;
            }
        }
        return cost;
    }

    virtual ~Vehicle() {}
};

class Car : public Vehicle {
public:
    Car(string make,string model, int year, double baseRate)
        : Vehicle(make, model, year, baseRate) {}

    double calculateRentalCost(int duration, double distance,  vector<string> services) const override {
        double cost = Vehicle::calculateRentalCost(duration, distance, services);
        cost += 0.3 * distance; 
        return cost;
    }
};

class Bike : public Vehicle {
public:
    Bike(string make, string model, int year, double baseRate)
        : Vehicle(make, model, year, baseRate) {}

    double calculateRentalCost(int duration, double distance,  vector<string> services) const override {
        double cost = Vehicle::calculateRentalCost(duration, distance, services);
        cost += 0.1 * distance; 
        return cost;
    }
};

class Bus : public Vehicle {
public:
    Bus(string make,string model, int year, double baseRate)
        : Vehicle(make, model, year, baseRate) {}

    double calculateRentalCost(int duration, double distance, vector<string>services) const override {
        double cost = Vehicle::calculateRentalCost(duration, distance, services);
        cost += 0.5 * distance; 
      
        cost += 100.0; 
        return cost;
    }
};

int main() {

    Car car("Toyota", "Corolla", 2020, 50);
    Bike bike("Harley Davidson", "Street 750", 2019, 30);
    Bus bus("Volvo", "B9R", 2018, 150);

    vector<string> services = {"Insurance", "Extra Driver"};

   
    cout << "Car rental cost: " << car.calculateRentalCost(3, 250, services) << endl;
    cout << "Bike rental cost: " << bike.calculateRentalCost(2, 100, services) << endl;
    cout << "Bus rental cost: " << bus.calculateRentalCost(1, 300, services) << endl;
}
