// 5. Create a class called &quot;Rectangle&quot; with width and height attributes. Calculate
// the area with a member function called calculate_area and calculate
// perimeter with a member function called calculate_perimeter of the
// rectangle using the object of the created class. (hint: area = height*width,
// perimeter = 2*(height+width) )
#include <iostream>
using namespace std;
class Rectangle
{
protected:
    int width, height;

public:
    Rectangle(int w, int h) : width(w), height(h) {}
    void calculate_area()
    {
        cout << "Area : " << height * width << endl;
    }
    void calculate_perimeter()
    {
        cout << "perimeter : " << 2 * (height + width) << endl;
    }
};
int main()
{
    Rectangle obj(21, 23);
    obj.calculate_area();
    obj.calculate_perimeter();
    return 0;
}