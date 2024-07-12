#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    /// Primitive Datatypes

    // 1. Integer Datatypes
    int age = 10;                               // 4 bytes
    short count = 20;                           // 2 bytes
    long distance = 100000000;                  // 4 bytes
    long long population = 1000000000000000000; // 8 bytes

    // If the size of  `int` and `long` is same then why do we have `long`?
    // 'cause `long` can store larger values than `int`, it depends on the compiler
    // `int` is guaranteed to be atleast 2 bytes, `long` is atleast 4 bytes

    // 2. Character Datatypes
    char grade = 'A'; // 1 byte
    // char16_t, char32_t, wchar_t are also character datatypes

    // 3. Boolean Datatypes
    bool isVisible = true; // 1 byte

    // 4. Floating Point Datatypes
    float pi = 3.1416;                                               // 4 bytes // for single precision
    double e = 2.71828;                                              // 8 bytes // for double precision
    long double phi = 1.6180339887498948482045868343656381177203091; // 12 bytes

    /// Derived Datatypes

    // 1. Array
    int marks[3] = {10, 20, 30}; // 3 * 4 = 12 bytes

    // 2. Pointer
    int cpi = 8.9;
    int *ptr = &cpi; // 4 bytes

    // 3. Reference
    int x = 10;
    int &y = x; // 4 bytes

    /// Enumeration Datatypes
    // Used to define a type that consists of a set of named integral constants
    enum Color
    {
        RED,
        GREEN,
        BLUE
    };

    enum Vehicle
    {
        CAR,
        BIKE,
        TRUCK
    };

    /// User Defined Datatypes

    // 1. Structure - Collection of variables of different types
    struct Student
    {
        int roll;
        char name[20];
        float marks;
    };

    Student piyush = {
        1,
        "Piyush",
        100.0,
    };

    // 2. Union - Similar to structure but all variables share the same memory
    union Money
    {
        int rupees;
        float dollars;
    };
    Money money;
    money.rupees = 1;
    money.dollars = 80;

    // 3. Class -  Blueprint for objects, encapsulating data and functions
    class Car
    {
    public:
        string model;
        int year;
        void start()
        {
            cout << "Car started" << endl;
        }
    };
    Car car;
    car.model = "Tesla";
    car.year = 2023;
    car.start();

    return 0;
}
