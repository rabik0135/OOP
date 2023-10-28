#include <iostream>
#include <windows.h>
#include <conio.h>
#include "Product.h"
#include"Order.h"
using namespace std;

//Product** createObjects(int amountOfProductsForArray)
//{
//	string name_;
//	string category_;
//	int amountOfProduct_;
//	int priceOfProduct_;
//	int date_;
//
//    string shopName_;
//    int dateOfOrder_;
//    int amountOfOrderedProduct_;
//
//	Product** array = new Product * [amountOfProductsForArray];
//   // Order** array2 = new Order * [amountOfProductsForArray];
//	for (int i = 0; i < amountOfProductsForArray; i++)
//	{
//		cout << "Введите наименование товара: ";
//		cin >> name_;
//		cout << "Введите категорию товара: ";
//		cin >> category_;
//		cout << "Введите количество данного товара: ";
//		cin >> amountOfProduct_;
//		cout << "Введите цену за еденицу данного товара: ";
//		cin >> priceOfProduct_;
//		cout << "Введите дату поступления товара на склад: ";
//		cin >> date_;
//        cout << "Введите название магазина-заказчика: ";
//        cin >> shopName_;
//        cout << "Введите дату заказа: ";
//        cin >> dateOfOrder_;
//        cout << "Введите количество заказанного товара: ";
//        cin >> amountOfOrderedProduct_;
//
//
//
//		array[i] = new Product(name_, category_, amountOfProduct_, priceOfProduct_, date_);
//       // array2[i] = new Order(shopName_, dateOfOrder_, amountOfOrderedProduct_);
//		cout << "==================================================================================================================================" << endl;
//	}
//    return array;
//}

void task(Product** array, int shopName) 
{
	
}


int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	
	int amountOfProductsForArray;

	cout << "Введите количество продуктов на складе: ";
	cin >> amountOfProductsForArray;
	
	Product().setProduct(amountOfProductsForArray);
	//Product** array = createObjects(amountOfProductsForArray);

	//
 //   system("cls");

 //   bool menu = true;
 //   bool flag = false;
 //   char sw;
 //   while (menu == true)
 //   {
 //       cout << "1)Просмотр текущего состояния объектов" << endl;
 //       cout << "2)Создание объектов" << endl;
 //       cout << "3)Выполнение метода индивидуального задания" << endl;
 //       cout << "4)Выход" << endl;

 //       do
 //       {
 //           sw = _getch();
 //           switch (sw)
 //           {
 //           case '1':
 //           {
 //               system("cls");
 //               for (int i = 0; i < amountOfProductsForArray; i++)
 //               {
 //                   array[i]->getInfo();
 //                   cout << endl;
 //                   cout << "====================================================================" << endl;
 //               }

 //               menu = true;
 //               flag = true;
 //               break;
 //           }


 //           case '2':
 //           {
 //               system("cls");
 //               int additionalObject;
 //               cout << "Введите количество создаваемых объектов: ";
 //               cin >> additionalObject;
 //               Product** additionalArray = createObjects(additionalObject);
 //               Product** temporaryArray = new Product * [amountOfProductsForArray];
 //               for (int i = 0; i < amountOfProductsForArray; i++)
 //                   temporaryArray[i] = array[i];

 //               int newAmount = amountOfProductsForArray + additionalObject;
 //               array = new Product * [newAmount];

 //               for (int i = 0; i < amountOfProductsForArray; i++)
 //                   array[i] = temporaryArray[i];

 //               for (int i = amountOfProductsForArray; i < newAmount; i++)
 //                   array[i] = additionalArray[i - amountOfProductsForArray];


 //               delete[] additionalArray;
 //               delete[] temporaryArray;
 //               amountOfProductsForArray = newAmount;

 //               menu = true;
 //               flag = true;
 //               break;
 //           }

 //           /*case '3':
 //           {
 //               system("cls");
 //               findCapacity(array, amount);
 //               menu = true;
 //               flag = true;
 //               break;
 //           }*/

 //           case '4':
 //           {
 //               cout << "Выход." << endl;
 //               menu = false;
 //               flag = true;
 //               break;
 //           }

 //           default:
 //           {
 //               menu = true;
 //               flag = false;
 //               break;
 //           }

 //           }

 //       } while (flag == false);
 //   }

 //   Product().array;
 //   
 //   delete[] array;
 //   return 0;
}

