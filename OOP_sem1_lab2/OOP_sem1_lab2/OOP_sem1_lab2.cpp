/*12.	Создать программу с классом Chip, порождающим объекты – данные о микросхемах памяти, хранящиеся на складе.Класс включает в себя следующие поля :
-тип(оперативная – RAM, постоянная – ROM);
-информационная ёмкость(бит);
-наименование;
-месяц / год даты производства;
и следующие функции - члены класса :
-конструктор по умолчанию;
-деструктор;
-метод инициализации текущего состояния объектов;
-функция - друг, выводящая список микросхем, указанной информационной ёмкости.*/


#include <iostream>
#include <windows.h>
#include "MyClass.h"
#include <conio.h>
using namespace std;

Chip** CreateObject(int amount)
{
    string type;
    int capacity;
    string name;
    string date;

    Chip** array = new Chip* [amount];
    for (int i = 0; i < amount; i++)
    {
        cout << "Введите тип микросхемы: ";
        cin >> type;
        cout << "Введите информационную ёмкость микросхемы: ";
        cin >> capacity;
        cout << "Введите название микросхемы: ";
        cin >> name;
        cout << "Введите дату производства: ";
        cin >> date;
        //array[i] = new Chip(type, capacity, name, date);
        array[i] = new Chip();
        array[i]->setType(type);
        array[i]->setCapacity(capacity);
        array[i]->setName(name);
        array[i]->setDate(date);
        cout << "=============================================================================" << endl;
    }
    return array;
}


//Chip::Chip(string type, int capacity, string name, string date)
//{
//    type_1 = type;
//    capacity_1 = capacity;
//    name_1 = name;
//    date_1 = date;
//}

Chip::~Chip()
{
    cout << "Объект " << name_1 << "был удален";
}

void findCapacity(Chip **array, int amount)
{
    int requiredCapacity;
    cout << "Введите нужную вам емкость: ";
    cin >> requiredCapacity;
    int correct=0;

    for (int i = 0; i < amount; i++)
        if (array[i]->capacity_1 == requiredCapacity)
        {
            array[i]->getInfo();
            cout << "==============================================================" << endl;
            correct++;
        }
    
    if (correct == 0)
        cout << "На складе нет нужной микросхемы" << endl;
}

void Chip::getInfo()
{
    cout << "Тип микросхемы: " << this->type_1 << endl;
    cout << "Информационная ёмкость микросхемы: " << this->capacity_1 << endl;
    cout << "Наименование микросхемы: " << this->name_1 << endl;
    cout << "Дата производства: " << this->date_1 << endl;
}

void Chip:: setType(string type)
{
    type_1 = type;
}
string Chip:: getType()
{
    cout << "Тип микросхемы: " << this->type_1 << endl;
    return this->type_1;
}

void Chip::setCapacity(int capacity)
{
    capacity_1 = capacity;
}
int Chip::getCapacity()
{
    cout << "Информационная ёмкость микросхемы: " << this->capacity_1 << endl;
    return this->capacity_1;
}

void Chip::setName(string name)
{
    name_1 = name;
}
string Chip::getName()
{
    cout << "Наименование микросхемы: " << this->name_1 << endl;
    return this->name_1;
}

void Chip::setDate(string date)
{
    date_1 = date;
}
string Chip::getDate()
{
    cout << "Дата производства: " << this->date_1 << endl;
    return this->date_1;
}



int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    int amount;
    cout << "Введите количество микросхем на складе: ";
    cin >> amount;
    Chip** array = CreateObject(amount);
    system("cls");
    
    bool menu = true;
    bool flag = false;
    char sw;
    while (menu == true)
    {
        cout << "1)Просмотр текущего состояния объектов" << endl;
        cout << "2)Создание объектов" << endl;
        cout << "3)Выполнение метода индивидуального задания" << endl;
        cout << "4)Выход" << endl;

        do
        {
            sw = _getch();
            switch (sw)
            {
                case '1':
                {
                    system("cls");
                    for (int i = 0; i < amount; i++)
                    {
                        array[i]->getInfo();
                        cout << "====================================================================" << endl;
                    }
                    
                    menu = true;
                    flag = true;
                    break;
                }
                
               
                case '2':
                {
                    system("cls");
                    int additionalObject;
                    cout << "Введите количество создаваемых объектов: ";
                    cin >> additionalObject;
                    Chip** additionalArray = CreateObject(additionalObject);
                    Chip** temporaryArray = new Chip * [amount];
                    for (int i = 0; i < amount; i++)
                        temporaryArray[i] = array[i];
                    
                    int newAmount = amount + additionalObject;
                    array = new Chip * [newAmount];

                    for (int i = 0; i < amount; i++)
                        array[i] = temporaryArray[i];

                    for (int i = amount; i<newAmount ; i++)
                        array[i] = additionalArray[i - amount];

                  
                    delete[] additionalArray;
                    delete[] temporaryArray;
                    amount = newAmount;
                    
                    menu = true;
                    flag = true;
                    break;
                }

                case '3':
                {
                    system("cls");
                    findCapacity(array,  amount);
                    menu = true;
                    flag = true;
                    break;
                }

                case '4':
                {
                    cout << "Выход." << endl;
                    menu = false;
                    flag = true;
                    break;
                }
            
                default:
                {
                    menu = true;
                    flag = false;
                    break;
                }

            }

        } while (flag==false);
    }


    delete[] array;
    return 0;
}