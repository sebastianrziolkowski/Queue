#include "pch.h"
#include "Zadanie.h"
#include <iostream>
#include <string>

using namespace std;
Zadanie::Zadanie(int id, std::string taskName)
{
	this->id = id;
	this->taskName = taskName;
}


Zadanie::~Zadanie()
{
}

ostream & operator<<(ostream & out, const Zadanie z)
{
	out << "\t" << to_string(z.id) << "\t" << z.taskName << endl;
	return out;
}
