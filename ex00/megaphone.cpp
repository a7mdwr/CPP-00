
#include <iostream>
#include <cctype>

int main(int ac, char **av){
    int j, i;
    char c;
    j = 1;
    while (j < ac){
        i = 0;
        while (av[j][i]){
            c = static_cast<char>(std::toupper(av[j][i]));
            std::cout << c;
            i++;
        }
        j++;
    }
    std::cout << std::endl;
    return 0;
}
