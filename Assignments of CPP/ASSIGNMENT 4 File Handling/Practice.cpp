#include <iostream>
#include <fstream>

using namespace std;

class Student
{
    string name;
    int roll, marks;

public:
    void get_data()
    {
        cout<<"Enter The Details as Mentioned:\n";
        cout<<"Name: ";
        cin>>name;
        cout<<"Roll No.: ";
        cin>>roll;
        cout<<"Marks: ";
        cin>>marks;
        cout<<endl;
    }
    void display()
    {
        cout<<"\nName: "<<name<<"\nRoll No.: "<<roll<<"\nMarks: "<<marks<<endl;
    }
};

int main()
{
    ifstream fin;
    ofstream fout;

    cout<<"Enter Number of students: ";
    int n;
    cin>>n;

    Student s[n];

    fout.open("DATA_1",ios::out);
    for(int i = 0; i<n; i++)
    {
        s[i].get_data();
        fout.write((char *) &s[i],sizeof(s[i]));
    }
    fout.close();

    fin.open("DATA_1",ios::in);
    for(int i=0; i<n; i++)
    {
        fin.read((char *) &s[i],sizeof(s[i]));
        s[i].display();
    }
    return 0;
}
