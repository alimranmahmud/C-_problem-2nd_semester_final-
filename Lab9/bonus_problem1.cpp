// Write a program to create a class called Vehicle with a method called drive(). Create a subclass called Car that overrides the drive() method to print "Repairing a car".
#include <iostream>
using namespace std;
class Vehicle
{
public:
    void drive()
    {
        cout << "Vehicle class called." << endl;
    }
};
class Car : public Vehicle
{
public:
    void drive()
    {
        cout << "Repairing a car" << endl;
    }
};
int main()
{
    Car BMW;
    BMW.drive();

    return 0;
}