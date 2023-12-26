#include<iostream>
#define max 10
using namespace std;

class Cqueue
{
    int q[max],f,r;

public:
    Cqueue()
    {
        f=-1;
        r=-1;
    }
    void enqueue(int n);
    int dequeue();
    void display();
};

void Cqueue::enqueue(int n)
{
    if(((f==0)&&(r==(max-1)))||(f==(r+1)%max))
    {
        cout<<"Queue is Full"<<endl;
        return;
    }

    if(f==-1)
    {
        f=0;
    }

    r=(r+1)%max;
    q[r] = n;
}

int Cqueue::dequeue()
{
    int val;

    if (f==-1)
    {
        cout<<"Queue is Empty"<<endl;
    }

    else
    {
       val = q[f];
        f=(f+1)%max;
        return val;
    }

    return -1;
}

void Cqueue::display()
{
    int temp;
        temp=f;
        if(f==-1)
            cout<<"\nNo orders currently\n";
        else
            cout<<"\nThe orders are : \n\n";
            while(temp!=r){
                cout<<"  "<<q[temp];
                temp=(temp+1)%max;
            }
            cout<<"  "<<q[temp];
}

int main()
{
    Cqueue p;

    int ch;
    //pizza p;
    do{
        cout<<"\n1. Order \n2. Remove order \n3.Display orders \n4. Exit";
        cin>>ch;
        switch(ch)
        {
        case 1:
            int o;
            cout<<"\nEnter Order number : ";
            cin>>o;
            p.enqueue(o);
            break;
        case 2:
            p.dequeue();
            break;
        case 3:
            p.display();
            break;
        }
    }while(ch!=4);

    return 0;
}
