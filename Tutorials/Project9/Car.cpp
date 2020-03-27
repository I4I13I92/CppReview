#include "Car.h"

bool operator== (const Car& c1, const Car& c2)
{
    return (c1.m_make == c2.m_make &&
        c1.m_model == c2.m_model);
}

bool operator!= (const Car& c1, const Car& c2)
{
    return !(c1 == c2);
}

bool operator<(const Car& c1, const Car& c2)
{
    if (c1.m_make == c2.m_make)
    {
        if (c1.m_make < c2.m_make)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    else if (c1.m_make < c2.m_make)
    {
        return true;
    }
    else
    {
        return false;
    }
}

std::ostream& operator<<(std::ostream& out, const Car& c)
{
    std::cout << "(" << c.m_make << ", " << c.m_model << ")\n";
    return out;
}