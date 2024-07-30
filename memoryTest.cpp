#include <iostream>

using namespace std;

void dodajelement(int *tablica, int dlugosc, int wartosc)
{
    dlugosc++;
    (int*) realloc(tablica, dlugosc*sizeof(int));
    tablica[dlugosc-1]= wartosc;
}

int main()
{
    int dlugosc = 0;
    cout << "podaj dlugosc tablicy: ";
    cin >> dlugosc;
    int *tablica;
    tablica = (int *)malloc(dlugosc * sizeof(int));
    for (int i = 0; i < dlugosc; i++)
    {
        tablica[i] = 5;
    }
    int wartosc;
    cout << "podajwartosckolejnegoelementu :) ------> ";
    cin >> wartosc;
    dodajelement(tablica, dlugosc, wartosc);
    dlugosc++;
    for (int i = 0; i < dlugosc; i++)
    {
        cout << tablica[i];
    }
    cout << "koniec";
    free(tablica);
}