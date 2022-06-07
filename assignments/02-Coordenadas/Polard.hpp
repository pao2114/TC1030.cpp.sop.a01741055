#pragma once

#include <iostream>

class Polard {
private:
    double r;
    double theta;   //Angulo en radianes 
public:
    Polard();
    Polard(double, double);

    double getR();
    double getTheta();

    Polard operator/ (Polard);

    friend std::ostream& operator<<(std::ostream&, Polard);
};