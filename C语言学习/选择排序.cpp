#include <iostream>
using namespace std;

void SelectScort(int* pData, int count) {
	int itemp, ipods;
	for (int i = 0; i < count - 1; ++i) {
		ipods = i;
		for (int j = i + 1; j < count; ++j) {
			if (pData[j] < pData[ipods]) {
				ipods = j;
			}
		}
		if (ipods != i) {
			itemp = pData[i];
			pData[i] = pData[ipods];
			pData[ipods] = itemp;
		}
	}
}
int main(int argc, char const* argv[]) {
	int data[] = { 10,2,8,1,6,5,1 };
	SelectScort(data, 7);
	for (int i = 0; i < 7; i++) {
		cout << data[i] << " ";
	}
	cout << "\n";

	return 0;
}
