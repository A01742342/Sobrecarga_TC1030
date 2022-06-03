#include "Polar.hpp"

Polar::Polar(): r{0}, theta{0}
{}

Polar::Polar(double radio, double angulo) : r{radio}, theta{angulo}
{}

double Polar::getR()
{
    return r;
}

double Polar::getTheta()
{
    return theta;
}

std::ostream& operator<<(std::ostream& output, Polar p)
{
    output << "(" << p.getR() << ", " << p.getTheta() << ")\n";
    return output;
}
