#include <iostream>
#pragma once
using namespace std;
class Zadanie
{
	int id;
	std::string taskName;

public:
	friend ostream&operator<<(ostream &out, const Zadanie z);
	Zadanie(int, std::string);
	~Zadanie();
};

