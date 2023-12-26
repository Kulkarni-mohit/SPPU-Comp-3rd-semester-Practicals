#include <iostream>
#include <fstream>

using namespace std;

class Student
{
public:
    int roll, marks;
    string name;

    void getdata()
    {
        cout<<"Enter the Details of Student"<<'\n'<<"Name: ";
        cin>>name;
        cout<<"Roll no: ";
        cin>>roll;
        cout<<"marks: ";
        cin>>marks;
    }
    void display()
    {
        cout<<"Name: "<<name<<'\n'<<"Roll No.: "<<roll<<'\n'<<"Marks: "<<marks<<endl;
    }
};

int main()
{
    ofstream fout;
    ifstream fin;
    int n;
    cout<<"Enter Total no. of student: ";
    cin>>n;

    Student s[n];

    fout.open("DATA",ios::out);
    for(int i=0; i<n;i++)
    {
        s[i].getdata();
        fout.write((char *)&s[i], sizeof(s[i]));
    }
    fout.close();

    fin.open("DATA",ios::in);

    cout<<'\n'<<"Displaying the Output:"<<endl;
    for(int i=0;i<n;i++)
    {
        fin.read((char *)&s[i], sizeof(s[i]));
        s[i].display();
    }
    return 0;
}
