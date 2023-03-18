#include <iostream>

using namespace std;

void swap(int* p1, int* p2) {
	int temp = *p2;
	*p2 = *p1;
	*p1 = temp;
}

void bubbeSort(int* arr, int len) {
	for (int i = 0; i < len - 1; i++) {
		for (int j = 0; j < len - 1 - i; j++) {
			if (arr[j] > arr[j + 1]) {
				swap(arr[j], arr[j + 1]);
			}
		}
	}
}

void print_array(int arr[], int len) {
	for (int i = 0; i < len; i++) {
		cout << arr[i] << endl;
	}
}


int main() {
	int array[10] = { 7, 8, 2, 9, 10, 6, 4, 5, 1 ,3 };

	int len = sizeof(array) / sizeof(array[0]);

	bubbeSort(array, len);

	print_array(array, len);

	system("pause");

	return 0;
}