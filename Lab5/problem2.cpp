// 2. Create a class called Box that contains one public function (print_volume) and three public
// variables (height and length and width). Declare the height, length and width as integer value.
// Use public function print_volume () to calculate the volume of a box and display the volume.
#include <iostream>
using namespace std;
class Box
{
public:
    int height, length, width;
    Box(int h, int l, int w)
    {
        height = h;
        length = l;
        width = w;
    }
    int print_volume()
    {

        return height * length * width;
    }
    void display()
    {
        cout << "result : " << print_volume() << endl;
    }
};
int main()
{
    Box shape(2, 3, 4);
    shape.print_volume();
    shape.display();
}