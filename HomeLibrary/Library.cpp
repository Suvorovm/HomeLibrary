#include "pch.h"
#include "Library.h"
#include "Book.h"

Library::Library()
{
	Book firstBook;
	books.push_back(firstBook);
}

void Library::DelleteByNameBook(string nameBook)
{
	if (books.capacity() == 0) throw runtime_error("Ther is no elemets");
	for (size_t i = 0; i < books.capacity(); i++)
	{
		if (books[i].GetNameBook() == nameBook) {
			books.erase(books.begin() + i);
		}
	}
}

void Library::AddBook(Book bk)
{
	books.push_back(bk);
}

vector<Book> Library::GetBooksByAuthName(string authorName)
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

vector<Book> Library::GetBooksByYear(tm year)
{
	vector<Book> result;
	for (size_t i = 0; i < books.capacity(); i++)
	{
		if (books[i].GetYear().tm_year == year.tm_year)
			result.push_back(books[i]);
	}
	return result;
}

vector<Book> Library::GetBooksBySurname(string shurname)
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

Library::Library(Book book)
{
	books.push_back(book);
}

Library::Library(Library & libr)
{	
	for (size_t i = 0; i < libr.books.capacity(); i++)
	{
		Book bk(libr.books[i]);
		this->books.push_back(bk);
	}
}


Library::~Library()
{
}
