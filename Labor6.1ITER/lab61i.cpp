// < Оленюк Олександр >
// Лабораторна робота 6.1
// ітераційний спосіб
// Варіант 8

using namespace std;
#include <iostream>
#include <iomanip>

#include <cmath>
#include <math.h>
void CreateArray(int* b, const int size, const int low, const int high) {
	for (int i = 0; i < size; i++) {
		b[i] = low + rand() % (high - low + 1);
	}
}
void PrintArray(int* b, const int size) {
	cout << " b[" << size << "] = " << "{";
	for (int i = 0; i < size; i++) {
		cout << setw(4) << b[i];
	}
	cout << " }" << endl;
}
int Count(int* b, const int size) {
	int coun = 0;
	for (int i = 0; i < size; i++) {
		if (b[i] % 2 == 0 && b[i] < 0) {
			coun++;
		}
	}
	return coun;
}
int Sum(int* b, const int size) {
	int s = 0;
	for (int i = 0; i < size; i++) {
		if (b[i] % 2 == 0 && b[i] < 0) {
			s += b[i];
		}
	}
	return s;
}

void Replace(int* b, const int size) {

	for (int i = 0; i < size; i++) {
		if (b[i] % 2 == 0 && b[i] < 0) {
			b[i] = 0;

		}
	}
}
int main()
{
	srand((unsigned)time(NULL));
	const int  a = 24;
	int b[a];
	int low = -15;
	int high = 75;

	cout << "Array: ";
	CreateArray(b, a, low, high);
	PrintArray(b, a);

	cout << "Numerosity " << Count(b, a) << endl;
	cout << "Sum " << Sum(b, a) << endl;

	Replace(b, a);
	PrintArray(b, a);
	return 0;
}