#include <iostream>

int main() {
    int liczba, maksimum;

    do {
        std::cin >> maksimum;

        if (maksimum == 0) {
            return 0;
        }

    } while (maksimum < 1 || maksimum > 100);
   
    while (true) {
        std::cin >> liczba;

        if (liczba == 0) {
            break;
        }

        if (liczba >= 1 && liczba <= 100 && liczba > maksimum) {
            maksimum = liczba;
        }
    }

    std::cout << maksimum << std::endl;

    return 0;
}
