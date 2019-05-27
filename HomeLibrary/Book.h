#pragma once
#include<string>
using namespace std;
class Book
{
private:
	string authorName;//поля класа 
	string surname;
	string genre;
	tm year;
public:
	//Геттеры - возварщающие значения
	string GetAuthorName();
	string GetSurname();
	tm GetYear();
	string GetGenr();
	//Конструктор с параметрами
	Book(string authorName, string shurName, string genre, tm year);
	//конструктор копирования
	Book(const Book& book);
	//конструктор без параметров
	Book();
	//диструктор
	~Book();
	
};

