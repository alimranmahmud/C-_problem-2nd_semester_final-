// // 1. Create a class called &quot;Shape&quot; with width and height attributes. Create two
// // objects of the &quot;Shape&quot; class,one is for rectangle and one is for square.
// // Calculate the area and perimeter of the rectangle and square. (hint: square
// // area = height*height, perimeter = 4*height)
#include <iostream>
using namespace std;
class Shape
{
public:
    int width, heightr, heights;

    void rectangle(int a, int b)
    {
        width = a;
        heightr = b;
    }
    void square(int c)
    {
        heights = c;
    }
    void get_rectangle()
    {
        cout << "Rectangle." << endl;
        cout << "area : " << width + heightr << endl;
        cout << "perimeter : " << 2 * width + heightr << endl;
    }
    void get_square()
    {
        cout << "Square." << endl;
        cout << "area : " << heights * heights << endl;
        cout << "perimeter : " << 4 * heights << endl;
    }
};

int main()
{
    Shape obj1, obj2;
    obj1.rectangle(2, 3);
    obj2.square(4);
    obj1.get_rectangle();
    obj2.get_square();

    return 0;
}
