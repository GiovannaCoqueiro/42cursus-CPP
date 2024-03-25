/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcoqueir <gcoqueir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/14 11:29:14 by gcoqueir          #+#    #+#             */
/*   Updated: 2024/02/14 11:29:15 by gcoqueir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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