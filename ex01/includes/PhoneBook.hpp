#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "Contact.hpp"

class PhoneBook {
    private:
        Contact _contacts[8];
        int _length;
        int _index;
    
    public:
        PhoneBook();
        ~PhoneBook();
        Contact getContact(int index) const;
        int getLength() const;
        int getIndex() const;
        void setContact(Contact contact);
        void setLength(int length);
        void setIndex(int index);
        void addContact();
        void searchContact();
};

#endif