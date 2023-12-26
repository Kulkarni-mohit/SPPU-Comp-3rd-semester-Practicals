#include <iostream>
#include <string.h>
using namespace std;

class Stack
{
public:
    int top = -1, len;
    char s[50],str[50],temp[50];

    void getstr();
    void push(char);
    char pop();
    void process();
};

void Stack::getstr()
{
    cout<<"Enter String: ";
    cin.getline(str,50);

    len = strlen(str);

    int j=0;
    for (int i=0; i<len; i++)
    {
        if (isalpha(str[i]))
        {
            temp[j] = tolower(str[i]);
            j++;
        }
    }
    len = j;

    for (int i = 0; i<len; i++)
    {
        cout<< temp[i];
    }
}

void Stack::push(char c)
{
    top++;
    s[top] = c;
}

char Stack::pop()
{
    char t = s[top];
    top--;
    return t;
}

void Stack::process()
{
    getstr();

    for(int i = 0; i<len; i++)
        push(temp[i]);

    for(int i = 0; i<len; i++)
    {
        str[i] = pop();
    }
    int flag = 0;
    for(int i = 0; i<len; i++)
    {
        if (temp[i] == str[i])
            flag++;
    }

    if (flag == len)
        cout<<"\nString is Palindrome";
    else
        cout<<"\nNot a Palindrome";

}

int main()
{
    Stack s1;

    s1.process();

    return 0;
}
