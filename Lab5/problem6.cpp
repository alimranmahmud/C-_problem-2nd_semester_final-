// 6. Class name will be student that have two private type data (id &amp; CGPA). Input this for 30
// students. Now find the maximum, average and minimum CGPA with help of three different
// member functions.
#include <iostream>
using namespace std;
class Student
{
    int id[40];
    float cgpa[40];

public:
    void store()
    {
        for (int i = 0; i < 3; i++)
        {
            cout << "Number of Student = " << i + 1 << endl;
            cout << "Enter Your Id : ";
            cin >> id[i];
            cout << "Enter your CGPA : ";
            cin >> cgpa[i];
            cout << endl
                 << endl;
        }
    }
    void display()
    {
        for (int i = 0; i < 3; i++)
        {
            cout << i + 1 << ". "
                 << "Your id is : " << id[i] << endl;
            cout << "Your cgpa is : " << cgpa[i] << endl;
        }
    }
    float max = cgpa[0];
    float min = cgpa[0];

    void max_min()
    {
        for (int i = 0; i < 3; i++)
        {
            if (max < cgpa[i])
            {
                max = cgpa[i];
            }
            if (min > cgpa[i])
            {
                min = cgpa[i];
            }
        }
        cout << "Maximum CGPA is : " << max << endl;
        cout << "Minimum CGPA is : " << min << endl;
    }
};

int main()
{
    Student s;
    s.store();
    s.display();
    s.max_min();

    return 0;
}