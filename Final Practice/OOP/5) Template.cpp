#include<iostream>

using namespace std;

template<class T>
void display(T arr[],int n)
{
    for(int i= 0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

template<class T>
void Selection(T arr[],int n)
{
    for(int i=0; i<n-1; i++)
    {
        for(int j = i+1; j<n; j++)
        {
            if(arr[j]<arr[i])
            {
                T temp = arr[j];
                arr[j] = arr[i];
                arr[i] = temp;
            }
        }
    }
}

int main()
{
    int a[]={1,8,5,3,4};
    float b[] = {1.5,9.2,5.3,1.2};
    string c[] = {"Mohit","Neha","Akhilesh","Marane"};

    Selection(a,5);
    Selection(b,4);
    Selection(c,4);

    display(a,5);
    display(b,4);
    display(c,4);
    return 0;
}
