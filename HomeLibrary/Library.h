#pragma once
#include<vector>	
#include <string>
#include "Book.h"
#include "stdlib.h"
using namespace std;
template <typename T>
class Library
{
private:

	T indeficatorLibrary;
	vector<Book> books;
public:
	//return the indeficator 
	
	T GetindeficatorLibrary();
	Library();
	Library(T indeficator);
	//удаление из класса
	void DelleteByNameBook(string nameBook);
	void AddBook(Book bk);
	vector<Book> SortByAutherName();
	//возвращаем список, т.к может быть несколько авторов с одной фамилией
	vector<Book> GetBooksByAuthName(string AuthorName);
	//Список книг в данный год
	vector<Book> GetBooksByYear(tm year);
	//Cписок книг фамилия автора которых = surname
	vector<Book> GetBooksBySurname(string shurname);
	//конструктор
	Library(Book book);
	//конструктор копирования
	Library(Library& libr);
	//деструктор
	~Library();
};
#include "Library.cpp"

