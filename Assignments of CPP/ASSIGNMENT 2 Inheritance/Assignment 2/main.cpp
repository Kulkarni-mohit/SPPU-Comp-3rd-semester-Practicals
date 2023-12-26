#include <iostream>
#include <string>

using namespace std;

class publication
{
protected:
    string title;
    float price;
};

class book: private publication
{

private:
    int pcount;

public:

    void getData()
    {
        cout<<"------ Enter The Specified Data ------"<<endl;
        cout<<"Enter The Title Of Publication: "<<endl;
        getline(cin,title);
        cout<<"Enter The Price Of Publication: "<<endl;
        cin>>price;
        cout<<"Enter The Number of Pages: "<<endl;
        cin>>pcount;
    }

    void display()
    {

        cout<<"Enter The Title Of Publication: "<<title<<endl;

        cout<<"Enter The Price Of Publication: "<<price<<endl;
        cout<<"Enter The Number of Pages: "<<pcount<<endl;
    }
};

class tape: private publication
{

private:
    float tmin;

public:

    void getData()
    {
        cin.ignore();
        cin.clear();
        cout<<"------ Enter The Specified Data ------"<<endl;
        cout<<'\n'<< "Enter The Title Of Publication: "<<endl;
        getline(cin,title);
        cout<<"Enter The Price Of Publication: "<<endl;
        cin>>price;
        cout<<"Enter The playing time (in minutes): "<<endl;
        cin>>tmin;
    }

    void display()
    {

        cout<<"Enter The Title Of Publication: "<<title<<endl;

        cout<<"Enter The Price Of Publication: "<<price<<endl;
        cout<<"Enter The Number of Pages: "<<tmin<<endl;
    }

};


int main()
{
    book b1;
    b1.getData();
    cout<<"\n";
    b1.display();

    tape t;
    cout<<"\n\n\n\n";
    t.getData();
    cout<<"\n";
    t.display();

    return 0;
}
