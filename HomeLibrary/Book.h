#pragma once
#include<string>
#include<iostream>
#include "AbstractBook.h"
using namespace std;
class Book:public AbstractBook
{
private:
	//string authorName;//���� ����� 
	string surname;
	string genre;
	string nameBook;
	//tm year;
	//����������� �����
	string deepCopyng(string source);
	
public:
	//������� - ������������ ��������
	string  GetAuthorName() override;
	string GetSurname();
	string GetNameBook();
	tm GetYear() override;
	string GetGenr();

	//����������� � �����������
	Book(string authorName, string shurName, string genre, tm year,string nameBook);
	//����������� �����������
	Book(const Book& book);
	//����������� ��� ����������
	Book();
	//����������
	~Book();
	//���������� ������
	friend ostream& operator<<(std::ostream &os, const Book &c);
	//���������� ���������
	friend bool operator==(Book first, Book second);
	//���������� !=
	friend bool operator !=(Book first, Book second);
};

