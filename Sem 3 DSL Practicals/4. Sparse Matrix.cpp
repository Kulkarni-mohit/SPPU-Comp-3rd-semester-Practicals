#include <iostream>

using namespace std;

int main()
{
    int m,n;

    cout<<"Enter the number of rows";
    cin>>m;

    cout<<"Enter the number of columns";
    cin>>n;

    int mat[m][n];

    for (int i=0; i<m; i++)
    {
        for (int j=0; j<n; j++)
        {
            cout<<"Enter the value for "<<i<<","<<j<<":";
            cin>> mat[i][j];
        }
    }

    for (int i=0; i<m; i++)
    {
        cout<<"[";
        for(int j=0; j<n;j++)
        {
            cout<<mat[i][j]<<" ";
        }
        cout<<"]"<<endl;

    }

    return 0;
    int k=0, count_ = 0;
    int s[][3];
    s[0][0]=m,s[0][1]=n;

    for (int i=0; i<m; i++)
    {
        for (int j=0; j<n; j++)
        {
            if(a[i][j]!=0)
            {
                s[k][0] = i;
                s[k][1] = j;
                s[k][2] = a[i][j];
                k++;
                count_++;
            }
        }
    }
    s[0][2] = count_;

    for (int i=0; i<k; i++)
    {
        cout<<"[";
        for(int j=0; j<3;j++)
        {
            cout<<mat[i][j]<<" ";
        }
        cout<<"]"<<endl;
    }
}
