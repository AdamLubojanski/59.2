#include <sstream>
#include <string>
#include <iostream>
#include <cstring>
#include <fstream>
#include <cstdlib>
using namespace std;

class liczba_zad
{
	ifstream plik1;
    ofstream plik2;
    int liczba;

  public:
  	int wczytaj_zpliku();
    int odwroc_liczbe(); //na wyniku odwrocona liczba
    bool czy_suma_jest_palindromem(); //glowna funkcja liczaca wyliczająca czy liczba i jej odwrotnosc jest palindromem
    int zamknij();
  
  private:
  //wewnętrzne metody tylko dla tej klasy do użycja w funkcjach np. public
    string zamien_liczbe_na_string();
    string odwroc_liczbe_str(string liczbastr); // z tej funkcji korzysta funkcja odwroc_liczbe()
    bool czy_palindrom_string(string liczbastr); //od konca znak = od poczatku
};
void liczba_zad::wczytaj_zpliku()
{
	plik1.open("c:\\plik1.txt");
    plik2.open("c:\\plik2.txt");
}
void liczba_zad::odwroc_liczbe()
{
   string wynik = odwroc_liczbe_str(zamien_liczbe_na_string());
   string liczba;
	int index;
	int i=0;
	plik2<<"[";
	while(!plik1.eof()){ 
        plik1>>liczba;
        
        orginal[i]=liczba;
		sort[i]=stringSort(liczba);
		cout<<sort[i]<<endl;;
		i++;
   liczba_odwrotna = s.length()-1; 
   suma = liczba+liczba_odwrotna;
}
void liczba_zad::czy_suma_jest_palindromem()
{
	int suma = s.length()-1; 
        bool palindrome = true; //zakładamy że jest
        for (int i=0; i<s.length()/2 && palindrome; i++) //tylko do połowy stringu
                if (s[i] != s[suma--]) //suma po podstawieniu zmniejszy się o 1 z ostatniej na przedostatnią itd.
                        palindrome = false;
                       
        return palindrome;
}
void liczba_zad::zamknij()
{
	plik1.close();
    plik2.close();
}

int main(int argc, char** argv) {
	
	liczba_zad change;
	change.wczytaj_zpliku();
	change.odwroc_liczbe();
	change.czy_suma_jest_palindromem();
	
	return 0;
}
