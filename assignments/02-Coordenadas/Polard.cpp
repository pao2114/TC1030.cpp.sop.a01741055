#include "Polard.hpp"

Polard::Polard(): r{0}, theta{0}
{}

Polard::Polard(double radio, double angulo) : r{radio}, theta{angulo}
{}

double Polard::getR()
{
    return r;
}

double Polard::getTheta()
{
    return theta;
}

Polard Polard::operator/ (Polard p3)
{
    Polard pt;
    pt.r = r / p3.getR();
    pt.theta = theta - p3.getTheta();

    return pt;
}

std::ostream& operator<<(std::ostream& output, Polard p)
{
    output << "(" << p.getR() << ", " << p.getTheta() << ")\n";
    return output;
}
