#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

class Employee {
public:
    virtual double calculateBonus(double salary) = 0;
    virtual ~Employee() {}
};

class FullTime : public Employee {
public:
    double calculateBonus(double salary) override {
        return salary * 0.10;
    }
};

class PartTime : public Employee {
public:
    double calculateBonus(double salary) override {
        return salary * 0.05;
    }
};

class Intern : public Employee {
public:
    double calculateBonus(double salary) override {
        return 2000.0;
    }
};

int main() {
    int N;
    cin >> N;

    double grandTotal = 0.0;
    cout << fixed << setprecision(2);

    for (int i = 0; i < N; i++) {
        string type, name;
        double salary;

        cin >> type >> name >> salary;

        Employee* employee = nullptr;

        if (type == "FULLTIME") {
            employee = new FullTime();
        } else if (type == "PARTTIME") {
            employee = new PartTime();
        } else if (type == "INTERN") {
            employee = new Intern();
        }

        if (employee != nullptr) {
            double bonus = employee->calculateBonus(salary);

            cout << name << ": " << bonus << '\n';
            grandTotal += bonus;

            delete employee;
        }
    }

    cout << "Total Bonus: " << grandTotal << '\n';

    return 0;
}
