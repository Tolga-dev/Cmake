//
// Created by xamblot on 2/15/23.
//

#pragma once
#include <string>

#ifndef IFORGOT_BASE_H
#define IFORGOT_BASE_H



namespace Geometry::Shape
{
    class Base
    {
    public:
        virtual std::string GetName();

        int EdgeNumber;
    };

    void Print(Base& shape);
}

int EdgeNumber(Geometry::Shape::Base& shape);

#endif //IFORGOT_BASE_H
