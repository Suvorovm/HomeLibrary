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
	//�������� �� ������
	void DelleteByNameBook(string nameBook);
	void AddBook(Book bk);
	vector<Book> SortByAutherName();
	//���������� ������, �.� ����� ���� ��������� ������� � ����� ��������
	vector<Book> GetBooksByAuthName(string AuthorName);
	//������ ���� � ������ ���
	vector<Book> GetBooksByYear(tm year);
	//C����� ���� ������� ������ ������� = surname
	vector<Book> GetBooksBySurname(string shurname);
	//�����������
	Library(Book book);
	//����������� �����������
	Library(Library& libr);
	//����������
	~Library();
};
#include "Library.cpp"

