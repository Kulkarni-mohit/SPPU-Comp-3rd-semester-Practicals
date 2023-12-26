#include <iostream>

using namespace std;

int main()
{
    int m,n,cnt=0;

    cout<<"Enter the number of rows: ";
    cin>>m;

    cout<<"Enter the number of columns: ";
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

    cout<<"The Entered Matrix is: "<<endl;

    for (int i=0; i<m; i++)
    {
        cout<<"[";
        for(int j=0; j<n;j++)
        {
            cout<<mat[i][j]<<" ";
            if (mat[i][j]==0)
                cnt++;
        }
        cout<<"]"<<endl;

    }


    int s[cnt][3],k=1;

    s[0][0]=m,s[0][1]=n,s[0][2]=((m*n)-cnt);

    for (int i=0; i<m; i++)
    {
        for (int j=0; j<n; j++)
        {
            if(mat[i][j]!=0)
            {
                s[k][0] = i;
                s[k][1] = j;
                s[k][2] = mat[i][j];
                k++;

            }
        }
    }

    cout<<"The Sparse Matrix of the Given Matrix is :"<<endl;
    for (int i=0; i<k; i++)
    {
        cout<<"[";
        for(int j=0; j<3;j++)
        {
            cout<<s[i][j]<<" ";
        }
        cout<<"]"<<endl;
    }

    return 0;
}
