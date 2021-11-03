// Main.cpp
// Лісничук Арсен
// Лабораторна робота № 6.2
// Опрацювання одновимірних масивів ітераційними та рекурсивними способами
// Варіант 36(Рекурсивний спосіб)
#define NOMINMAX
#include <Windows.h>
#include <iostream>
using namespace std;

void InitArray(int arr[], const int size, int i)
{
	if (i < size)
	{
		arr[i] = -10 + rand() % 21;
		InitArray(arr, size, i + 1);
		return;
	}
}

void PrintArray(const int* const arr, const int size, int i)
{
	if (i < size)
	{
		if (i == 0)
			cout << "{";
		cout << arr[i];
		if (i != size - 1)
			cout << ", ";
		else cout << "}" << endl;
		PrintArray(arr, size, i + 1);
		return;
	}
}

int IndexMax(const int* arr, int size, int max, int index, int i)
{
	if (arr[i] > max && arr[i] % 2 != 0) {
		index = i;
		max = arr[i];
	}
	if (i < size)
		return IndexMax(arr, size, max, index, i + 1);
	else
		return index;
}

bool ModifyArray(int arr[], const int size)
{
	int index = IndexMax(arr, size, -11, -1, 0); // -11 = Low - 1
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
	int *a = new int[n];

	InitArray(a, n, 0);
	PrintArray(a, n, 0);
	if (!ModifyArray(a, n))
		cout << "Немає жодного елемента, який підходить по умовам" << endl;
	PrintArray(a, n, 0);

	delete[] a;
	a = nullptr;

	return 0;
}