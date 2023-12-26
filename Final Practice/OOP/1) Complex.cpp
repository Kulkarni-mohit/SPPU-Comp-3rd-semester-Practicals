#include <iostream>

using namespace std;

class Complex
{
    int real,imag;
public:
    Complex()
    {
        real=0;
        imag=0;
    }

    void operator + (Complex C2)
    {
        Complex C3;
        C3.real = real + C2.real;
        C3.imag = imag + C2.imag;
        cout<<C3.real<<" + "<<C3.imag<<" i"<<endl;
    }

    void operator * (Complex C2)
    {
        Complex C3;
        C3.real = (real*C2.real) - (imag*C2.imag);
        C3.imag = (real*C2.imag) + (imag*C2.real);
        cout<<C3.real<<" + "<<C3.imag<<" i"<<endl;
    }

    friend void operator <<(ostream &O, Complex &C);
    friend void operator >>(istream &i, Complex &C);
};

void operator <<(ostream &O, Complex &C)
{
    O<<C.real;
    O<<" + ";
    O<<C.imag;
    O<<" i";
    O<<endl;
}

void operator >>(istream &i, Complex &C)
{
    i>>C.real;
    i>>C.imag;
}

int main()
{
    Complex C1,C2;

    cin>>C1;
    cout<<C1;

    cin>>C2;
    cout<<C2;

    C1+C2;
    C1*C2;

    return 0;
}
