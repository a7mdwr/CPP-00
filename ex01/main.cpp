#include "PhoneBook.hpp"
#include <iostream>
#include <cctype>

int main()
{
    std::string command;
    PhoneBook PhoneBook;
    while(1){
        std::cout << "Type command (SEARCH, ADD, EXIT): ";
        if (!std::getline(std::cin, command))
            return 0;
        if (command == "SEARCH")
            PhoneBook.search_function();
        else if (command == "ADD")
            PhoneBook.add_function();
        else if (command == "EXIT")
        {
            std::cout << "bye bye!" << std::endl;
            break;
        }
        else
            std::cout << "Incorrect command!" << std::endl;
   }
   return 0;
}