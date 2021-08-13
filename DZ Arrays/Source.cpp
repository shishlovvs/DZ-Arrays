#include<iostream>
using namespace std;
using std::cout;
using std::cin;
using std::endl;
#define tab '\t';
//#define DEBUG
//#define FIRST_TYPE


void main()
{
	setlocale(LC_ALL, "ru");

#ifdef DEBUG
	const int n = 5;
	int arr[n];
	int sum = 0; //Значение суммы пока равно 0
	int index_min = 0; // индекс минимального значения массива 
	int index_max = 0; // индекс максимального значения массива


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



#ifdef FIRST_TYPE	
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
#endif // FIRST_TYPE

	const int size = 10;
	int arr[size];
	int buffer;
	int step_of_shift;
	cout << "Введите количество шагов: " << endl; cin >> step_of_shift;
	cout << endl;

	//инициализация по индексам
	for (int i = 0; i < size; i++)
	{
		arr[i] = i;
	}

	//вывод на экран
	cout << "Обычный массив: ";
	for (int i = 0; i < size; i++)
	{
		cout << arr[i] << tab;
	}
	cout << endl << endl;

	//сдвиг массива влево
	for (int i = 0; i < step_of_shift; i++)
	{
		int buffer = arr[0];
		for (int i = 0; i < size; i++)
		{
			arr[i] = arr[i + 1];
		}
		arr[size - 1] = buffer;
	}

	//вывод обновленного массива
	cout << "Массив, сдвинутый влево: ";
	for (int i = 0; i < size; i++)
	{
		cout << arr[i] << tab;
	}cout << endl << endl;

	for (int i = 0; i < size; i++)
	{
		arr[i] = i;
	}

	//сдвиг массива вправо
	for (int i = 0; i < step_of_shift; i++)
	{
		int buffer = arr[size - 1];
		for (int i = size - 1; i >= 0; i--)
		{
			arr[i] = arr[i - 1];
		}
		arr[0] = buffer;
	}

	//вывод массива
	cout << "Массив, сдвинутый вправо: ";
	for (int i = 0; i < size; i++)
	{
		cout << arr[i] << tab;
	}cout << endl << endl;




	//bin - Двоичная система счисления
	//dec - Десятичная система счисления

	int dec; //число, которое пользователь будет вводить
	cout << "Введите десятичное число: "; cin >> dec;
	const int n = 32; //максимальная разрядность двоичного числа
	int bin[n] = {}; //массив будет хранить разряды двочиных чисел
	cout << "Двоичное число будет занимать: " << sizeof(bin) << " байт памяти" << endl;

	int i = 0; //элемент массива
	while (dec > 0)
	{
		bin[i] = dec % 2;
		dec /= 2;
		i++; //переходим на следующий элемент массива
	}

	//выводим остатки от деления в обратном порядке
	for (i--; i >= 0; i--) //в счетчике стоит i--для того, чтоб убрать нули, которые будут вылезать при выводе
	{
		cout << bin[i];
		if (i % 8 == 0)cout << "  ";
		if (i % 4 == 0)cout << " ";
	}
	cout << endl;



	int decimal;
	const int b = 8; //максимальная разрядность шестнадцатеричного числа
	int hex[b] = {};
	cout << "Введите число: "; cin >> decimal;
	int j = 0;
	for (; decimal;)
	{
		hex[j] = decimal % 16;
		decimal /= 16;
		j++;
	}cout << endl;

	//выводим в обратном порядке
	for (j--; j >= 0; j--)
	{
		switch (hex[j])
		{
		case 10: cout << "A"; break;
		case 11: cout << "B"; break;
		case 12: cout << "C"; break;
		case 13: cout << "D"; break;
		case 14: cout << "E"; break;
		case 15: cout << "F"; break;
		default: cout << hex[j];
		}
	}
}
	