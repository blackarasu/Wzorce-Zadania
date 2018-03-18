// Wzorce.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

/*
				Zadanie 1
Napisz szablon funkcji 'readArray' wyswietlajacej wszystkie elementy z tablicy konkretnego typu
A dla typu string wypisuje kazdy element w osobnej lini
*/

template<typename T, size_t N>
void readArray(T (&arrayOfSmth)[N])
{
	for (auto i=0; i < N; ++i)
	{
		std::cout << arrayOfSmth[i] << " ";
	}
	std::cout << std::endl;
}

template<size_t N>
void readArray(std::string (&arrayOfSmth)[N])
{
	std::cout << "Tablica stringow" << std::endl;
	for (auto i=0; i < N; ++i)
	{
		std::cout << arrayOfSmth[i] << std::endl;
	}
}
/*
				Zadanie 2
#Napisz szablon funkcji 'swap' zamieniajacej miejscami 2 elementy w tablicy
#Jesli jeden z indeksow jest poza zakresem wypisz 
std::cout << "Probujesz zamienic miejscami elementy ktore sa poza tablica" <<std::endl;
Ps. Wykorzystaj funkcje z zadania 1 by sprawdzic poprawnosc wykonania funkcji;
*/

template<typename T, size_t N>
void swap(T (&arrayOfSmth)[N], size_t i, size_t j)
{
	if (i < N && j < N)
	{
		T temp = arrayOfSmth[i];
		arrayOfSmth[i] = arrayOfSmth[j];
		arrayOfSmth[j] = temp;
		readArray(arrayOfSmth);
	}
	else
	{
		std::cout << "Probujesz zamienic miejscami elementy ktore sa poza tablica" << std::endl;
	}
}

/*
				Zadanie 3

*/


int main()
{
	std::string arrayOfStrings[] = { "Kotek","Kotel","Kicius","Kot" };
	int arrayOfInts[] = { 67,65,45,32,12,55 };
	char arrayOfChars[] = { 's','g','7','h','p' };
	float arrayOfFloats[] = { 86.5f,69.9f,4.2f,87.001f };
	//Zadanie 1
	readArray(arrayOfStrings);
	readArray(arrayOfInts);
	readArray(arrayOfChars);
	readArray(arrayOfFloats);
	//Zadanie 2
	std::cout << std::endl << std::endl;
	swap(arrayOfStrings, 3, 0);
	swap(arrayOfInts, 4, 0);
	swap(arrayOfChars, 4, 2);
	swap(arrayOfFloats, 1, 0);
	//Zadanie 3
    return 0;
}

