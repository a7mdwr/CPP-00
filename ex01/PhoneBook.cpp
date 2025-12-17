#include "PhoneBook.hpp"
#include <iomanip>
#include <iostream>
#include <cctype>


void PhoneBook::add_function(){
    std::string first_name;
    std::string last_name;
    std::string nickname;
    std::string phone_number;
    std::string dark_secret;

    std::cout << "First Name: ";
    std::getline(std::cin, first_name);
    std::cout << "Last Name: ";
    std::getline(std::cin, last_name);
    std::cout << "Nickname: ";
    std::getline(std::cin, nickname);
    std::cout << "Phone Number: ";
    std::getline(std::cin, phone_number);
    std::cout << "Dark Secret: ";
    std::getline(std::cin, dark_secret);
    if (first_name.empty() || last_name.empty() || nickname.empty() || phone_number.empty() || dark_secret.empty())
    {
        std::cout << "Empty is not allowed!" << std::endl;
        return;
    }
    contacts[i] = Contact(first_name, last_name, nickname, phone_number, dark_secret);
    i = (i + 1) % 8;
    if (count < 8)
        count++;
}

void PhoneBook::search_function(){
    int i = 0;
    if (count == 0)
    {
        std::cout << "Empty contact" << std::endl;
        return;
    }
    std::cout << std::setw(10) << "Index" << "|"
              << std::setw(10) << "First Name" << "|" 
              << std::setw(10) << "Last Name"<< "|" 
              << std::setw(10) << "Nickname" << std::endl;
    while (count > i)
    {
        contacts[i].show_contacts(i);
        i++;
    }
    std::cout << "Enter Number of contact: ";
    std::string user_input;
    std::getline(std::cin, user_input);
    if (user_input.length() == 1 && std::isdigit(user_input[0]))
    {
        int index = user_input[0] - '0';
        if (index >= 0 && index < count)
        {
            contacts[index].show_contact_info();
            return;
        }
    }
    std::cout << "invalid input (must be a digit!)" << std::endl;
}

