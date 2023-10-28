//В каждом из массивов найти наибольшее значение и вычесть его из всех элементов массива.
#include <iostream>
#include <windows.h>
using namespace std;

class Array
{
private:
	double* array;
	int amount_of_elements;

public:
	
	void get_amount_of_elements()
	{
		cin >> amount_of_elements;	
	};
	

	void createArray()
	{
		array = new double[amount_of_elements];
		cout << "Ввод массива: " << endl;
		for (int i = 0; i < amount_of_elements; i++)
		{
			cout << i + 1 << "-ый элемент: ";
			cin >> array[i];
		}
	};

	void outputArray()
	{
		for (int i = 0; i < amount_of_elements; i++)
			cout << *(array + i) << " ";

		cout << endl;
	};

	void taskArray()
	{
		cout << "Исходный массив: ";
		outputArray();
		double max = 0;
		for (int i = 0; i < amount_of_elements; i++)
			if (array[i] >= max)
				max = array[i];

		for (int i = 0; i < amount_of_elements; i++)
			array[i] -= max;

		cout << "Полученный массив: ";
		outputArray();
	};

	void result()
	{
		createArray();
		outputArray();
		taskArray();
		delete[] array;
	};
};


int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	Array a;
	Array b;

	cout << "Введите длину массива а: ";
	a.get_amount_of_elements();
	a.result();

	cout << endl;

	cout << "Введите длину массива b: ";
	b.get_amount_of_elements();
	b.createArray();
	b.taskArray();
	b.outputArray();

	return 0;
}
