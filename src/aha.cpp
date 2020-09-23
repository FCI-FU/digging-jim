#include "aha.h"

aha::aha()
{
    //ctor
}

aha::~aha()
{
    //dtor
}

aha& aha::operator=(const aha& rhs)
{
    if (this == &rhs) return *this; // handle self assignment
    //assignment operator
    return *this;
}
