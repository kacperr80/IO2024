#include <iostream>
#include <cmath>
bool czy_bezkwadratowa(int liczba){
	if (liczba < 1) return false;
	for(int i = 2; i<=std::sqrt(liczba);i++) {
	if(liczba % (i * i) == 0) return false;

} 
	return true;



}

int main() {
    int liczba;
    std::cin >> liczba;
    std::cout << "Wprowadzona liczba: " << liczba << (czy_bezkwadratowa(liczba) ? " jest" : " nie jest") << " liczbą bezkwadratową." << std::endl;

    if (liczba <= 0) {
        std::cout << "Podana liczba nie jest dodatnia. Program zakonczyl dzialanie." << std::endl;
        return 1;
    }

    std::cout << "Wprowadzona liczba: " << liczba << std::endl;
    return 0;
}
