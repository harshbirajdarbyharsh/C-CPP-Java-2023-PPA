#include<iostream>
using namespace std;

class Base
{
    public:
        int i,j,k;
    void Fun()
        { cout<<"Inside Base fun\n";}
    void Gun()
        { cout<<"Inside Base gun\n"; }
    void Sun()
        { cout<<"Inside Base sun\n"; }
    void Run()
        {  cout<<"Inside Base run\n"; }
};

class Derived : public Base
{
    public:
        int a,b;
        void Gun()
        {
            cout<<"Inside derived gun\n";
        }
          void Run()
        {
            cout<<"Inside Base run\n";
        }
};

int main()
{
    Base *bp = new Base;    //bp = base pointer
    bp->Fun();
    bp->Gun();
    bp->Sun();
    bp->Run();

    
    
    return 0;
}