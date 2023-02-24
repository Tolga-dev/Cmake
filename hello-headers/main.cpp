#include <iostream>
#include <concepts>
#include "include/Shape.h"
using namespace std;


int main()
{
    Geometry::Shape shape;
    shape.x = 3;
    shape.y = 3;

    cout <<Geometry::GetArea(shape) << endl;


}