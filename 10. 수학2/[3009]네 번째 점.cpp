#include <iostream>

int main()
{
    int first[2], second[2], third[2], forth[2];
    std::cin>>first[0]>>first[1]>>second[0]>>second[1]>>third[0]>>third[1];
    if(first[0] != second[0])
    {
        forth[0] = second[0] == third[0] ? first[0] : second[0];
    }
    else
        forth[0] = third[0];
    if(first[1] != second[1])
    {
        forth[1] = second[1] == third[1] ? first[1] : second[1];
    }
    else
        forth[1] = third[1];
    std::cout<<forth[0]<<" "<<forth[1]<<"\n";
    return 0;
}