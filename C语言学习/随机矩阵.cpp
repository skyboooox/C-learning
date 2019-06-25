//生成一个3×2整数随机矩阵，将其转置后输出。
#include <iostream>
#include "stdlib.h"
#include "time.h"
#include "iomanip"
using namespace std;

void convert() {
	int x[3][2], y[2][3];

	srand((unsigned)time(NULL));

	for (int i = 0; i < 3; i++)
		for (int j = 0; j < 2; j++)
			x[i][j] = rand();

	for (int i = 0; i < 2; i++)
		for (int j = 0; j < 3; j++)
			y[i][j] = x[j][i];

	cout << "x矩阵为:" << endl;
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 2; j++)
			cout << setw(10) << x[i][j] << " ";
		cout << endl;
	}
	cout << "y矩阵为:" << endl;
	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 3; j++)
			cout << setw(10) << y[i][j] << " ";
		cout << endl;
	}
}
	int main(int argc, char const* argv[]) {
		convert();
			return 0;
	}
