#include<iostream>
using namespace std;
using std::cout;
using std::cin;
using std::endl;
#define tab '\t';
//#define DEBUG


void main()
{
	setlocale(LC_ALL, "ru");

	const int n = 5;
	int arr[n];
	int sum = 0; //Значение суммы пока равно 0
	int index_min = 0; // индекс минимального значения массива 
	int index_max = 0; // индекс максимального значения массива
	
#ifdef DEBUG
	cout << "Введитн массив из 5 элементов \n";

	for (int i = 0; i < n; i++)
	{
		cout << "Введите значение массива: ";
		cin >> arr[i];  //ввод значений массива

		sum += arr[i];  //Сумма элементов массива
	}cout << endl;
	int max_element = arr[0]; // максимальное значение в массиве
	int min_element = arr[0]; // минимальное значение в массиве
	for (int i = 0; i < n; i++)
	{
		if (max_element > arr[i])
		{
			max_element = arr[i];
			index_max = i;
		}
		if (min_element < arr[i])
		{
			min_element = arr[i];
			index_min = i;
		}
	}cout << endl;
	cout << "Минимальное значение массива: " << max_element << " Его индекс: " << index_max << endl;
	cout << "Максимальное значение массива: " << min_element << " Его индекс: " << index_min << endl;
	cout << "Сумма элементов массива: " << sum << endl;
	cout << "Среднее арифметическое значений массива: " << (double)sum / n << endl;


	for (int i = 0; i < n; i++) //Прямой вывод значений
	{
		cout << arr[i] << ' ';
	}
	cout << "Прямой вывод элементов массива: " << endl;

	for (int i = n - 1; i >= 0; i--)  //обратный порядок значений при выводе
	{
		cout << arr[i] << ' ';
	}
	cout << "Обратный вывод элементов массива: " << endl;
#endif // DEBUG



	const int size = 10;
	int brr[size]{ 1,2,3,4,5,6,7,8,9,10 };
	//int buffer; //Для сдвига массива
	int step_of_shift = 0; //Шаг сдвига
	//cout << "На сколько значений сдвинуть массив?" << endl; cin >> step_of_shift;
	cout << endl;

	for (int i = 0; i < size; i++)
	{
		cout << brr[i] << tab;
	}cout << endl;
	
	int buffer = brr[0];
	for (int i = 0; i < size; i++)
	{
		brr[i] = brr[i + 1];
	}brr[size - 1] = buffer;

	for (int i = 0; i < size; i++)
	{
		cout << brr[i] << tab;
	}
		/*buffer = brr[0];
		for (int j = 0; j < n - 1; j++)
		{
			brr[j] = brr[j + 1];
			brr[j] = buffer;
		}brr[size - 1] = buffer;*/
	
	
}