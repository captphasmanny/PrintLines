//
//  main.cpp
//  PrintLines
//
//  Created by Emanuel Alfaro on 11/6/23.
//

#include <iostream>

int main()
{
    std::cout << "Hello" << " " << "Earthlings!" << '\n';
    std::cout << 4 << '\n';
    int x{ 5 };
    std::cout << x << std::endl;
    std::cout << "I will now print x, which is " << x << '\n';
    std::cout << "I will now print x again, \nwhich is " << x << '\n';
    //PREFER \n OVER std::endl
    int inputY{};
    std::cout << "Please enter a number: ";
    std::cin >> inputY;
    std::cout << "You entered: " << inputY << '\n';
    std::cout << inputY << " + 9 = ";
    std::cout << inputY + 9 << '\n';
}

