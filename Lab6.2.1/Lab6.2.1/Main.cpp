// Main.cpp
// Лісничук Арсен
// Лабораторна робота № 6.2
// Опрацювання одновимірних масивів ітераційними та рекурсивними способами
// Варіант 36(Ітераційний спосіб)
#define NOMINMAX
#include <iostream>
#include <Windows.h>
using namespace std;

void InitArray(int *arr, const int size)
{
	for (size_t i = 0; i < size; i++)
		arr[i] = -10 + rand() % 21;
}

void PrintArray(const int* const arr, const int size)
{
	cout << "{";
	for (size_t i = 0; i < size; i++)
	{
		cout << arr[i];
		if (i != size - 1)
			cout << ", ";
	}
	cout << "}" << endl;
}

int IndexMax(int arr[], const int size)
{
	int max = arr[0] % 2 != 0 ? arr[0] : -11;	// -11 = Low - 1, щоб умова в 34 рядку спрацювала коректно навіть, 
	int index = -1;								// якщо число парне
	for (int i = 1; i < size; i++)
		if (arr[i] > max && arr[i] % 2 != 0)
		{
			index = i;
			max = arr[i];
		}
	return index;
}

bool ModifyArray(int arr[], const int size)
{
	int index = IndexMax(arr, size);
	if (index != -1) {
		arr[size - 1] = arr[index];
		return true;
	}
	else return false;
}

int main()
{
	SetConsoleOutputCP(1251);

	srand(time(0));
	int n;
	cout << "n = "; cin >> n;
	
	int* a = new int[n];

	InitArray(a, n);
	PrintArray(a, n);
	if (!ModifyArray(a, n))
		cout << "Немає жодного елемента, який підходить по умовам" << endl;
	PrintArray(a, n);

	delete[] a;
	a = nullptr;
	
	return 0;
}