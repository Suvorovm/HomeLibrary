#pragma once
#include<vector>	
#include <string>
#include "Book.h"
#include "stdlib.h"
using namespace std;
class Library
{
private:
	vector<Book> books;
public:
	
	Library();
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

