#pragma once

#include <iostream>

class Polar {
private:
    double r;
    double theta;   //Angulo en radianes 
public:
    Polar();
    Polar(double, double);

    double getR();
    double getTheta();

    friend std::ostream& operator<<(std::ostream&, Polar);
};