// 6 Create a class called “Circle” that calculates and displays the area of a circle. The radius is a
// private data member of the class, and the compute_area() function is responsible for computing
// and displaying the area based on the given radius. In the main function, create an object of the
// Circle class, then display the area of the circle.
#include <iostream>
using namespace std;
class Circle
{
private:
    float pie = 3.1416;
    float r;

public:
    Circle(float r)
    {
        this->r = r;
    }
    float Calculates()
    {
        return pie * (r * r);
    }
};
int main()
{
    Circle Area(2);
    cout << "Area = " << Area.Calculates() << endl;

    return 0;
}