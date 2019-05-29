#include "pch.h"
#include "Book.h"


Book::Book()
{
	this->authorName = "No name";
	this->genre = "No genre";
	auto g = 1917;
	this->year.tm_year = g;
}

string Book::GetAuthorName()
{
	return this->authorName;
}

string Book::GetSurname()
{
	return this->surname;
}

string Book::GetNameBook()
{
	return this->nameBook;
}

tm Book::GetYear()
{
	return this->year;
}

string Book::GetGenr()
{
	return genre;
}

Book::Book(string authorName, string surname, string genre, tm year,string nameBook)
{

	this->authorName = authorName;
	this->genre = genre;
	this->surname = surname;
	this->year = year;
	this->nameBook = nameBook;
}

Book::Book(const Book & book)
{
	this->authorName = book.authorName;
	this->genre = book.genre;
	this->surname = book.surname;
	this->year = book.year;
	this->nameBook = book.nameBook;
}


Book::~Book()
{
}
