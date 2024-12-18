#include <iostream>
#include <cstring>



void toUpper(char* str) {
    
    for (size_t i = 0; i < std::strlen(str); i++) {
        str[i] = std::toupper(str[i]);
    }
    
}

int main(int ac, char** av) {
    
    int i;
    
    if (ac > 1) {
        i = 1;
        while (i < ac) {
            toUpper(av[i]);
            std::cout << av[i];
            i++;
        }
    } else {
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOICE *";
    }
    std::cout << std::endl;
    
}
