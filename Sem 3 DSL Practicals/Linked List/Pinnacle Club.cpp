#include <iostream>

using namespace std;

struct node
{
    int PRN;
    string name;
    node* next;
};

class Pinnacle_Club
{
    node *temp, *temp1, *President;

public:
    Pinnacle_Club()
    {
        President = NULL;
    }

    void Add_club_member();
    void display();
    void Add_President();
    void Add_Secretary();
    void New_club_member();
    void Resign_President();
    void Resign_Secretary();
    void remove_member();
};

void Pinnacle_Club::Add_club_member()
{
    char val;
    do
    {
        temp = new node;
        cout<<"------- Enter The Details of the Member -------"<<endl;
        cout<<'\n'<<"Enter The PRN Number of Member: ";
        cin>> temp -> PRN;
        cout<<'\n'<<"Enter The Name of Member: ";
        cin>> temp ->name;
        temp->next = NULL;
        if (President == NULL)
            President = temp;
        else
        {
            temp1 = President;
            while(temp1->next != NULL)
                temp1 = temp1 -> next;
            temp1->next = temp;

        }
        cout<<"Do you want Members to be Added: ";
        cin>>val;
    }while(val == 'Y' || val == 'y');
}

void Pinnacle_Club:: display()
{
    temp1 = President;
    cout<<"  PRN  "<< '\t'<<"  Name  "<<endl;
    while(temp1 != NULL)
    {
        cout<<temp1->PRN<<'\t'<<temp1->name<< endl;
        temp1 = temp1->next;
    }
    cout<<endl;
}

int main()
{
    Pinnacle_Club p;

    p.Add_club_member();
    p.display();

    return 0;
}
