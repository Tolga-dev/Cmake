#include "Static/Inc/st.h"
#include <iostream>

int a()
{
    [[maybe_unused]] int* ptr = new int(5);

    return 0;
}

int main(int argc,[[maybe_unused]] char *argv[])
{
    Hello hi;
    hi.print();
    a();


    return argc;

}