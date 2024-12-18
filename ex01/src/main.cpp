#include <PhoneBook.hpp>



std::string getCommand(void) {
    
    std::string command;
    
    std::cout << "phonebook$> ";
    std::getline(std::cin, command);
    if (std::cin.eof())
        exit(0);
    return command;
    
}

int main(void) {
    
    std::string command;
    PhoneBook pb;
    
    while (true) {
        
        command = getCommand();
        if (command.empty())
            continue;
        if (command == "EXIT") {
            break;
        } else if (command == "ADD") {
            pb.addContact();
        } else if (command == "SEARCH") {
            pb.showContacts();
            pb.searchContact();
        } else {
            pb.showInstructions();
        }
        
    }
    
    return 0;
    
}
