#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

// Base class
class Customer {
public:
    virtual double calculateAmount(double amount) = 0;
    virtual ~Customer() {}
};

// Derived class for students
class Student : public Customer {
public:
    double calculateAmount(double amount) override {
        return amount - (amount * 0.10);
    }
};

// Derived class for staff
class Staff : public Customer {
public:
    double calculateAmount(double amount) override {
        return amount - (amount * 0.05);
    }
};

// Derived class for guests
class Guest : public Customer {
public:
    double calculateAmount(double amount) override {
        return amount + 10.0;
    }
};

int main() {
    int N;
    cin >> N;

    double grandTotal = 0.0;

    cout << fixed << setprecision(2);

    for (int i = 0; i < N; i++) {
        string type;
        double amount;
        cin >> type >> amount;

        Customer* customer = nullptr;

        if (type == "STUDENT") {
            customer = new Student();
        } else if (type == "STAFF") {
            customer = new Staff();
        } else if (type == "GUEST") {
            customer = new Guest();
        }

        if (customer != nullptr) {
            double finalAmount = customer->calculateAmount(amount);

            cout << type << ": " << finalAmount << '\n';
            grandTotal += finalAmount;

            delete customer;
        }
    }

    cout << "Total: " << grandTotal << '\n';

    return 0;
}
