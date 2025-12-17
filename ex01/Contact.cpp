
#include "Contact.hpp"
#include <iomanip>
#include <iostream>

Contact::Contact()
{
    first_name = "";
    last_name = "";
    nickname = "";
    phone_number = "";
    darkest_secret = "";
}

Contact::Contact(std::string fn, std::string ln, std::string nn,
                 std::string pn, std::string ds)
{
    first_name = fn;
    last_name = ln;
    nickname = nn;
    phone_number = pn;
    darkest_secret = ds;
}

void Contact::show_contact_info(){
    std::cout << "First Name: " << first_name << std::endl;
    std::cout << "Last Name: " << last_name << std::endl;
    std::cout << "Nickname: " << nickname << std::endl;
    std::cout << "Phone Number: " << phone_number << std::endl;
    std::cout << "Dark Secret: " << darkest_secret << std::endl;
}


static std::string manage_string(std::string s){
    if (s.length() > 10)
        return s.substr(0,9) + ".";
    return s;
}

void Contact::show_contacts(int i){
    std::cout << std::setw(10) << i << "|" 
              << std::setw(10) << manage_string(first_name) << "|"
              << std::setw(10) << manage_string(last_name)  << "|"
              << std::setw(10) << manage_string(nickname)   << std::endl;
}