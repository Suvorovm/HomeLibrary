#pragma once
#include<string>
#include<iostream>
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
	//Перегрузка вывода
	friend ostream& operator<<(std::ostream &os, const Book &c);
	//перегрузка сравнения
	friend bool operator==(Book first, Book second);
	//перегрузка !=
	friend bool operator !=(Book first, Book second);
};

