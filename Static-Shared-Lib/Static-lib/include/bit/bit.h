//
// Created by xamblot on 2/24/23.
//

#include <iostream>

#ifndef HELLO_HEADERS_BIT_H
#define HELLO_HEADERS_BIT_H


namespace BitOperation
{
    template<typename T>
    class Bit
    {
    public:
        static inline T And(T a,T b)
        {
            return a & b;
        }
        static inline T Or(T a,T b)
        {
            return a | b;
        }
        static inline T Not(T a)
        {
            return ~a;
        }

        static inline void Print(T a);

    };

}


#endif //HELLO_HEADERS_BIT_H
