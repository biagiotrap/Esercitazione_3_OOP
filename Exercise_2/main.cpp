#include<iostream>
#include "src/ComplexNumber.hpp"
void Coniugato(ComplexNumberLibrary::ComplexNumber& c3){
    c3.imag=-c3.imag;
}

using namespace std;
int main(){
    ComplexNumberLibrary::ComplexNumber c;
    cout <<"numero complesso di default: "<< c << endl;
    ComplexNumberLibrary::ComplexNumber c1(1,2);
    cout << "c1: " << c1 << endl;
    ComplexNumberLibrary::ComplexNumber c2(4,3);
    ComplexNumberLibrary::ComplexNumber sum=c1+c2;
    cout << "sum: " << sum << endl;
    bool comp=c1==c2;
    cout<<comp<<endl;
    ComplexNumberLibrary::ComplexNumber c3(4,3);
    Coniugato(c3);
    cout<<c3<<endl;
    return 0;
}


