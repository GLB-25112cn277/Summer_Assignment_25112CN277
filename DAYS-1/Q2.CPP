#include<iostream>
using namespace std;
int main()
{
    int number;
    std::cout<<"Enter an integer: ";
    std::cin>>number;
    std::cout<<"multiplication table of"<<number<<":\n";
    for(int i=1;i<=10;i++)
    {
        std::cout<<number <<"x"<<i<<"="<<number*i<<"\n";
    }

    return 0;
}