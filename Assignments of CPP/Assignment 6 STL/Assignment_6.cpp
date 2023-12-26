#include<iostream>
#include<algorithm>
#include<vector>
#include<iterator>

using namespace std;

class Person
{
	string Name;
	string DOB;
	long int tel_no;
	int age;

public:
	void getData()
	{
		cout<<"-------- Enter The Details of the person ------";
		cout<<"\nEnter The Name: ";
		cin>>Name;
		cout<<"\nEnter The Date of Birth: ";
		cin>>DOB;
		cout<<"\nEnter The Telephone: ";
		cin>>tel_no;
		cout<<"\nEnter The Age: ";
		cin>>age;
	}

	void disp(vector<Person>V1)
	{
		for(int i = 0; i<V1.size();i++)
		{
			cout<<V1[i].Name<<" "<<V1[i].DOB<<" "<<V1[i].tel_no<<" "<<V1[i].age<<endl;
		}
	}

	bool operator == (Person P)
	{
		if (tel_no == P.tel_no)
			return true;
		else
			return false;
	}

	bool operator < (Person P)
	{
		return (age<P.age);
	}

	void SearchData( vector<Person> P)
	{
		Person temp;

		cout<<"Enter the Telephone no to be searched: ";
		cin>>temp.tel_no;
		vector<Person> :: iterator itr;

		itr = find(P.begin(), P.end(), temp);

		if (itr != P.end())
		{
			cout<<"Record Found"<<endl;
			cout<< itr->Name<<'\t';
			cout<< itr->DOB<<'\t';
			cout<< itr->tel_no<<'\t';
			cout<< itr->age<<'\t';
		}
		else
			cout<<"Record Not found"<<endl;
	}

	void Sort(vector<Person> &P)
	{
		sort(P.begin(),P.end());
	}
};


int main()
{
	char ans;
	vector<Person>V1;

	Person p;
	do
	{
		p.getData();
		V1.push_back(p);

		cin>>ans;

	}while(ans=='y');

	int choice;
	do
	{
		cout<<"\n------ Different Operations ------ \n1] Display \n2] Search \n3]Sort"<<endl;
		cin>>choice;

		switch(choice)
		{
			case 1:
				p.disp(V1);
				break;
			case 2:
				p.SearchData(V1);
				break;
			case 3:
				p.Sort(V1);
				break;
		}
	}while(true);
	return 0;
}
