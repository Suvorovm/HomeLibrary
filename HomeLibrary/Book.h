#pragma once
#include<string>
using namespace std;
class Book
{
private:
	string authorName;//поля класа 
	string surname;
	string genre;
	string nameBook;
	tm year;
	//копирование строк
	string deepCopyng(string source);
public:
	//Геттеры - возварщающие значения
	string GetAuthorName();
	string GetSurname();
	string GetNameBook();
	tm GetYear();
	string GetGenr();

	//Конструктор с параметрами
	Book(string authorName, string shurName, string genre, tm year,string nameBook);
	//конструктор копирования
	Book(const Book& book);
	//конструктор без параметров
	Book();
	//диструктор
	~Book();
	
};

