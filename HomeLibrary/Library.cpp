#include "pch.h"
#include "Library.h"


Library::Library()
{
	Book firstBook;
	books.push_back(firstBook);
}

vector<Book> Library::GetBooksByAuthName(string authorName)
{
	vector<Book> resultVector;
	for (size_t i = 0; i < books.capacity; i++)
	{
		if (books[i].GetAuthorName() == authorName) {
			resultVector.push_back(books[i]);
		}
	}
	return books;
}

vector<Book> Library::GetBooksByYear(tm year)
{
	return vector<Book>();
}

Library::Library(Book book)
{
	books.push_back(book);
}

Library::Library(Library & libr)
{
	
	for (size_t i = 0; i < libr.books.capacity; i++)
	{
		Book bk(libr.books[i]);
		this->books.push_back(bk);
	}
}


Library::~Library()
{
}
