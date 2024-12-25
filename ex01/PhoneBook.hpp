#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "Contact.hpp"



class PhoneBook {
    
private:
    
    Contact contacts[8];
    int contacts_count;
    
    static void showHeader(void);
    
public:
    
    PhoneBook(void);
    ~PhoneBook(void);
    
    void addContact(void);
    void showContacts(void);
    void searchContact(void);
    
    static void showInstructions(void);
    
};

#endif
