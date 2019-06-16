// HomeLibrary.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include "pch.h"
#include <iostream>
#include "Book.h"
#include "Library.h"
#include<string>
#include <windows.h>
using namespace std;
void printMenu() {
	cout << "Выбереите действие \n";
	cout << "1 -  Добавить книгу\n";
	cout << "2 - Найти по ...\n";
	cout << " 3 - Сортировать по ....\n";
		cout << "4  - Удалить по названию\n";
		cout << "5 - выйти\n";

}
void printFindBookBy() {
	cout << "1- По имени автора\n";
	cout << "2 - По году\n";
	cout << " 3 - По фамилии\n";
}
void printAddBook() {
	cout << "\n Введите Имя,  фамилию, год изднаия, название книги,жанр\n";
}
int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	int forCase = 5;
	Library<string> homeLibary("Домашняя библиотека");
	Library<int> homeLibaryInteger(1547);
	
	bool flag = true;
	while (flag) {
		string nameAuth;
		string genre;
		string nameBook;
		string surname;
		string tmp;
		tm year;
		printMenu();
		string str;
		tm parametrs;
		vector<Book> result;
		cin >> forCase;
		switch (forCase)
		{
		case 1: {
			printAddBook();
			cin >> nameAuth ;
			cin>> surname;
			cin >> tmp;
			cin >> nameBook;
			cin >> genre;
			year.tm_year = stoi(tmp);
			Book mybook(nameAuth, surname, genre, year, nameBook);
			homeLibary.AddBook(mybook);
			break;
		}
		case 2: {
			printFindBookBy();
			int switch_on = 15;
			cin >> switch_on;
			switch (switch_on)
			{				
			case 1: {
				cin >> str;
				 result = homeLibary.GetBooksByAuthName(str);
				break;
			}
			case 2: {
				cin >> str;
				parametrs.tm_year = stoi(str);
				 result = homeLibary.GetBooksByYear(parametrs);
				break;
			}
			case 3: {
				cin >> str;
				 result = homeLibary.GetBooksBySurname(str);				
				break;				
			}
			default:
				break;
			}
			
			cout << "Книги\n";
			if (result.capacity() != 0) {
				for (size_t i = 0; i < result.capacity(); i++)
				{
					cout << result[i]<<"\n";
				}
			}
			else {
				cout << "Нет книг с данным автором\n";
			}
			break;
		}
		case 3: {
			int n = 125;
			cout << "1 -  Сортировка по Имени автора\n";
			cin >> n;
			vector<Book> result;		
			switch (n)
			{
			case 1:
				result =homeLibary.SortByAutherName();
				break;
			default:
				break;
			}
			cout << "Отсортированный список по имени автора\n";
			if (result.capacity() != 0) {
				for (size_t i = 0; i < result.capacity(); i++)
				{
					cout << result[i]<< "\n";
				}
			}
			else {
				cout << "Нечего сортировать";
			}
			break;
			
		}
		case 4:
			cout << "Введите название книги\n";
			cin >> str;
			homeLibary.DelleteByNameBook(str);
			break;
			
		default:
			flag = false;
			break;
		}
		
	}
	tm time;
	time.tm_year = 1999;
	Book bk1("Федор", "Достоевский", "Роман", time, "преступление и наказание");
	Book bk2("Федор", "Достоевский", "Роман", time, "преступление и наказание");
	cout << "Сравнение книг"<<"1 - \t"<<bk1<<"И"<<bk2;
	if (bk1 == bk2) {
		cout << "\nРавны!!!!!!!!!!!!!";
	}
	else
	{
		cout << "неравны";
	}
	return 0;
}

