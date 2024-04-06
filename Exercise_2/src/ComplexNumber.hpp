#ifndef __ComplexNumber_H
#define __ComplexNumber_H

#include<iostream>

using namespace std;

namespace ComplexNumberLibrary{

struct ComplexNumber
{

    int real;
    int imag;

    ComplexNumber(int a, int b){
        real=a;
        imag=b;
    }
    ComplexNumber() = default;
};

ostream& operator<<(ostream& os, const ComplexNumber &c);

ComplexNumber operator+(const ComplexNumber &c1, const ComplexNumber &c2);

bool operator==(const ComplexNumber &c1, const ComplexNumber &c2);
}
#endif

