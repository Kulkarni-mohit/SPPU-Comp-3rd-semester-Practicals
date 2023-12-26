#include <iostream>
#include "fstream"

using namespace std;

int main()
{
    ifstream fin;
    ofstream fout;
    char buffer[100];

    fout.open("File", ios::out);

    fout<< "HeLLo\n";
    fout<< "World";

    fout.close();

    fin.open("File");
    fout.open("File2");

    while (!fin.eof())
    {
        fin>>buffer;
        fout<<buffer<<'\n';
        cout<<buffer<<'\n';
    }
    fin.close();
    fout.close();
}
