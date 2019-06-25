#include <iostream>
using namespace std;
void InsertSort(int* pData, int Count) {
	int iTemp;
	int iPos;
	for (int i = 0; i < Count - 1; i++) {
		iTemp = pData[i];
		iPos = i;
		for (int j = i + 1; j < Count; j++) {
			if (pData[j] < iTemp) {
				iTemp = pData[j];
				iPos = j;
			}
		}
		pData[iPos] = pData[i];
		pData[i] = iTemp;
	}
}

int main(int argc, char const* argv[]) {
	int data[] = { 10,2,8,1,6,5,1 };
	InsertSort(data, 7);
	for (int i = 0; i < 7; i++) {
		cout << data[i] << " ";
	}
	cout << "\n";

	return 0;
}
