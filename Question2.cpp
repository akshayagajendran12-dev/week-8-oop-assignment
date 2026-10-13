#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

class Vehicle {
public:
    virtual double calculateCharge(int hours) = 0;
    virtual ~Vehicle() {}
};

class Bike : public Vehicle {
public:
    double calculateCharge(int hours) override {
        return hours * 10.0;
    }
};

class Car : public Vehicle {
public:
    double calculateCharge(int hours) override {
        if (hours <= 0)
            return 0.0;
        return 30.0 + (hours - 1) * 20.0;
    }
};

class Truck : public Vehicle {
public:
    double calculateCharge(int hours) override {
        double charge = hours * 50.0;
        return (charge < 100.0) ? 100.0 : charge;
    }
};

int main() {
    int N;
    cin >> N;

    double grandTotal = 0.0;
    cout << fixed << setprecision(2);

    for (int i = 0; i < N; i++) {
        string type;
        int hours;
        cin >> type >> hours;

        Vehicle* vehicle = nullptr;

        if (type == "BIKE") {
            vehicle = new Bike();
        } else if (type == "CAR") {
            vehicle = new Car();
        } else if (type == "TRUCK") {
            vehicle = new Truck();
        }

        if (vehicle != nullptr) {
            double charge = vehicle->calculateCharge(hours);
            cout << type << ": " << charge << '\n';
            grandTotal += charge;
            delete vehicle;
        }
    }

    cout << "Total: " << grandTotal << '\n';

    return 0;
}
