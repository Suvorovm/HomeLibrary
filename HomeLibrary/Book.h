#pragma once
#include<string>
using namespace std;
class Book
{
private:
	string authorName;//���� ����� 
	string surname;
	string genre;
	string nameBook;
	tm year;
	//����������� �����
	string deepCopyng(string source);
public:
	//������� - ������������ ��������
	string GetAuthorName();
	string GetSurname();
	string GetNameBook();
	tm GetYear();
	string GetGenr();

	//����������� � �����������
	Book(string authorName, string shurName, string genre, tm year,string nameBook);
	//����������� �����������
	Book(const Book& book);
	//����������� ��� ����������
	Book();
	//����������
	~Book();
	
};

