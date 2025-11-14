#include <ctype.h>
#include <iostream>

int main(int ac, char **av){
    int j, i;
    j = 1;
    while (j < ac){
        i = 0;
        while (av[j][i]){
            char c = static_cast<char>(toupper(av[j][i]));
            std::cout << c;
            i++;
        }
        j++;
    }
    std::cout << std::endl;
    return 0;
}