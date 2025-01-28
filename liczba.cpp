#include <iostream>
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
    return 0;
}
