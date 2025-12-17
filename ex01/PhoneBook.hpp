#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP


#include "Contact.hpp"

class PhoneBook{
    private:
        Contact contacts[8];
        int count;
        int i;
    public:
        void add_function();
        void search_function();
};

#endif