#include <PhoneBook.hpp>

PhoneBook::PhoneBook(void)
: contacts_count(0) {
    
}

PhoneBook::~PhoneBook(void)
{
}

void PhoneBook::showHeader(void) {

    std::cout << "┌―――――――――――――――――――――――――――――――――――――――――――┐" << std::endl;
    std::cout << "│     index│first name│ last name│ nickname │" << std::endl;

}

void PhoneBook::showInstructions(void) {
    
    std::cout   << "Error:\tUnknown Command\n"
                << "\tTry [ADD,SEARCH,EXIT]"
                << std::endl;

}

void PhoneBook::addContact(void) {
    
    if (this->contacts_count < 8) {
        this->contacts[contacts_count].fillContact();
        this->contacts_count++;
    } else {
        std::cout << "There Are Too Many Contacts The Oldest Will Be Replaced!" << std::endl;
        
    }
    
}

void PhoneBook::searchContact(void) {
    
    int index;
    std::string input;
    
    while (true) {
        
        std::cout << "Index: ";
        std::getline(std::cin, input);
        if (std::cin.eof())
            exit(0);
        if (input == "")
            continue;
        if (Contact::isNonNum(input)) {
            std::cout << "Invalid Input" << std::endl;
            continue;
        } else
            index = std::atoi(input.c_str());
        if (index < this->contacts_count && index >= 0) {
            this->contacts[index].showAllInfos();
            break;
        } else {
            std::cout << "No Such Index Exists" << std::endl;
        }

    }
    
}

void PhoneBook::showContacts(void) {

    this->showHeader();
    for (int i = 0; i < this->contacts_count; i++) {
        this->contacts[i].showContact();
    }

}
