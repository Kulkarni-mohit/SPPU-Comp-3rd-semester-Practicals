#include<iostream>
#include<vector>
#include<algorithm>
#include<iterator>

using namespace std;

class Person
{
    string name;
    int age;
    long long int tno;

public:
    void get_data()
    {
        cin>>name>>age>>tno;
    }

    void display(vector<Person> P)
    {
        for(int i=0; i<P.size(); i++){
            cout<<P[i].name<<P[i].age<<P[i].tno<<endl;
        }
    }

    void Sort(vector<Person>P)
    {
        sort(P.begin(),P.end());
    }

    bool operator ==(Person P)
    {
        if(tno == P.tno)
            return true;
        else
            return false;
    }

    bool operator < (Person P)
    {
        return(age<P.age);
    }

    void Search(vector<Person>P)
    {
        Person temp;
        cin>>temp.tno;

        vector<Person>::iterator itr;
        itr = find(P.begin(),P.end(),temp);

        if(itr!=P.end())
            cout<<"Found"<<itr->name;
        else
            cout<<"Not Found";
    }
};

int main()
{
    Person p;
    vector<Person>P1;

    for(int i = 0; i<3; i++)
    {
        p.get_data();
        P1.push_back(p);
    }

    p.display(P1);
    p.Search(P1);
    p.Sort(P1);
    p.display(P1);
}
