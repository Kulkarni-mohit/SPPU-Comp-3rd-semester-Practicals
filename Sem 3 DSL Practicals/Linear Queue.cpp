#include<iostream>

using namespace std;

class Queue
{
	int q[10];
	
	int f = -1;
	int r = -1;
	
public:
	void insert()
	{
		cout<<"\nInsertion Operation"<<endl;
		cout<<"Enter the no. to be inserted:  ";
		r++;
		cin>>q[r];
	}
	
	void delete_()
	{
		if(f==-1 && r==-1 && r<f)
			cout<<"Empty Queue !!!"<<endl;
		else
		{
			cout<<"\nDeletion Operation"<<endl;
			cout<<"Deleted Element is: "<<q[f];
			f++;
		}
	}
	
	void create()
	{
		cout<<"Enter total no of elements to be added inside the queue: ";
		int n;
		cin>>n;
		f=0;
		for(int i = 0; i<n; i++)
		{
			r++;
			cin>>q[r];
		}
	}
	
	void display()
	{
		cout<<endl;
		cout<<"Queue is: ";
		for(int i = f; i<=r; i++)
		{
			cout<<q[i]<<' ';
		}
		cout<<endl;
	}
};

int main()
{
	Queue qo;
	
	qo.create();
	qo.display();
	qo.insert();
	qo.display();
	qo.delete_();
	qo.display();
	
	
	return 0;
}
