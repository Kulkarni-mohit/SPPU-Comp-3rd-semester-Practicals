#include <iostream>

using namespace std;

char st[10];
int top=-1;

int prec(char c)
{
    if (c=='*' || c=='/')
        return 2;

    else if (c == '+' || c == '-')
        return 1;
    else
        return -1;
}

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

string infixtopost(string s)
{
    string res;

    for(int i = 0; i<s.length();i++)
    {
        if (isalnum(s[i]))
            res+=s[i];

        else if(s[i] == '('){push(s[i]);}

        else if(s[i]==')')
        {
            while(st[top]!='(')
            {
                res+=st[top];
                pop();
            }
            if(top!=-1)
                pop();
        }

        else
        {
            while(prec(st[top])>prec(s[i]))
            {
                res+=st[top];
                pop();
            }
            push(s[i]);
        }
    }

    while(top!=-1)
    {
        res+=st[top];
        pop();
    }

    return res;
}


int main()
{
    cout<<infixtopost("(A+B*C-D)/(E*F)");
}
