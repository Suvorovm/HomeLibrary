#include "pch.h"
#include "Book.h"


Book::Book()
{
	this->authorName = "No name";
	this->genre = "No genre";
	auto g = 1917;
	this->year.tm_year = g;
}

string Book::deepCopyng(string source)
{
	return string(source);
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

	this->authorName = deepCopyng(authorName);
	this->genre = deepCopyng(genre);
	this->surname = deepCopyng( surname);
	this->year = year;
	this->nameBook = deepCopyng(nameBook);
}

Book::Book(const Book & book)
{
	this->authorName = deepCopyng( book.authorName);
	this->genre = deepCopyng(book.genre);
	this->surname = book.surname;
	this->year = book.year;
	this->nameBook = deepCopyng( book.nameBook);
}


Book::~Book()
{
}

ostream & operator<<(std::ostream & os, const Book & c)
{
	os << "Имя автора\t" << c.authorName << "Фамилия автора\t" << c.surname << "Год издания = \t" << c.year.tm_year << "Жанр =\t " << c.genre;
	return os;
}

bool operator==(Book first, Book second)
{
	return first.authorName == second.authorName&&first.genre == second.genre
		&& first.nameBook == second.nameBook && first.surname == second.surname&&first.year.tm_year == second.year.tm_year;
}

bool operator!=(Book first, Book second)
{
	return !(first == second);
}
