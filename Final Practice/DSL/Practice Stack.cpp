#include <iostream>

using namespace std;

class Stack
{
    int s[50],top = -1;

public:

    void push();
    void pop();
    void display();
};

void Stack::push()
{
    int data;
    cout<<"\nEnter the Data to be Pushed: ";
    cin>>data;

    if(top > 49)
        cout<<"Stack Overflow"<<endl;

    else
    {
        top++;
        s[top] = data;
    }
}

void Stack::pop()
{
    if(top==-1)
        cout<<"Stack Underflow"<<endl;

    else
    {
        int t = s[top];
        top--;
        cout<<"\nPopped element is: "<<t;
    }
}

void Stack::display()
{
    cout<<"\nDisplaying Stack: "<<endl;
    for(int i=0; i<top+1; i++)
    {
        cout<<s[i]<<" ";
    }
}

int main()
{
    Stack s1;
    char ch='y';
    int choice;
    while(ch == 'y')
    {
        cout<<"\n------ Stack Operations ------"<<endl;
        cout<<"\n1) Push \n2) Pop \n3) Display"<<endl;
        cout<<"Enter Your Choice: ";
        cin>>choice;

        switch(choice)
        {
        case(1):
            s1.push();
            break;

        case(2):
            s1.pop();
            break;

        case(3):
            s1.display();
            break;
        }
        cout<<"\nWant To Perform more Operations?";
        cin>>ch;
    }

    return 0;
}
