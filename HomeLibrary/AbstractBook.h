#pragma once
#include<iostream>
#include<string>
using namespace std;
class AbstractBook
{
protected://чтобы наслдовалось
	tm year;
	string authorName;
public:
	virtual string GetAuthorName()=0;
	virtual tm GetYear() = 0;
};

