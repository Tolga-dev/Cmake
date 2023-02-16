//
// Created by xamblot on 2/15/23.
//
#include "Base.h"
#include <iostream>

namespace Geometry::Shape
{
    std::string Base::GetName() { return "Shape"; }

    void Print(Base& shape) { std::cout << shape.GetName() << std::endl; }

}
int EdgeNumber(Geometry::Shape::Base& shape)
{
    return shape.EdgeNumber;
}