#include<iostream>
#include<map>
#include<iterator>

using namespace std;

int main()
{
    map<string,int> m;
    map<string,int>::iterator itr;

    string state;
    int popu;

    int entries;
    cout<<"How many entries to take?? ";
    cin>>entries;

    for(int i=0; i<entries; i++)
    {
        cin>>state>>popu;
        m.insert(make_pair(state,popu));
    }

    for(itr = m.begin();itr!=m.end(); itr++)
    {
        cout<<itr->first<<'\t'<<itr->second<<endl;
    }

    cin>>state;

    for(itr = m.begin(); itr!=m.end();itr++)
    {
        if(state == itr->first)
            cout<<itr->second;
    }

    return 0;
}
