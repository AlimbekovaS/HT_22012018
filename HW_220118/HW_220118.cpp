#include <stdio.h>
#include <iostream>
#include <locale.h>
#include <time.h>
#include <iomanip>
#include<stdlib.h>
using namespace std;
short int nz;
void rand(int *mas);
#define size 10
void main()
{
	srand(time(NULL));
	setlocale(LC_ALL, ".1251");
	while (true)
	{
		cout << "\nВведите номер задания ";
		cin >> nz;
		if (nz == 0)
		{
			break;
		}
		if (nz == 1)
		{
			//9.*Написать программу, выполняющую сортировку одномерного массива целых чисел методом пузырька.
			
			int mas[size];
			rand(mas);
			for (int i = 0;i < size;i++)
			{
				int f = 0;
				for (int j = size-1;j > i;j--)
				{
					if (mas[j] < mas[j - 1])
					{
						int tmp = mas[j];
						mas[j] = mas[j - 1];
						mas[j - 1] = tmp;
						f = 1;
					}
				}
				if (f = 0)
				{
					break;
				}
			}
			cout << endl;
			for (int i = 0;i < size;i++)
			{
				cout << mas[i] << " ";
			}
		}
		if (nz == 2)
		{
			//21.**Напишите программу, которая суммирует элементы массива из 10 элементов по следующему принципу: первый суммирует с последним; второй – с предпоследним и т.д. И заносит сумму в массив из 5 элементов.
			int mas[size], mas1[5];
			rand(mas);
			int left = 0;
			int right = size-1;
			for (int i = 0;i < size;i++)
			{
				mas1[i] = mas[left] + mas[right];
				left++;
				right--;
				if (left == right)
				{
					break;
				}
			}
			cout << endl;
			for (int i = 0;i < size/2;i++)
			{
				cout << mas1[i] << " ";
			}
		}
		if (nz == 3)
		{
			//22.	*Написать программу, которая спрашивает у пользователя 10 оценок по 5 - бальной системе и определяет количество 2 - ек, 3 - ек, 4 - ок и 5 - ок.
			//	а)** Оценки вводятся по 12 - бальной системе.Двойкой считается оценка ниже 4, тройкой – от 4 до 6 и т.д.
			int mas[size],count2=0, count3=0, count4=0, count5=0;
			int system;
			cout << "Выберите систему оценивания 5 - 5 бальная система, 12 - 12 бальная система ";
			cin >> system;
			switch (system)
			{
			case 5:
			{
				for (int i = 0;i < size;i++)
				{
					cout << "Введите оценку по 5 - бальной системе" << i + 1 << " = ";
					cin >> mas[i];
				}
				for (int i = 0;i < size;i++)
				{
					if (mas[i] == 2)
						count2 += 1;
					if (mas[i] == 3)
						count3 += 1;
					if (mas[i] == 4)
						count4 += 1;
					if (mas[i] == 5)
						count5 += 1;
				}
				cout << "\nколичество 2 - ек =" << count2 << "\n3 - ек = " << count3 << "\n4 - ок = " << count4 << "\n5 - ок = " << count5;
			}
			break;
			case 12:
			{
				for (int i = 0;i < size;i++)
				{
					cout << "Введите оценку по 12 - бальной системе" << i + 1 << " = ";
					cin >> mas[i];
				}
				for (int i = 0;i < size;i++)
				{
					if (mas[i] < 4)
						count2 += 1;
					if (mas[i] >= 4 && mas[i]<6)
						count3 += 1;
					if (mas[i] >=6 &&mas[i]<=8)
						count4 += 1;
					if (mas[i] > 8 && mas[i]<=12)
						count5 += 1;
				}
				cout << "\nколичество 2 - ек =" << count2 << "\n3 - ек = " << count3 << "\n4 - ок = " << count4 << "\n5 - ок = " << count5;
			}
			break;
			}
		}
		if (nz == 4)
		{
			cout << "23.	**Написать программу, которая переворачивает массив (первый элемент становиться последним, второй предпоследним и т.д.)";
			int mas[size];
			rand(mas);
			int left = 0;
			int right = size-1;
			for (int i = 0;i < size/2;i++) 
			{
				int tmp = mas[right];
				mas[right] = mas[left];
				mas[left] = tmp;
				left++;
				right--;
				if (left == right)
				{
					break;
				}
			}
			cout << endl;
			for (int i = 0;i < size;i++)
			{
				cout << mas[i] << " ";
			}
		}
		if (nz == 5)
		{
			//25.	***Создайте одномерный массив. Заполните его случайными числами и покажите на экран. Пользователь выбирает количество сдвигов и положение (влево, вправо). Выполнить сдвиг массива и показать на экран полученный результат. Сдвиг циклический. 
			/*Например, если мы имеем следующий массив
				1 2 0 4 6 7 9
				и пользователь выбрал сдвиг на 2 разряда влево, то мы получим
				9 1 2 0 4 6 7 */
			int mas[size], mas1[size];
			rand(mas);
			cout << endl;
			int c = mas[0];
			int tmp = mas[size-1];
			for (int i = 0;i < size-1;i++)
			{
				mas[i] = mas[i+1];
				mas[size-1] = c;
				mas[size - 2] = tmp;
			}
			for (int i = 0;i < size;i++)
			{
				cout << mas[i] << " ";
			}

		}
		if (nz == 6)
		{
			//32.*Напишите программу, в которой объявляется три массива одинакового размера. Первые два массива заполняются случайными числами в диапазоне от -35 до 55, третий массив заполняется как поэлементное произведение элементов первых двух массивов. Содержимое всех трех массивов выводиться на консоль.
			int mas1[size], mas2[size], mas3[size];
			for (int i = 0;i < size;i++)
			{
				mas1[i] = -35 + rand() % 91;
				cout << setw(6) << mas1[i];
			}
			cout << endl;
			for (int i = 0;i < size;i++)
			{
				mas2[i] = -35 + rand() % 91;
				cout <<setw(6)<< mas2[i];
			}
			cout << endl;
			for (int i = 0;i < size;i++)
			{
				mas3[i] = mas1[i] * mas2[i];
				cout << setw(6) << mas3[i];
			}
		}
		if (nz == 7)
		{
			//33.**Напишите программу, в которой объявляется массив размером 5х10 и массив размером 5х5. Первый массив заполняется случайными числами, в диапазоне от 0 до 50. Второй массив заполняется по следующему принципу: первый элемент второго массива равен сумме первого и второго элемента первого массива, второй элемент второго массива равен сумму третьего и четвертого элемента первого массива.
			int mas[5][10], mas1[5][5];
			for (int i = 0;i < 5;i++)
			{
				for (int j = 0;j < 10;j++)
				{
					mas[i][j] = rand() % 51;
					cout << setw(4) << mas[i][j];
				}
				cout << endl;
			}
			cout << endl;
			for (int i = 0;i < 5;i++)
			{
				for (int j = 0;j < 10;j+=2)
				{
					mas1[i][j] = mas[i][j]+ mas[i][j + 1];
					cout << setw(4) << mas1[i][j];
				}
				cout << endl;
			}
		}
	}
}
void rand(int *mas)
{
	for (int i = 0;i < size;i++)
	{
		mas[i] = rand() % 50;
		cout << mas[i] << " ";
	}
}