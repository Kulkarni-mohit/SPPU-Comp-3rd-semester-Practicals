#include<iostream>

using namespace std;

class Pulication
{
public:
    string Title;
    float price;
};

class book: public Pulication
{
    int pcount;
public:
    void get_data()
    {
        try{
        cin>>Title>>price>>pcount;
        if (price<0)
            throw 0;
        if (pcount<1)
            throw 0;
        }
        catch(int)
        {
            cout<<"Wrong value entered";
            pcount = 0;
            price =0;
        }
    }
    void display()
    {
        cout<<Title<<price<<pcount;
    }
};

class tape: public Pulication
{
    float tmin;
public:

    void get_data()
    {
        try{
        cin>>Title>>price>>tmin;
        if (price<0)
            throw 0;
        if (tmin<1)
            throw 0;
        }
        catch(int)
        {
            cout<<"Wrong value entered";
            tmin = 0;
            price =0;
        }
    }

    void display()
    {
        cout<<Title<<price<<tmin;
    }
};

int main()
{
    book b;

    b.get_data();

    b.display();


    tape t;
    t.get_data();
    t.display();
    return 0;
}
