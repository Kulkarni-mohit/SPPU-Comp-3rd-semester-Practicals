#include<iostream>

using namespace std;

class Queue
{
    int q[20];
    int front,back;

public:
    Queue()
    {
        front = -1;
        back = -1;
    }

    void display();
    void enqueue(int n);
    void dequeue();

};

void Queue::display()
{
    if ((front==-1) &&(back==-1))
        return;
    else{
        for(int i = front; i<back+1; i++)
            cout<<q[i]<<" ";
        cout<<endl;
    }
}

void Queue::enqueue(int n)
{
    if (back>=19)
        cout<<"\nQueue is Full, Overflow Condition...."<<endl;

    if(front==-1)
        front++;

    back++;
    q[back] = n;
}

void Queue::dequeue()
{
    if ((front==-1 && back==-1)|| front>back){
        cout<<"\nQueue is Empty, Underflow Condition......"<<endl;
        return;
    }
    else{
        cout<<q[front]<<endl;
        front++;
    }
}

int main()
{
    Queue q1;

    q1.dequeue();
    q1.display();
    q1.enqueue(1);
    q1.enqueue(2);
    q1.enqueue(3);
    q1.enqueue(4);
    q1.enqueue(5);
    q1.enqueue(6);
    q1.display();
    q1.dequeue();
    q1.dequeue();
    q1.dequeue();
    q1.dequeue();
    q1.dequeue();
    q1.display();
    q1.enqueue(2);
    q1.enqueue(3);
    q1.enqueue(4);
    q1.enqueue(5);
    q1.display();

    return 0;
}
