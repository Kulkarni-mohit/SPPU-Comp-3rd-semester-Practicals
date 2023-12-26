#include<iostream>
#include<fstream>

using namespace std;

class Student
{
    int rno;
    string name;
public:
    void get_data()
    {
        cin>>name>>rno;
    }
    void display()
    {
        cout<<name<<rno;
    }
};

int main()
{
    ofstream fout;
    int n;
    cin>>n;
    Student s[n];
    fout.open("Hello");
    for(int i = 0; i<n; i++)
    {
        s[i].get_data();
        fout.write((char*)&s[i],sizeof(s[i]));
    }
    fout.close();

    ifstream fin;
    fin.open("Hello");

    for(int i=0; i<n; i++)
    {
        fin.read((char*)&s[i],sizeof(s[i]));
        s[i].display();
    }
    fin.close();

    return 0;
}
