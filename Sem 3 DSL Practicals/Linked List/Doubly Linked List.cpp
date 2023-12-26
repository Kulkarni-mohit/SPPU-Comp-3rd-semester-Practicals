#include <iostream>

using namespace std;

struct node
{
    int data;
    node* next;
    node* prev;
};

class Dll
{
    node *head, *temp, *temp1;
public:
    Dll()
    {
        head = NULL;
    }

    void create();
    void display();
    void insert_head();
    void insert_end();
    void insert_mid();
    void ones_compliment();
};

void Dll :: create()
{
    char val;
    do
    {
        temp = new node;
        cin>> temp -> data;
        temp->next = NULL;
        temp->prev = NULL;
        if (head == NULL)
            head = temp;
        else
        {
            temp1 = head;
            while(temp1->next != NULL)
                temp1 = temp1 -> next;
            temp1->next = temp;
            temp->prev = temp1;

        }
        cout<<"Do You Want more nodes to be added: ";
        cin>>val;
    }while(val == 'Y');
}

void Dll :: display()
{
    temp1 = head;
    while(temp1 != NULL)
    {
        cout<<temp1->data<<" ";
        temp1 = temp1->next;
    }
    cout<<endl;
}

void Dll :: insert_head()
{
    temp = new node;
    cin>> temp->data;
    temp->prev = NULL;
    temp->next = head;
    head = temp;
}

void Dll ::insert_end()
{
    temp = new node;
    cin>>temp->data;
    temp->prev = NULL;
    temp->next = NULL;
    temp1 = head;
    while(temp1->next != NULL)
        temp1 = temp1 -> next;
    temp1->next = temp;
    temp->prev = temp1;
}

void Dll ::ones_compliment()
{
    temp1 = head;
    do
    {
        if (temp1->data == 1)
            temp1->data = 0;
        else if (temp1->data ==0)
            temp1->data = 1;
        else
            cout<<"Enter in Binary !!!"<<endl;
        temp1 = temp1->next;
    }while(temp1 != NULL);
    /*
    while(temp1->next != NULL)
    {
        if (temp1->data == 1)
            temp1->data = 0;
        else if (temp1->data ==0)
            temp1->data = 1;
        else
            cout<<"Enter in Binary !!!"<<endl;
        temp1 = temp1->next;
    }
    */
}

int main()
{
    Dll d;
    d.create();
    d.display();
    //d.insert_head();
    //d.display();
    //d.insert_end();
    //d.display();
    d.ones_compliment();
    d.display();
    return 0;
}

