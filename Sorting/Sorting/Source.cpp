#include<stdio.h>
#include<iostream>
#include<time.h>
#include<math.h>
#include<iomanip>

using namespace std;

void main()
{
	setlocale(LC_ALL, "Rus");
	srand(time(NULL));
	system("color 1A");


	int i, j, n;

	do
	{
		cout << "\nМетоды сортировки." << endl;
		cout << "\nДля выхода наберите 0." << endl;
		cout << "\n№1. Сортировка двумерного массива." << endl;
		cout << endl;
		cin >> n;

		switch (n)
		{

		case 1:
		{
			cout << "\n№1. Сортировка двумерного массива." << endl;

			const int n = 5, m = 5; // Размерность массива
			const int w = 4;		// Ширина вывода

			int ar[n][m];

			//Заполнение и вывод массива

			cout << "Исходный массив: " << endl;

			for (int i = 0; i < n; ++i)
			{
				for (int j = 0; j < m; ++j)
				{
					ar[i][j] = -10 + rand() % 100;
					cout << setw(w) << ar[i][j];
				}
				cout << endl;
			}

			//Сортировка

			for (int k = 0; k < n; ++k)
			{
				for (int l = 0; l < m; ++l)
				{
					for (i = 0; i < n; ++i)
					{
						for (j = 0; j < m; ++j)
						{
							if ((i + 1 == n) && (j + 1 == m)) //условие проверки выхода цикла за границы массива
							{
								continue; //ничего не делаем и начигаем цикл заново
							}
							else //иначе сортируем
							{
								if ((j + 1 == m) && (ar[i][j] > ar[i + 1][0])) // если текущий элемент является последним в строке и больше элемента следующей строки, 
								{
									int t = ar[i][j];						//то меняем их местами
									ar[i][j] = ar[i + 1][0];
									ar[i + 1][0] = t;
								}
								else
								{
									if (ar[i][j] > ar[i][j + 1]) //если текущий элемент в строке болше следующего 
									{
										int t = ar[i][j];					//то меняем их местами
										ar[i][j] = ar[i][j + 1];
										ar[i][j + 1] = t;
									}
								}
							}
						}
					}
				}
			}
			cout << "Отсортированный массив: \n" << endl;

			for (int i = 0; i < n; ++i)
			{
				for (int j = 0; j < m; ++j)
				{
					cout << setw(w) << ar[i][j];
				}
				cout << endl;
			}


			system("pause");
			system("cls");

		}
		break;
		}
	} while (n != 0);

		cout << endl;
		cout << "Спасибо!" << endl;
		cout << endl;

		system("pause");
	
}