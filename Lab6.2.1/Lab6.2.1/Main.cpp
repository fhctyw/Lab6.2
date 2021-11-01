// Main.cpp
// Лісничук Арсен
// Лабораторна робота № 6.2
// Опрацювання одновимірних масивів ітераційними та рекурсивними способами
// Варіант 36(Ітераційний спосіб)
#include <iostream>
using namespace std;

void InitArray(int arr[], const int size)
{
	for (size_t i = 0; i < size; i++)
	{
		arr[i] = -10 + rand() % 21;
	}
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

void ModifyArray(int arr[], const int size)
{
	int m = numeric_limits<int>::min();
	for (size_t i = 0; i < size; i++)
	{
		if (arr[i] % 2 != 0)
			m = max(arr[i], m);
	}
	if (m != numeric_limits<int>::min())
		arr[size-1] = m;
}

int main()
{
	srand(time(0));
	const int n = 10;
	int a[n];

	InitArray(a, n);
	PrintArray(a, n);
	ModifyArray(a, n);
	PrintArray(a, n);

	return 0;
}