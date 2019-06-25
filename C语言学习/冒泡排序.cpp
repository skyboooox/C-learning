#include <iostream>
using namespace std;

void  BubbleSort(int a[], int n) {
	int i, j, t, noswap;
	for (i = 0; i < n - 1; i++) {
		noswap = 1;
		for (j = 0; j < n-i ; j++) {
			if (a[j] < a[j - 1]) {
				t = a[j];
				a[j] = a[j-1];
					a[j -1] = t;
				noswap = 0;
			}
		}
		if (noswap == 1)break;
	}
}
int main(int argc, char const* argv[]) {
	int data[] = { 10,2,8,1,6,5,1 };
	BubbleSort(data, 7);
	for (int i = 0; i < 7; i++) {
		cout << data[i] << " ";
	}
	cout << "\n";


	return 0;
}
