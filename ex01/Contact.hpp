#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <string>
#include <iostream>

class Contact {
    private:
        std::string _name;
        std::string _phone;

    public:
    Contact();
    Contact(std::string name, std::string phone);
    ~Contact();
    std::string getName() const;
    std::string getPhone() const;
    void        setName(std::string name);
    void        setPhone(std::string phone);
};

#endif