#include "lib/sublib/Static/Inc/st.h"
#include "lib/sublib/Bit/Include/Bit.hpp"
#include "lib/sublib2/Bit/Include/bit.h"
#include <iostream>

int a()
{
    [[maybe_unused]] int* ptr = new int(5);

    return 0;
}

int main(int argc,[[maybe_unused]] char *argv[])
{
    bit_c m;
    m.print();


    bit c;
    c.print();


    Hello hi;
    hi.print();
    a();


    return argc;

}