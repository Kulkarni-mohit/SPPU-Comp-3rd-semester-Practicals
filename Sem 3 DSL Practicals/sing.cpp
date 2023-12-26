#include<iostream>

using namespace std;

class queue
{
	int arr[20];
	int f=-1;
	int r=-1;
	char ch;
	int n;
	
	
	public:
	void create(){
		if(f==-1&&r==-1){
		f=0;
		r=0;
		}
		cout<<"enter number of elements you want to enter:- ";
		cin>>n;
		cout<<"enter elements:- ";
		for(int i=0;i<n;i++){
			cin>>arr[i];
			r++;
		}
	}
	
	void insert()
	{	if(f==-1&&r==-1){
		f=0;
		r=0;
		}
		r++;
		cout<<"enter the element in queue:- ";
		cin>>arr[r];
		cout<<"do you want to enter more elements?";
		cin>>ch;
		if(ch=='y'){
		insert();
		}
	}
	void delete_ele(){
		cout<<"the element "<<arr[f]<<"is deleted\n";
		f++;
	}
	void display()
	{
		for(int i=f;i<r;i++)
		{
			cout<<arr[i];
		}
		cout<<endl;
	}

};

int main()
{
	queue q1;
	int chn;
	
	do
	{
	cout<<"*********************  MENU *************\n";
	cout<<"Enter 1 for creation of queue:- \n";
	cout<<"ENter 2 for insetion of element in queue:- \n";
	cout<<"ENter 3 for deletion of element in queue:- \n";
	cout<<"Enter 4 to display queue:-\n\n\n";
	cout<<"Enter Your choice number:- ";
	cin>>chn;
	
	
	switch (chn){
		case 1:
			q1.create();
	
			break;
		case 2:
			q1.insert();
			break;
		case 3:
			q1.delete_ele();
			break;
		case 4:
			cout<<"the queue is:- \n";
			q1.display();
			break;
	}
	}while(true);
	
	
	
	

}
