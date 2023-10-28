#pragma once
#include <iostream>
#include "Product.h"
using namespace std;
 
class Order :public Product
{
private:
	string shopName;
	int dateOfOrder;
	int amountOfOrderedProduct;

	
public:
	
	Order(string shopName_, int dateOfOrder_, int amountOfOrderedProduct_)
	{
		shopName = shopName_;
		dateOfOrder = dateOfOrder_;
		amountOfOrderedProduct = amountOfOrderedProduct_;
	}


	void viewProduct();
	void getInfo();


	friend void task(Product** array, int shopName);
};

void Order::getInfo()
{
	cout << "�������� ��������: " << this-> shopName<< endl;
	cout << "���� ������: " << this->dateOfOrder << endl;
	cout << "������� ���������� ����������� ������: " << this->amountOfOrderedProduct << endl;
}

void Order::viewProduct()
{
	for (int i = 0; i < amountOfProductsForArray; i++)
		array[i]->getInfo();
}