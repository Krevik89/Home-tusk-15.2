#include <iostream>
#include <conio.h>

using namespace std;
//Функция которая удаляет из строки символ с заданным номером.
void del_el(char* str,int n) {
	int size = 0;
	if (n > strlen(str))exit(0);
	else {
		char* str2 = new char[size];
		for (int i = 0, j = 0; i < strlen(str); i++, j++) {
			if (i != n) {
				size++;
				str2[j] = str[i];
			}
			else
				j--;
		}
		puts(str2);
	}
}

//Функция которая удаляет из строки все вхождения в нее заданного символа.
void del_symbol(char* str, char n) {
	int size = 0;
	char* str2 = new char[size];
	for (int i = 0, j = 0; i < strlen(str); i++, j++) {
		if (str[i] != n) {
			size++;
			str2[j] = str[i];
		}
		else
			j--;
	}
	puts(str2);
}

//Функция вставляет в строку в указанную позицию заданный символ.
void input(char* str,int n, char c) {
	int size = 0;
	if (n > strlen(str))exit(0);
	else {
		char* str2 = new char[size];
		for (int i = 0, j = 0; i < strlen(str); i++, j++) {
			if (i != n) {
				size++;
				str2[j] = str[i];
			}
			else
				str2[j] = c;	
		}
		puts(str2);
	}
}

/*Написать программу, которая заменяет все
символы точки «.» в строке, введенной пользователем,
на символы восклицательного знака «!»*/
void replacement(char* str) {
	int size = 0;
	char n = '.';
	char* str2 = new char[size];
	for (int i = 0, j = 0; i < strlen(str); i++, j++) {
		if (str[i] != n) {
			size++;
			str2[j] = str[i];
		}
		else
			str2[j] = '!';
	}
	puts(str2);
}

/*Пользователь вводит строку символов и искомый символ, посчитать сколько раз он встречается
в строке.*/
void score(char* str) {
	int count = 0;
	for (int i = 0, j = 0; i < strlen(str); i++, j++) {
		if (str[i] == str[strlen(str)-1]) {
			count++;
		}	
	}
	cout<<"Кол-во ("<< str[strlen(str) - 1]<<") в строке = " << count-1;
}

/*Пользователь вводит строку. Определить количество букв, количество цифр и количество остальных
символов, присутствующих в строке.*/
void quantity(char* str) {
	int alpha = 0, digit = 0, other = 0;
	for (int i = 0; i < strlen(str); i++)
	{
		if (isalpha(str[i]))alpha++;
		else if (isdigit(str[i]))digit++;
		else other++;
	}
	cout <<"Букв " << alpha << " Цифер " << digit << " Символов " << other;
}


int main()
{
	setlocale(LC_ALL, "");
	char* str = new char [255];
	gets_s(str,254);
	//del_el(str, 3);
	//del_symbol(str, 's');
	//input(str, 3, 's');
	//replacement(str);
	//score(str);
	//quantity(str);
}


