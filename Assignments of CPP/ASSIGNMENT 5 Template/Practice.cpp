#include<iostream>

using namespace std;

template <class T>
void display(T arr[], int n)
{
    cout<<"[ ";
    for (int i = 0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<"]"<<endl;
}

template <class T>
void selectionsort(T arr[], int n)
{
    int min_ind;

    for(int i=0; i<n-1; i++)
    {
        min_ind = i;
        for(int j=i+1; j<n; j++)
        {
            if(arr[j]<arr[i])
            {
                T temp;
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

int main()
{
    int n,m;
    cout<<"Enter The Elements to be entered: ";
    cin>>n;

    int a[n];
    float b[n];
    string c[n];

    cout<<"Enter the data type \n1)Integer\n2)Float \n3)String"<<endl;
    cin>>m;

    switch(m)
    {
    case(1):

        for (int i=0; i<n; i++)
            cin>>a[i];
        display(a,n);
        selectionsort(a,n);
        display(a,n);
        break;

    case(2):

        for (int i=0; i<n; i++)
            cin>>b[i];
        display(b,n);
        selectionsort(b,n);
        display(b,n);
        break;

    case(3):

        for (int i=0; i<n; i++)
            cin>>c[i];
        display(c,n);
        selectionsort(c,n);
        display(c,n);
        break;
    }

    return 0;
}
