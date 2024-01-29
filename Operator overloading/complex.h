#include<iostream>
using namespace std;

class complex{
    protected:
    float real, imag;

    public:
    complex(){
        real=0;
        imag=0;
    }

    complex(float r, float i){
        real = r;
        imag = i;
    }

    complex operator +(complex& co){
        complex c;
        c.real=this-> real +co.real;
        c.imag=this-> imag + co.imag;
        return c;
    }

    friend complex operator *(complex A, complex B){
        complex c;
        c.real=(A.real*B.real)-(A.imag*B.imag);
        c.imag=(A.real*B.imag) + (A.imag*B.real);
        return c;
    }

     void operator --(){
        imag*=(-1);
    }

    friend ostream& operator <<(ostream& os, complex& c){
        os<<c.real<<" + "<<c.imag<<" i \n";
        return os;
    }

};

