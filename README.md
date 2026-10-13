# week-8-oop-assignment
# Week 8 – OOPD Coding Assignment

**Language:** C++  
**Subject:** Object-Oriented Programming and Design (OOPD)

## Question 1: The Canteen Billing Counter

### Aim
To calculate the final bill amount for students, staff, and guests using object-oriented programming concepts.

### Algorithm
1. Start the program.
2. Read the number of bills, `N`.
3. Create a base class `Customer` with a virtual function to calculate the final amount.
4. Create derived classes `Student`, `Staff`, and `Guest`.
5. Apply the billing rules:
   - Student: Apply a 10% discount.
   - Staff: Apply a 5% discount.
   - Guest: Add a ₹10 service charge.
6. For each bill, read the customer type and bill amount.
7. Create the appropriate customer object and calculate the final amount using runtime polymorphism.
8. Display the customer type and final amount to two decimal places.
9. Add each final amount to the grand total.
10. Display the total amount collected.
11. Stop the program.

**File:** `Question1.cpp`

## Question 2: The Campus Parking Charge Calculator

### Aim
To calculate parking charges for bikes, cars, and trucks according to the number of hours parked.

### Algorithm
1. Start the program.
2. Read the number of parked vehicles, `N`.
3. Create a base class `Vehicle` with a virtual function to calculate parking charges.
4. Create derived classes `Bike`, `Car`, and `Truck`.
5. Apply the parking rules:
   - Bike: ₹10 per hour.
   - Car: ₹30 for the first hour and ₹20 for each additional hour.
   - Truck: Calculate the charge according to the specified truck rate and minimum charge.
6. For each vehicle, read its type and parking duration.
7. Create the corresponding vehicle object.
8. Calculate the parking charge using runtime polymorphism.
9. Display the vehicle type and charge to two decimal places.
10. Add each charge to the grand total.
11. Display the total parking charges collected.
12. Stop the program.

**File:** `Question2.cpp`

## Question 3: The Hostel Electricity Bill

### Aim
To calculate electricity bills for single, shared, and AC rooms using inheritance and polymorphism.

### Algorithm
1. Start the program.
2. Read the number of rooms, `N`.
3. Create a base class `Room` with a virtual function to calculate the electricity bill.
4. Create derived classes `SingleRoom`, `SharedRoom`, and `ACRoom`.
5. Apply the billing rules:
   - Single room: ₹8 per unit.
   - Shared room: ₹6 per unit, divided equally among the occupants.
   - AC room: ₹10 per unit plus a fixed charge of ₹200.
6. For each room, read the room type and electricity units.
7. For a shared room, also read the number of occupants.
8. Calculate the bill according to the room type.
9. Display the room type and bill amount to two decimal places.
10. Add the amount paid for each room to the grand total.
11. Display the total amount.
12. Stop the program.

**File:** `Question3.cpp`

## Question 4: The Festival Bonus Calculator

### Aim
To calculate employee festival bonuses based on employment type and monthly salary.

### Algorithm
1. Start the program.
2. Read the number of employees, `N`.
3. Create a base class `Employee` with a virtual function to calculate the bonus.
4. Create derived classes `FullTime`, `PartTime`, and `Intern`.
5. Apply the bonus rules:
   - Full-time employees: 10% of monthly salary.
   - Part-time employees: 5% of monthly salary.
   - Interns: A fixed bonus of ₹2,000.
6. For each employee, read the employee type, name, and monthly salary.
7. Create the corresponding employee object.
8. Calculate the bonus using runtime polymorphism.
9. Display the employee name and bonus to two decimal places.
10. Add each bonus to the grand total.
11. Display the total bonus paid.
12. Stop the program.

**File:** `Question4.cpp`

## Question 5: The Streaming Plan Renewal Reminder

### Aim
To calculate subscription renewal dates based on the streaming plan and its validity period.

### Algorithm
1. Start the program.
2. Read the number of subscribers, `N`.
3. For each subscriber, read the plan type, subscriber name, and start date in `YYYY-MM-DD` format.
4. Determine the plan validity:
   - Basic: 30 days.
   - Standard: 90 days.
   - Premium: 365 days.
5. Convert the start date into year, month, and day values.
6. Add the plan's validity period to the start date.
7. Handle different month lengths and leap years correctly.
8. Format the renewal date as `YYYY-MM-DD`.
9. Display the subscriber name and renewal date.
10. Repeat for all subscribers.
11. Stop the program.

**File:** `Question5.cpp`

## OOP Concepts Used

- **Class and Object:** Represent different customers, vehicles, rooms, and employees.
- **Inheritance:** Derived classes reuse and extend base-class functionality.
- **Abstraction:** Base classes define common interfaces for related objects.
- **Method Overriding:** Derived classes implement their own calculation methods.
- **Runtime Polymorphism:** Virtual functions select the appropriate implementation at runtime.

## Repository Structure

```text
DSA-assignment/
├── README.md
├── Question1.cpp
├── Question2.cpp
├── Question3.cpp
├── Question4.cpp
└── Question5.cpp
```

## Conclusion

This assignment demonstrates the application of object-oriented programming concepts in C++ to solve practical problems involving billing, parking charges, electricity bills, employee bonuses, and subscription renewal dates.
