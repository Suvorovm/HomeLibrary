#pragma once
#include<vector>	
#include <string>
#include "Book.h"
using namespace std;
class Library
{
private:
	vector<Book> books;
public:
	
	Library();
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

