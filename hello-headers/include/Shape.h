//
// Created by xamblot on 2/24/23.
//


#ifndef HELLO_WORLD_SHAPE_H
#define HELLO_WORLD_SHAPE_H

//namespace Concepts
//{
//    template<typename T> concept num = std::is_floating_point<T>::value || std::is_integral<T>::value;
//}

namespace Geometry
{
    class Shape
    {
    public:
        int x,y;

        void Set(int x,int y);

    };

    int GetArea(Shape shape);
}

#endif //HELLO_WORLD_SHAPE_H
