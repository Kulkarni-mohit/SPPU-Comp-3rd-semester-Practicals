#include <iostream>

using namespace std;

class Complex
{
    int real,imag;

public:

    Complex()
    {
        real = imag = 0;
    }

    void getdata()
    {
        cin>> real>> imag;
    }

    void operator+(Complex C2)
    {
        Complex C3;
        C3.real = real + C2.real;
        C3.imag = imag + C2.imag;
        cout << C3.real << " + " << C3.imag << "i"<<endl;
    }

    void operator-(Complex C2)
    {
        Complex C3;
        C3.real = real - C2.real;
        C3.imag = imag - C2.imag;
        cout << C3.real << " + " << C3.imag << "i"<<endl;
    }

    friend void operator << (ostream &o, Complex &c);
    friend void operator >> (istream &i, Complex &c);
};

void operator <<(ostream &o, Complex &c)
{
    o<<c.real;
    o<<" + ";
    o<<c.imag;
    o<<"i";
    o<<endl;
}

void operator >> (istream &i, Complex &c)
{
    i>>c.real;
    i>>c.imag;
}

int main()
{
    Complex C1,C2;

    cin>>C1;
    cin>>C2;

    cout<<C1;
    cout<<C2;

    C1+C2;
    C1-C2;
    return 0;
}
