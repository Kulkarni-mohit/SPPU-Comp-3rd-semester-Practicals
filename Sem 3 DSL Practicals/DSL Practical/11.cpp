#include<iostream>

using namespace std;

char st[50];
int top=-1;

void push(char c)
{
    top++;
    st[top] = c;
}

char pop()
{
    char v = st[top];
    top--;
    return v;
}

int prec(char c)
{
    if (c=='*' || c=='/')
        return 2;

    else if (c == '+' || c == '-')
        return 1;
    else
        return 0;
}

int main()
{
    char inf[50], pos[50], ch;
    int i = 0, j = 0;
    cout<<"\nEnter Infix Expression: ";
    cin>>inf;
push('#');
    while(ch = inf[i++] != '\0')
    {
        if(ch == '(')
            push(ch);
        else if(isalnum(ch))
            pos[j++]=ch;
        else if(ch == ')')
        {
            while(st[top] != '(')
                    pos[j++] = pop();
            pop();
        }
        else
        {
            while(prec(st[top])>=prec(ch))
                pos[j++] = pop();
            push(ch);
        }
    }

    while(st[top] != '#')
        pos[j++] = pop();

    cout<<pos<<endl;

    return 0;
}

