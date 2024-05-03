// 2. Write a C++ program to implement a class called Student that has private member
// variables for name, class, roll number, and marks. Include member functions to calculate
// the grade based on the marks and display the student&#39;s information. Also print maximum
// mark with help of a Maxi() function.
#include <iostream>
using namespace std;
class Student
{
private:
    string name;
    int Class, roll_number, marks[20];

public:
    void setValue(string n, int c, int r)
    {
        name = n;
        Class = c;
        roll_number = r;
    }
    void set_marks()
    {
        for (int i = 0; i < 3; i++)
        {
            cin >> marks[i];
        }
    }
    void display()
    {
        cout << "Your name is : " << name << endl;
        cout << "Your class is : " << Class << endl;
        cout << "Your roll number is : " << roll_number << endl;
        cout << endl;
        cout << "Your Marks : " << endl;
        for (int i = 0; i < 3; i++)
        {
            cout << marks[i] << endl;
        }
        int max = marks[0];
        for (int i = 0; i < 3; i++)
        {
            if (max < marks[i])
            {
                max = marks[i];
            }
        }
        cout << "Your maximum subject number : " << max << endl;
    }
};
int main()
{

    string name;
    int Class, roll;
    cin >> name >> Class >> roll;
    Student s;
    s.setValue(name, Class, roll);
    cout << "Enter the marks : " << endl;
    s.set_marks();
    s.display();

    return 0;
}