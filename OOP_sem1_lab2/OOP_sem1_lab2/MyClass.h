#pragma once
#include <iostream>
using namespace std;

class Chip
{
private: 
	string type_1;
	int capacity_1=0;
	string name_1;
	string date_1;

public:
	Chip()	
	{
		
	};
	
	//Chip(string type, int capacity, string name, string date);

	~Chip();

	void getInfo();
	
	void setType(string type);
	string getType();
	
	void setCapacity(int capacity);
	int getCapacity();

	void setName(string name);
	string getName();

	void setDate(string date);
	string getDate();
		
	friend void findCapacity(Chip** array, int amount);
};
