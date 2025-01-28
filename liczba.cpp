#include <iostream>

int main() {
    int liczba;
    std::cin >> liczba;

    if (liczba <= 0) {
        std::cout << "Podana liczba nie jest dodatnia. Program zakonczyl dzialanie." << std::endl;
        return 1;
    }

    std::cout << "Wprowadzona liczba: " << liczba << std::endl;
    return 0;
}
