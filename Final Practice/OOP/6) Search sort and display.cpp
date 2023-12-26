#include <iostream>
#include<vector>
#include<algorithm>
#include<iterator>

using namespace std;

class Student
{
    string name,dob;
    long long int Tno;
    int age;
public:
    void getdata()
    {
        cout<<"Enter Data: ";
        cin>>name>>dob>>Tno>>age;
    }

    void display(vector<Student> V)
    {
        for(int i=0;i<V.size();i++)
        {
            cout<<V[i].name<<'\t'<<V[i].dob<<'\t'<<V[i].Tno<<'\t'<<V[i].age<<endl;
        }
    }

    void Sort(vector<Student> &V)
    {
        sort(V.begin(),V.end());
    }

    bool operator == (Student P)
    {
        if (P.Tno==Tno)
            return true;
        else
            return false;
    }

    bool operator < (Student P)
    {
        return(age<P.age);
    }

    void Search(vector<Student> V)
    {
        Student temp;
        vector<Student>::iterator itr;

        cout<<"Enter the Telephone no to be searched: ";
		cin>>temp.Tno;

		itr = find(V.begin(),V.end(),temp);

		if(itr!=V.end())
            cout<<"Record Found";
        else
            cout<<"Record Not Found";
    }

};

int main()
{
    Student S;
    vector<Student> V;

    char ch='y';

    while(ch == 'y')
    {
        S.getdata();
        V.push_back(S);
        cin>>ch;
    }
    int choice;
    do
    {
        cout<<"\n------ Different Operations ------ \n1] Display \n2] Search \n3]Sort"<<endl;
		cin>>choice;

		switch(choice)
		{
        case 1:
            S.display(V);
            break;

        case 2:
            S.Search(V);
            break;

        case 3:
            S.Sort(V);
            break;
		}
    }while(true);
}
