#include "../include/Shape.h"


void Geometry::Shape::Set(int x_, int y_)
{
    this->x = x_;
    this->y = y_;
}

int Geometry::GetArea(Shape shape)
{
    return shape.x *  shape.y ;

}
