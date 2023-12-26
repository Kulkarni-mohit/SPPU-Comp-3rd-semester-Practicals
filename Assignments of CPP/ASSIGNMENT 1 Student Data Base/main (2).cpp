#include <iostream>
#include <string>

using namespace std;

class student
{
    string name,class_, DOB,BG;
    char div;
    int roll_no;
    long long int phone_no;
    static int count_of_students;

public:

    student()
    {
        name = "ABC XYZ";
        class_ = "SE";
        DOB = "00/00/0000";
        BG = "A+";
        div = 'B';
        roll_no = 0;
        phone_no = 9999999999;
    }

    student(string name1, string class_1, string DOB1, string BG1, char div1, int roll_no1, long long int phone_no1)
    {
        name = name1;
        class_ = class_1;
        DOB = DOB1;
        BG = BG1;
        div = div1;
        roll_no = roll_no1;
        phone_no = phone_no1;
    }

    student(student &s)
    {
        name = s.name;
        class_ = s.class_;
        DOB = s.DOB;
        BG = s.BG;
        div = s.div;
        roll_no = s.roll_no;
        phone_no = s.phone_no;
    }

    void getdata()
    {
        cout << "Enter the values as shown"<< endl;

        cout<< "Enter the Name of Student: ";
        getline(cin,name);

        cout<<endl<< "Enter the roll no of Student: ";
        cin>>roll_no;

        cout<<endl<< "Enter the class of Student: ";
        cin>>class_;

        cout<<endl<< "Enter the division of Student: ";
        cin>>div;

        cout<<endl<< "Enter the Mobile No of Student: ";
        cin>>phone_no;

        cout<<endl<< "Enter the Date of Birth of Student: ";
        cin>>DOB;

        cout<<endl<< "Enter the Blood Group of Student: ";
        cin>>BG;

        count_of_students++;
    }

    void display()
    {
        cout<< "Enter the Name of Student: ";
        cout<<name<<endl;

        cout<< "Enter the roll no of Student: ";
        cout<<roll_no<<endl;

        cout<< "Enter the class of Student: ";
        cout<<class_<<endl;

        cout<< "Enter the division of Student: ";
        cout<<div<<endl;

        cout<< "Enter the Mobile No of Student: ";
        cout<<phone_no<<endl;

        cout<< "Enter the Date of Birth of Student: ";
        cout<<DOB<<endl;

        cout<< "Enter the Blood Group of Student: ";
        cout<<BG<<endl;

        cout<<count_of_students<<endl;
    }

    friend void counto(student &s);

    ~student()
    {
        cout<<"Inside Destructor"<<endl;
    }
};

int student::count_of_students;
void counto(student &s)
{
    cout<<s.count_of_students;
}

int main()
{
    student s,s1("Mohit","SE","16/03/2003","A+",'A',15,784634),S2(s1);
    //s.getdata();
    //s.display();

    S2.display();

    student *S1 = new student();
    S1->getdata();
    cout<<counto;
    S1->display();
    delete S1;

    return 0;
}
