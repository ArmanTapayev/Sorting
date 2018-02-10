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
												ar[i][j] = ar[i][j+1];
												ar[i][j+1] = t;
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

		case 2:
		{
			/*2. Дан целочисленный квадратный массив 4×4.
			Найти строку с наименьшей суммой элементов*/

			int A[4][14], sum[4] = { 0 };
			const int w = 4;

			cout << "\nИсходный массив:\n" << endl;

			for (i = 0; i < 4; i++)
			{
				for (j = 0; j < 4; j++)
				{
					A[i][j] = 1 + rand() % 10;
					cout << setw(w) << A[i][j] << "  ";
					sum[i] += A[i][j];
				}

				cout << endl;

			}

			cout << endl;

			cout << "Сумма элементов каждой строки: " << endl;

			int min = 10000000;
			int mini;

			for (i = 0; i < 4; i++)
			{
				cout << "sum[" << i << "]=" << sum[i] << "  ";

				if (sum[i] < min)
				{
					min = sum[i];
					mini = i;
				}

			}

			cout << endl;
			cout << endl;
			cout << "Строка с наименьшей суммой элементов: " << mini + 1 << " - sum[" << mini << "]=" << min << endl;

			cout << endl;
			cout << endl;

			system("pause");
			system("cls");
		}
		break;

		case 3:
		{
			/*3. Дана целочисленная матрица 6×8.
			Найти произведение положительных элементов первого столбца.*/

			int A[6][8], milt = 1;
			const int w = 4;

			cout << "\nИсходный массив:\n" << endl;

			for (i = 0; i < 6; i++)
			{
				for (j = 0; j < 8; j++)
				{
					A[i][j] = 3 - rand() % 6;
					cout << setw(w) << A[i][j] << "  ";

				}
				if (A[i][0]>0)   milt *= A[i][0];

				cout << endl;

			}

			cout << endl;
			cout << "Произведение положительных элементов первого столбца: " << milt << endl;

			cout << endl;
			cout << endl;

			system("pause");
			system("cls");

		}
		break;

		case 4:
		{
			/*4. Составить программу, которая заполняет квадратную матрицу
			порядка n натуральными числами 1, 2, 3, .. ., n2,
			записывая их в нее "по спирали" по часовой стрелке.*/

			int A[5][5] = { 0 }, n = 5, i = 0, j = 0, c = 0, k = 1;
			const int w = 3;

			do
			{
				while ((k <= 25) && (j < 5 - c)) //вправо
				{
					A[i][j] = k;
					j++;
					k++;
				}

				i++;  j--;

				while ((k <= 25) && (i < 5 - c)) // вниз
				{
					A[i][j] = k;
					i++;
					k++;
				}

				j--;  i--;

				while ((k <= 25) && (j >= 0 + c)) //влево
				{
					A[i][j] = k;
					j--;
					k++;
				}

				c++;  j++;  i--;

				while ((k <= 25) && (i >= 0 + c)) //вверх
				{
					A[i][j] = k;
					i--;
					k++;
				}

				j++;  i++;

			} while (k <= 25);

			cout << "\nЗаполненный массив:\n" << endl;

			for (i = 0; i < 5; i++)
			{
				for (j = 0; j < 5; j++)
				{
					cout << setw(w) << A[i][j] << "  ";
				}

				cout << endl;

			}

			cout << endl;

			system("pause");
			system("cls");

		}
		break;

		case 5:
		{
			/*5. Дан двухмерный целочисленный массив A(M,N).
			Составить  одномерный массив B из номеров строк этого массива*/

			int A[6][8], B[6] = { 0 };
			const int w = 4;

			cout << "\nИсходный массив:\n" << endl;

			for (i = 0; i < 6; i++)
			{
				for (j = 0; j < 8; j++)
				{
					A[i][j] = 3 - rand() % 6;
					cout << setw(w) << A[i][j] << "  ";
				}

				B[i] = i + 1;
				cout << endl;

			}

			cout << endl;

			for (i = 0; i < 6; i++)
			{
				cout << "B[" << i << "]=" << B[i] << "  ";
			}

			cout << endl;
			cout << endl;

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