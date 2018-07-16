#include<iostream>
using namespace std;

class parents;
class child;

class parents
{
    char mom[10];
    char dad[10];
public:
    void getParentsdata();
    void displayParents();
    friend void family(parents,child);
};

class child{
    char name[10];
public:
    void getchilddata();
    void displaychild();
    friend void family(parents,child);
};

void parents :: getParentsdata()
{
    cout<<"Enter MOM Name : ";
    cin>>mom;
    cout<<"Enter DAD Name : ";
    cin>>dad;
}

void parents :: displayParents()
{
    cout<<"Mom name : "<<mom<<endl;
    cout<<"Dad name : "<<dad<<endl;
}

void child :: getchilddata()
{
    cout<<"Enter Child Name : ";
    cin>>name;
}

void child :: displaychild()
{
    cout<<"Child name : "<<name<<endl;
}

void family(parents p,child c)
{
    cout<<"Family is : "<<endl;
    cout<<"Father Name : "<<p.dad<<endl;
    cout<<"Mother Name : "<<p.mom<<endl;
    cout<<"Child Name : "<<c.name<<endl;
}
int main(void)
{
    parents p1;
    child c;

    p1.getParentsdata();
    c.getchilddata();
    p1.displayParents();
    c.displaychild();

    family(p1,c);

    return 0;
}
