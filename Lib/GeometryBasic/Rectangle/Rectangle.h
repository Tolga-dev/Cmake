//
// Created by xamblot on 2/15/23.
//
#include "Lib/GeometryBasic/Shape/Base.h"

#ifndef IFORGOT_RECTANGLE_H
#define IFORGOT_RECTANGLE_H

namespace Geometry::Rectangle
{
    class Rectangle : public Shape::Base
    {
    public:
        virtual std::string GetName() override;

    };
}



#endif //IFORGOT_RECTANGLE_H
