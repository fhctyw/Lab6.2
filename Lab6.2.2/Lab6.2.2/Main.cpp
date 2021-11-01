// Main.cpp
// Лісничук Арсен
// Лабораторна робота № 6.2
// Опрацювання одновимірних масивів ітераційними та рекурсивними способами
// Варіант 36(Рекурсивний спосіб)
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

void ModifyArray(int arr[], const int size, int i, int m = numeric_limits<int>::min())
{
	if (i < size)
	{
		if (arr[i] % 2 != 0)
			m = max(arr[i], m);
		if (i == size - 1 && m != numeric_limits<int>::min())
			arr[i] = m;
		ModifyArray(arr, size, i + 1, m);
		return;
	}
}

int main()
{
	srand(time(0));
	const int n = 10;
	int a[n];

	InitArray(a, n, 0);
	PrintArray(a, n, 0);
	ModifyArray(a, n, 0);
	PrintArray(a, n, 0);

	return 0;
}