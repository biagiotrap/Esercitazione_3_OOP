#include "ComplexNumber.hpp"

namespace ComplexNumberLibrary{
ostream& operator<<(ostream& os, const ComplexNumber &c){
    if(c.imag>=0){
        os <<c.real<<"+" << c.imag<<"i";
    }
    else{
        os << c.real << c.imag<<"i";
    }
    return os;
}

ComplexNumber operator+(const ComplexNumber &c1, const ComplexNumber &c2)
{
    ComplexNumber c(c1.real+c2.real,c1.imag+c2.imag);
    return c;
}

bool operator==(const ComplexNumber &c1, const ComplexNumber &c2)
{
    if(c1.real==c2.real && c1.imag==c2.imag){
        return 0;
    }
    else{
        return 1;
    }
}
}
