#include <iostream>
using namespace std;

int arr[21];				//
int cmp_count;				//
int mov_count;				//
int n;

void input() {
	while (true)
	{
		cout << "Masukan panjang Element Array: ";
		cin >> n;

		if (n <= 21)
			break;
		else
			cout << "\nMaksimum Panjang Array adalah 21" << endl;
	}

	cout << "\n===================" << endl;
	cout << "\nEnter Element Array" << endl;
	cout << "\n===================" << endl;

	for (int i = 0; i < n; i++)
	{
		cout << "<" << (i + 1) << ">";
		cin >> arr[i];
	}
}

void swap(int x, int y)
{
	int temp;

	temp = arr[j];
	arr[j] = arr[min_index];
	arr[min_index] = temp;
}

void S_sort(int low, int high)
{
	int pivot, i, j;
	if (low > high) //langkah algoritma no.1
		return;