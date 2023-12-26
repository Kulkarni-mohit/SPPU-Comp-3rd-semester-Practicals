#include <iostream>

using namespace std;

template <class T>
class SelectionSort
{
    T arr[3];
public:

    void getdata()
    {
        for(int i = 0; i<3 ; i++)
        {
            cin>>arr[i];
        }
    }

    void swap(T *xp, T *yp)
    {
        int temp = *xp;
        *xp = *yp;
        *yp = temp;
    }

    void SelectionSort()
    {
        int min_idx;

        for (int i = 0; i < 2; i++)
        {
            min_idx = i;
            for (int j = i+1; j < 3; j++)
                if (arr[j] < arr[min_idx])
                    min_idx = j;

            if(min_idx!=i)
                swap(&arr[min_idx], &arr[i]);
        }
    }

    void display(int n){
        cout<<"[";
        for(int i=0;i<n;i++){
            cout<<arr[i]<<" ";
        }
        cout<<"]"<<endl;
    }
};
