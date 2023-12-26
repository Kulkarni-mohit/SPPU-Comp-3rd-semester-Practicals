#include<iostream>

using namespace std;

struct node
{
    int PRN;
    string name;
    node* next;
};

class SLL
{
    node *head, *temp, *temp1;

public:

    SLL()
    {
        head = NULL;
    }

    void create();
    void add_pre();
    void add_sec();
    void add_stu();
    void display();
    void del_pre();
    void del_sec();
    void del_stu();
};

void SLL::create()
{
    char val;
    do
    {
        temp = new node;
        cout<<"\nEnter PRN No.: ";
        cin>>temp->PRN;
        cout<<"\nEnter Name: ";
        cin>>temp->name;
        temp->next = NULL;

        if (head==NULL)
        {
            head = temp;
        }
        else
        {
            temp1 = head;
            while(temp1->next != NULL)
                temp1 = temp1 -> next;
            temp1->next = temp;

        }
        cout<<"Do You Want more nodes to be added: ";
        cin>>val;
    }while(val=='y');
}

void SLL::display()
{
    temp1 = head;
    while(temp1!=NULL)
    {
        cout<<temp1->name<<'\t'<<temp1->PRN<<endl;
        temp1 = temp1->next;
    }
}

void SLL::add_pre()
{
    temp = new node;
    cout<<"\nEnter PRN No.: ";
    cin>>temp->PRN;
    cout<<"\nEnter Name: ";
    cin>>temp->name;
    temp->next = NULL;

    temp->next = head;
    head = temp;
}

void SLL::add_sec()
{
    temp = new node;
    cout<<"\nEnter PRN No.: ";
    cin>>temp->PRN;
    cout<<"\nEnter Name: ";
    cin>>temp->name;
    temp->next = NULL;

    temp1 = head;
    while(temp1->next != NULL)
        temp1 = temp1->next;
    temp1->next = temp;
}

void SLL::add_stu()
{
    temp = new node;
    cout<<"\nEnter PRN No.: ";
    cin>>temp->PRN;
    cout<<"\nEnter Name: ";
    cin>>temp->name;
    temp->next = NULL;

    temp1 = head;
    temp1->next = temp1;

    temp->next =
}

int main()
{
    SLL s;

    s.create();
    s.display();
}
