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
	int sum = 0; //�������� ����� ���� ����� 0
	int index_min = 0; // ������ ������������ �������� ������� 
	int index_max = 0; // ������ ������������� �������� �������
	
#ifdef DEBUG
	cout << "������� ������ �� 5 ��������� \n";

	for (int i = 0; i < n; i++)
	{
		cout << "������� �������� �������: ";
		cin >> arr[i];  //���� �������� �������

		sum += arr[i];  //����� ��������� �������
	}cout << endl;
	int max_element = arr[0]; // ������������ �������� � �������
	int min_element = arr[0]; // ����������� �������� � �������
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
	cout << "����������� �������� �������: " << max_element << " ��� ������: " << index_max << endl;
	cout << "������������ �������� �������: " << min_element << " ��� ������: " << index_min << endl;
	cout << "����� ��������� �������: " << sum << endl;
	cout << "������� �������������� �������� �������: " << (double)sum / n << endl;


	for (int i = 0; i < n; i++) //������ ����� ��������
	{
		cout << arr[i] << ' ';
	}
	cout << "������ ����� ��������� �������: " << endl;

	for (int i = n - 1; i >= 0; i--)  //�������� ������� �������� ��� ������
	{
		cout << arr[i] << ' ';
	}
	cout << "�������� ����� ��������� �������: " << endl;
#endif // DEBUG



	const int size = 10;
	int brr[size]{ 1,2,3,4,5,6,7,8,9,10 };
	//int buffer; //��� ������ �������
	int step_of_shift = 0; //��� ������
	//cout << "�� ������� �������� �������� ������?" << endl; cin >> step_of_shift;
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