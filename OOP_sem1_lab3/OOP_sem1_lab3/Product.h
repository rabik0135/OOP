#pragma once
#include <iostream>
using namespace std;

class Product
{
private:
	string name;
	string category;
	int amountOfProduct;
	int priceOfProduct;
	int date;
	
public:
	int amountOfProductsForArray;
	Product() {};
	Product** array;
	Product(string name_, string category_, int amountOfProduct_, int priceOfProduct_, int date_);

	~Product() {};

	static Product** setProduct(int amountOfProductsForArray);
	virtual void getInfo();
	virtual void viewProduct();
	void costOfProduct();
	void setAmountOfProductsForArray(int amountOfPFA);

};
Product::Product(string name_, string category_, int amountOfProduct_, int priceOfProduct_, int date_)
{
	name = name_;
	category = category_;
	amountOfProduct = amountOfProduct_;
	priceOfProduct = priceOfProduct_;
	date = date_;
}
Product** Product::setProduct(int amountOfProductsForArray)
{
	string name_;
	string category_;
	int amountOfProduct_;
	int priceOfProduct_;
	int date_;

	Product** array = new Product * [amountOfProductsForArray];
	for (int i = 0; i < amountOfProductsForArray; i++)
	{
		cout << "¬ведите наименование товара: ";
		cin >> name_;
		cout << "¬ведите категорию товара: ";
		cin >> category_;
		cout << "¬ведите количество данного товара: ";
		cin >> amountOfProduct_;
		cout << "¬ведите цену за еденицу данного товара: ";
		cin >> priceOfProduct_;
		cout << "¬ведите дату поступлени€ товара на склад: ";
		cin >> date_;

		array[i] = new Product(name_, category_, amountOfProduct_, priceOfProduct_, date_);
		cout << "==================================================================================================================================" << endl;
	}
	return array;
}

void Product::getInfo()
{
	cout << "Ќаименование товара: " << this->name << endl;
	cout << "¬ведите категорию товара: " << this->category << endl;
	cout << "¬ведите количество данного товара: " << this->amountOfProduct << endl;
	cout << "¬ведите цену за еденицу данного товара: " << this->priceOfProduct;
	cout << "¬ведите дату поступлени€ товара на склад: " << this->date;

}
void Product::setAmountOfProductsForArray(int amoiuntOfPFA)
{
	cin >> amountOfProductsForArray;
}
void Product::viewProduct()
{
	for (int i = 0; i < amountOfProductsForArray; i++)
		array[i]->getInfo();
}
void Product::costOfProduct()
{
	string productName;
	cout << "¬ведите название товара, стоимость которого хотите посчитать: ";
	cin >> productName;
	int cost = 0;
	for (int i = 0; i < amountOfProductsForArray; i++)
		if (name == productName)
			cost += array[i]->priceOfProduct;
}
