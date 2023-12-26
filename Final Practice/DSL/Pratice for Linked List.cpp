#include<iostream>

using namespace std;


struct node
{
    int data;
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
    void insert_at_end();
    void insert_head();
    void insert_inbet();
    void delete_end();
    void delete_head();
    void delete_inbet();
    void display();
};


void SLL::create()
{
    char c = 'y';
    while(c=='y')
    {
        temp = new node;
        cin>>temp->data;
        temp->next = NULL;

        if (head == NULL)
        {
            head = temp;
        }
        else
        {
            temp1 = head;
            while(temp1->next != NULL)
                temp1 = temp1->next;
            temp1->next = temp;
        }
        cout<<"Want to add more nodes? ";
        cin>>c;
    }
}


void SLL::display()
{
    temp1 = head;
    while(temp1 != NULL)
    {
        cout<<temp1->data<<" ";
        temp1 = temp1->next;
    }
    cout<<endl;
}


void SLL::insert_at_end()
{
    temp = new node;
    cin>> temp->data;
    temp->next = NULL;

    temp1 = head;
    while(temp1->next != NULL)
        temp1 = temp1->next;
    temp1->next = temp;
}


void SLL::insert_head()
{
    temp = new node;
    cin>> temp->data;
    temp->next = NULL;

    temp->next = head;
    head = temp;
}


void SLL::delete_end()
{
    temp = head;
    while(temp->next != NULL)
    {
        temp1 = temp;
        temp = temp->next;
    }
    temp1->next = NULL;
    delete temp;
}


void SLL::delete_head()
{
    temp = head;
    head = temp->next;
    delete temp;
}


void SLL::insert_inbet()
{
    temp = new node;
    cin>> temp->data;
    temp->next = NULL;

    int n;
    cout<<"Enter were to enter: ";
    cin>>n;
    temp1 = head;
    while(temp1->next != NULL)
    {
        if (temp1->data == n)
        {
            temp->next = temp1->next;
            temp1->next = temp;
        }
        temp1 = temp1->next;
    }
}


void SLL::delete_inbet()
{
    int t;
    cout<<"Which data want to delete?";
    cin>>t;

    temp1 = head;
    while (temp1 ->data != t)
    {
        temp = temp1;
        temp1 = temp1->next;
    }
    temp->next = temp1->next;
    delete temp1;
}


int main()
{
    SLL s;

    s.create();
    int choice;
    char c;
    do
    {
        cout<<endl<<"------ This Is The Program For Performing various Operations on SLL ------"<<endl;

        cout<<"1) Display the Linked List\n2) Insert the Element in Linked List at the end \n3) Insert Head \n4) Insert At Any Position \n5) Delete Head \n6) Delete Last Data \n7) Delete any Data"<<endl;
        cout<<"Enter Your Choice: ";
        cin>>choice;
        switch(choice)
        {
        case(1):
            s.display();
            break;

        case(2):
            s.insert_at_end();
            break;

        case(3):
            s.insert_head();
            break;

        case(4):
            s.insert_inbet();
            break;

        case(5):
            s.delete_head();
            break;

        case(6):
            s.delete_end();
            break;

        case(7):
            s.delete_inbet();
            break;
        }
        cout<<endl<<"You want to continue?"<<endl;
        cin>>c;
    }while(c == 'y');

    return 0;
}
