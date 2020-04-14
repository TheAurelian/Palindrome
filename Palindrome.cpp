#include <iostream>
#include <string>
#include <vector>

int main()
{
    int Number = 0; 
    int Reverse = 0;     
    int Original; 
    int x; 

    std::cout << "";
    std::cin >> Number;

    Original = Number;

    do
    {
        x = Number % 10;
        Reverse = (Reverse * 10) + x;
        Number = Number / 10;
    } 
    while (Number != 0);

    if (Original == Reverse)
        std::cout << "Is palindrome";
    else
        std::cout << "Not a palindrome";
    return 0;
}