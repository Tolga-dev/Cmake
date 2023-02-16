#include <bits/stdc++.h>
#include "Lib/GeometryBasic/Rectangle/Rectangle.h"
#include "Geometry.h"

using namespace std;

int main() {


    Geometry::Shape::Base base;
    Geometry::Rectangle::Rectangle rectangle;
    rectangle.EdgeNumber = 4;

    cout << EdgeNumber(rectangle) <<endl;
    cout << " git diff --staged " << endl;
    Geometry::Shape::Print(rectangle);
    std::bitset<13> a = 0b01;

    Square square;
    PrintShape(square);

    return 0;
}
