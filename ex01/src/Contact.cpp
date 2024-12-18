#include <Contact.hpp>

int Contact::_instances = 0;
const int Contact::_firstField = 0;
const int Contact::_lastField = 4;

const std::string Contact::_fields[5] = {
    
    "FirstName",
    "LastName",
    "NickName",
    "PhoneNumber",
    "DarkestSecret"
    
};

bool Contact::isNonNum(std::string s) {
    
    int i = 0;
    
    if (s[i] == '+')
        i++;
    for (; i < (int)s.length(); i++) {
        if (!isnumber(s[i]))
            return true;
    }
    return false;
    
}

Contact::Contact(void) {
    
    this->_index = Contact::_instances;
    Contact::_instances++;
    
}

Contact::~Contact(void)
{
}

std::string Contact::_truncateString(std::string s) {
    
    if (s.length() <= 10) {
        return s;
    } else {
        return s.substr(0, 9) + '.';
    }
    
}

void Contact::showContact(void) {
    
    std::cout   << "|" << std::setw(10) << this->_index
                << "|" << std::setw(10) << _truncateString(this->_infos[0])
                << "|" << std::setw(10) << _truncateString(this->_infos[1])
                << "|" << std::setw(10) << _truncateString(this->_infos[2])
                << "|" << std::endl;
    
}

void Contact::showAllInfos(void) {
    
    for (int i = Contact::_firstField; i <= Contact::_lastField; i++) {
        std::cout   << Contact::_fields[i]
                    << ": " << this->_infos[i]
                    << std::endl;
    }
    
}

void Contact::fillContact(void) {
    
    std::string info;
    
    for (int i = Contact::_firstField; i <= Contact::_lastField; i++) {
        while (true) {
            
            std::cout << Contact::_fields[i] << ": ";
            std::getline(std::cin, info);
            if (std::cin.eof())
                exit(0);
            if (info == "") {
                std::cout << "The Input Field Can't be empty!" << std::endl;
                continue;
            } else if (isNonNum(info) && Contact::_fields[i] == "PhoneNumber") {
                std::cout << "The PhoneNumber Can't Contain Non-Numbers!" << std::endl;
                continue;
            }
            for (int j = 0; j < (int)info.length(); j++) {
                if (info[j] != '\t')
                    this->_infos[i] += info[j];
                else if (info[j] == '\t')
                    this->_infos[i] += ' ';
            }
            break;
            
        }
    }
    
}
