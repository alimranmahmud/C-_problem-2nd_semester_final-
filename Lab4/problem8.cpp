// 9. Create a class called &quot;Rectangle&quot; with the PRIVATE variables length, width. Implement the
// constructor to initialize the length and width when an object is created. Implement the
// &quot;getArea()&quot; method to calculate the area of the rectangle.

#include <iostream>
using namespace std;
class Rectangle
{
    int length;
    int width;

public:
    Rectangle(int a, int b)
    {
        length = a;
        width = b;
    }
    void getArea()
    {
        cout << "Area : " << length * width << endl;
    }
};
int main()
{
    Rectangle area(2, 3);
    area.getArea();
    return 0;
}