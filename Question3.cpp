#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

class Room {
public:
    virtual double calculateBill(double units) = 0;
    virtual ~Room() {}
};

class SingleRoom : public Room {
public:
    double calculateBill(double units) override {
        return units * 8.0;
    }
};

class SharedRoom : public Room {
public:
    double calculateBill(double units, int occupants) {
        return (units * 6.0) / occupants;
    }

    double calculateBill(double units) override {
        return units * 6.0;
    }
};

class ACRoom : public Room {
public:
    double calculateBill(double units) override {
        return units * 10.0 + 200.0;
    }
};

int main() {
    int N;
    cin >> N;

    double grandTotal = 0.0;
    cout << fixed << setprecision(2);

    for (int i = 0; i < N; i++) {
        string type;
        double units;
        cin >> type >> units;

        Room* room = nullptr;
        double bill = 0.0;

        if (type == "SINGLE") {
            room = new SingleRoom();
            bill = room->calculateBill(units);
        } 
        else if (type == "SHARED") {
            int occupants;
            cin >> occupants;

            SharedRoom* shared = new SharedRoom();
            bill = shared->calculateBill(units, occupants);
            delete shared;
        } 
        else if (type == "AC") {
            room = new ACRoom();
            bill = room->calculateBill(units);
        }

        cout << type << ": " << bill << '\n';
        grandTotal += bill;

        delete room;
    }

    cout << "Total: " << grandTotal << '\n';

    return 0;
}
