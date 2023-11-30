#include<iostream>
// using namespace std;

namespace Marvellous 
{
    void Display()
    {
        std::cout<<"Inside Display of marvellous\n";
    }
}
namespace Infosystems
{
    void Display()
    {
        std::cout<<"Inside Display of Infosystems\n";
    }
}

int main()
{
    Marvellous::Display();
    Infosystems::Display();

    return 0;
}