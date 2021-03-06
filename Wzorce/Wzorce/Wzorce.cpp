// Wzorce.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <typeinfo>
#include <string>
/*
				Zadanie 1
#Napisz szablon funkcji 'ReadArray' wyswietlajacej wszystkie elementy z tablicy konkretnego typu
#A dla typu string wypisuje kazdy element w osobnej lini
*/


/*
				Zadanie 2
#Napisz szablon funkcji 'Swap' zamieniajacej miejscami 2 elementy w tablicy
#Jesli jeden z indeksow jest poza zakresem wypisz 
	std::cout << "Probujesz zamienic miejscami elementy ktore sa poza tablica" <<std::endl;
#Ps. Wykorzystaj funkcje z zadania 1 by sprawdzic poprawnosc wykonania funkcji;
*/


/*
				Zadanie 3
#Napisz szablon klasy 'Matrix' ktory bedzie dodawal (int) N do macierzy result -> Poczatkowa wartosc inicjonowana w konstruktorze
np. (std::string) result[0] += N (nalezy wykonac tylko dla string) -> sprawdzenie czy potrafisz napisać szczegółowy szablon
Dla string nalezy zwiekszyc kazda litere o N -> szyfr cezara (jedno slowo)
*/

template<typename T, size_t N>
class Matrix
{
private:
	T result[N];
public:
	Matrix();
	Matrix(T(&arrayOfSmth)[N]);
	void AddN(short value);
};



int main()
{
	std::string arrayOfStrings[] = { "Kotek","Kotel","Kicius","Kot" };
	int arrayOfInts[] = { 67,65,45,32,12,55 };
	char arrayOfChars[] = { 's','g','7','h','p' };
	float arrayOfFloats[] = { 86.5f,69.9f,4.2f,87.001f };
	//Zadanie 1
	ReadArray(arrayOfStrings);
	ReadArray(arrayOfInts);
	ReadArray(arrayOfChars);
	ReadArray(arrayOfFloats);
	//Zadanie 2
	std::cout << std::endl << std::endl;
	Swap(arrayOfStrings, 3, 0);
	Swap(arrayOfInts, 4, 0);
	Swap(arrayOfChars, 4, 2);
	Swap(arrayOfFloats, 1, 0);
	//Zadanie 3
	std::cout << std::endl << std::endl;
	std::cout << "Paczki to: ";
	Matrix<std::string,1> strings("Paczki");
	strings.AddN(4);
	ReadArray(arrayOfInts); std::cout << " to: ";
	Matrix<int, 6> ints(arrayOfInts);
	ints.AddN(6);
	Matrix<char, 5> chars(arrayOfChars);
	ReadArray(arrayOfChars); std::cout << " to: ";
	chars.AddN(5);
	Matrix<float, 4> floats(arrayOfFloats);
	ReadArray(arrayOfFloats); std::cout << " to: ";
	floats.AddN(9);
    return 0;
}

template<typename T, size_t N>
Matrix<T, N>::Matrix()
{
	for (auto i = 0; i < N; ++i)
	{
		result[i] = i;
	}
}

template<typename T, size_t N>
Matrix<T, N>::Matrix(T(&arrayOfSmth)[N])
{
	for (auto i = 0; i < N; ++i)
	{
		result[i] = arrayOfSmth[i];
	}
}

template<typename T, size_t N>
void Matrix<T, N>::AddN(short value)
{
	for (auto i = 0; i < N; ++i)
	{
		result[i] += value;
	}
	ReadArray(result);
}


