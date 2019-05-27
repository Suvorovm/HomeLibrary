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

tm Book::GetYear()
{
	return this->year;
}

string Book::GetGenr()
{
	return genre;
}

Book::Book(string authorName, string surname, string genre, tm year)
{

	this->authorName = authorName;
	this->genre = surname;
	this->surname = surname;
	this->year = year;
}

Book::Book(Book & book)
{
	this->authorName = book.authorName;
	this->genre = book.genre;
	this->surname = book.surname;
	this->year = book.year;
}


Book::~Book()
{
}
