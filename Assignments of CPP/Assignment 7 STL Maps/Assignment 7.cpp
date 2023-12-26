#include<iostream>
#include<map>
#include<iterator>
using namespace std;

int main()
{
    map<string,int>m1;
    map<string,int>::iterator itr;
    string state;

    int population;

    for (int i=0; i<3; i++)
    {
        cin>>state>>population;
        m1.insert(make_pair(state,population));
    }

    for (itr = m1.begin();itr!=m1.end();itr++)
    {
        cout<<itr->first<<"\t"<<itr->second<<endl;
    }

    cin>>state;

    for (itr = m1.begin();itr!=m1.end();itr++)
    {
        if(itr->first==state)
        {
            cout<<itr->second;
            break;
        }
    }
}
