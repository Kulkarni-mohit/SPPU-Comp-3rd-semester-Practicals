#include<iostream>
#include<map>
#include<iterator>

using namespace std;

int main()
{
    map<string,int>m;
    map<string,int>::iterator itr;

    string state;
    int popu;

    for(int i=0; i<3;i++)
    {
        cin>>state>>popu;
        m.insert(make_pair(state,popu));
    }


    for(itr = m.begin(); itr!=m.end(); itr++)
    {
        cout<<itr->first<<'\t'<<itr->second<<endl;
    }

    cin>>state;
    for(itr = m.begin(); itr!=m.end(); itr++)
    {
        if(itr->first == state)
            cout<<itr->second;
    }
    return 0;
}
