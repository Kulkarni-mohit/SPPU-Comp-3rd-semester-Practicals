#include <iostream>

using namespace std;

class Deque
{
public:
    int q[10],front,back;

    Deque()
    {
        front = -1;
        back = -1;
    }
    void insert_at_beg(int n);
    void insert_at_end(int n);
    void delete_fr_beg();
    void delete_fr_end();
    void display();
};

void Deque::display()
{
    if(front == -1 && back == -1)
        return;

    for(int i = front; i<back+1;i++)
        cout<<q[i]<<" ";

    cout<<endl;
}

void Deque::insert_at_beg(int n)
{
    if(back>19)
    {
        cout<<"Queue Full"<<endl;
        return;
    }

    if(front == -1 && back == -1)
    {
        back++;
        front++;
        q[front] = n;
    }
    else{
        front--;
        q[front] = n;
    }
}

void Deque::insert_at_end(int n)
{
    if(back>19)
    {
        cout<<"Queue Full"<<endl;
        return;
    }
    if(front==-1 && back == -1)
    {
        front++;
    }
    back++;
    q[back] = n;
}

void Deque::delete_fr_beg()
{
    if ((front == -1 && back == -1)|| (front>back))
    {
        cout<<"\nQueue Empty";
        return;
    }

    cout<<q[front]<<endl;
    front++;
}

void Deque::delete_fr_end()
{
    if ((front == -1 && back == -1)|| (front>back))
    {
        cout<<"\nQueue Empty";
        return;
    }

    cout<<q[back]<<endl;
    back--;
}

int main()
{
    Deque q1;
    q1.display();

    q1.insert_at_beg(1);
    q1.insert_at_beg(2);
    q1.insert_at_beg(3);

    q1.display();
    q1.delete_fr_beg();
    q1.insert_at_end(3);
    q1.insert_at_end(4);
    q1.delete_fr_end();

    q1.display();

}
