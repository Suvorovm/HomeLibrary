#pragma once
#include<string>
using namespace std;
class Book
{
private:
	string authorName;//���� ����� 
	string surname;
	string genre;
	tm year;
public:
	//������� - ������������ ��������
	string GetAuthorName();
	string GetSurname();
	tm GetYear();
	string GetGenr();
	//����������� � �����������
	Book(string authorName, string shurName, string genre, tm year);
	//����������� �����������
	Book(const Book& book);
	//����������� ��� ����������
	Book();
	//����������
	~Book();
	
};

