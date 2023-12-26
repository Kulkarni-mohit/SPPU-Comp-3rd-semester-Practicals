#include <iostream>
#include <string>

using namespace std;

template <class T>
void display(T arr,int n){
    cout<<"[";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<"]"<<endl;
}


template <class T>
void swap(T *xp, T *yp)
{
    T temp = *xp;
    *xp = *yp;
    *yp = temp;
}


template <class T>
void SelectionSort(T arr[], int n)
{
    int min_idx;

    for (int i = 0; i < n-1; i++)
    {
        min_idx = i;
        for (int j = i+1; j < n; j++)
        if (arr[j] < arr[min_idx])
            min_idx = j;

        if(min_idx!=i)
            swap(&arr[min_idx], &arr[i]);
    }
}


int main()
{
    int n, data_type;
    cout << "Enter The Total number of Elements: ";
    cin>>n;

    int a[n];
    float b[n];
    string c[n];

    cout << "Enter the Data Type of Array: \n1] Integer\n2] float\n3] String"<<endl;
    cin>> data_type;

    switch(data_type)
    {

    case 1:

        for(int i=0; i<n ; i++)
        {
            cin>>a[i];
        }
        display(a,n);
        SelectionSort(a,n);
        display(a,n);
        break;


    case 2:

        for(int i=0; i<n ; i++)
        {
            cin>>b[i];
        }
        display(b,n);
        SelectionSort(b,n);
        display(b,n);
        break;

    case 3:

        for(int i = 0; i<n ; i++)
            cin>>c[i];
        display(c,n);
        SelectionSort(c,n);
        display(c,n);
    }


    return 0;
}
