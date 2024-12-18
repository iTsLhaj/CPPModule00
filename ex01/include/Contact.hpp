#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <iostream>
#include <iomanip>



class Contact {
    
private:
    
    std::string _infos[5];
    int _index;
    
    std::string _truncateString(std::string s);

    static int _instances;
    static const int _firstField;
    static const int _lastField;
    static const std::string _fields[5];
    
public:
    
    Contact(void);
    ~Contact(void);
    
    void showContact(void);
    void showAllInfos(void);
    void fillContact(void);
    
    static bool isNonNum(std::string s);
    
};

#endif
