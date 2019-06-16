
#include "Library.h"
#include "Book.h"
#include "stdlib.h"
#include<string>


template<typename T>
inline Library<T>::Library(T indeficator)
{
	this->indeficatorLibrary = indeficator;
}

template <typename T>
void Library<T>::DelleteByNameBook(string nameBook)
{
	if (books.capacity() == 0) throw runtime_error("Ther is no elemets");
	for (size_t i = 0; i < books.capacity(); i++)
	{
		if (books[i].GetNameBook() == nameBook) {
			books.erase(books.begin() + i);
		}
	}
}
template <typename T>
void Library<T>::AddBook(Book bk)
{
	books.push_back(bk);
}
template <typename T>
vector<Book> Library<T>::SortByAutherName()
{
	vector<Book> result(books);
	for (size_t i = 1; i < books.capacity(); i++)
	{
		
		for (size_t j = 1; j < books.capacity(); j++)
		{
			string str1 = result[j].GetAuthorName();
			string str2 = result[j - 1].GetAuthorName();
			
			if (str1.compare(str2)<0) {
				Book tmp = result[j - 1];
				books[j - 1] = result[j];
				books[j] = tmp;
			}
		}
	}
	return result;
}
template <typename T>
vector<Book> Library<T>::GetBooksByAuthName(string authorName)
{
	vector<Book> resultVector;
	for (size_t i = 0; i < books.capacity(); i++)
	{
		if (books[i].GetAuthorName() == authorName) {
			resultVector.push_back(books[i]);
		}
	}
	return books;
}
template <typename T>
vector<Book> Library<T>::GetBooksByYear(tm year)
{
	vector<Book> result;
	for (size_t i = 0; i < books.capacity(); i++)
	{
		if (books[i].GetYear().tm_year == year.tm_year)
			result.push_back(books[i]);
	}
	return result;
}
template <typename T>
vector<Book> Library<T>::GetBooksBySurname(string shurname)
{
	vector<Book> resultVector;
	for (size_t i = 0; i < books.capacity(); i++)
	{
		if (books[i].GetSurname() == shurname) {
			resultVector.push_back(books[i]);
		}
	}
	return books;
}
template <typename T>
Library<T>::Library(Book book)
{
	books.push_back(book);
}
template <typename T>
Library<T>::Library(Library<T> & libr)
{	
	for (size_t i = 0; i < libr.books.capacity(); i++)
	{
		Book bk(libr.books[i]);
		this->books.push_back(bk);
	}
}

template <typename T>
Library<T>::~Library()
{
}

template<typename T>
inline T Library<T>::GetindeficatorLibrary()
{
	return indeficatorLibrary;
}

template<typename T>
Library<T>::Library()
{
}

#include "pch.h"