#pragma once
#include <iostream>
#include "Polar.hpp"

class Rectr {
private:
    int x;
    int y;
public:
    Rectr();
    Rectr(int, int);

    Rectr operator-(Rectr);
    Rectr operator-(Polar);

    int getX();
    int getY();

    friend std::ostream& operator<<(std::ostream&, Rectr);
};