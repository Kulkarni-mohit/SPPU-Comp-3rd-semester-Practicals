#include<iostream>
using namespace std;
int main()
{
	int a,b,i,j,counter=0;
	cout<<"ENTER THE MATRIX ROWS:-  ";
	cin>>a;
	cout<<"ENTER THE MATRIX COLUMNS :-  ";
	cin>>b;
	int matrx[a][b];

	for(i=0;i<a;i++)
	{
		for(j=0;j<b;j++)
		{
			cout<<i<<j<<" ";

		}
		cout<<"\n";
	}
	cout<<"\nENTER VALUES FOR \n";
	for(i=0;i<a;i++)
	{
		for(j=0;j<b;j++)
		{
			cout<<"\n"<<i<<j<<"  :-  ";
			cin>>matrx[i][j];
			if(matrx[i][j]!=0)
			{
				counter=counter+1;
			};
		}
	}
	cout<<"\n";
	for(i=0;i<a;i++)
	{
		for(j=0;j<b;j++)
		{
			cout<<matrx[i][j]<<"    ";

		}
		cout<<"\n";
	}

	int spars[(counter+1)][3],k=1;
	spars[0][0]=a;
	spars[0][1]=b;
	spars[0][2]=counter;

	for(i=0;i<a;i++)
	{
		for(j=0;j<b;j++)
		{
			if(matrx[i][j] != 0)
			{
				spars[k][0]=i;
				spars[k][1]=j;
				spars[k][2]=matrx[i][j];
				k+=1;
			};
		}
	}

	cout<<"\nROW  COLUMN  VALUE\n";
	for(i=0;i<k;i++)
	{
		cout<<"\n"<<spars[i][0]<<"    "<<spars[i][1]<<"    "<<spars[i][2];
	}
	cout<<"\n";
}

