#include "Rectr.hpp"
#include "Polar.hpp"

#include <cmath>

Rectr::Rectr()
{
}

Rectr::Rectr(int valX,int valY) : x{valX}, y{valY} 
{
}

Rectr Rectr::operator-(Rectr val)
{
        Rectr tmp;
        tmp.x = this->x - val.x;
        tmp.y = this->y - val.y;

        return tmp;
}

int Rectr::getX()
{
    return x;
}

int Rectr::getY()
{
    return y;
}

std::ostream& operator<<(std::ostream& output, Rectr r)
{
    output << "(" << r.getX() << ", " << r.getY() << ")\n";
    return output;
}