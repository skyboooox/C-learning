#include <iostream>
void print(int a);
int main() {
	int a = 456721364;
	print(a);
	system("pause");
	return 0;
}

void print(int num) {
	static const char Bit[15][4] = { "","ʮ","��","ǧ","��","ʮ","��","ǧ","��","ʮ","��","ǧ","��","ʮ","��" };
	static const char Num[10][4] = { "��","һ","��","��","��","��","��","��","��","��" };
	int numarr[15] = { 0 };
	int* parr = numarr;
	for (int quotient = num, remainder = 0; quotient > 0; ) {
		remainder = quotient % 10;
		*parr++ = remainder;
		quotient /= 10;
	};
	for (int i = parr - numarr - 1; i >= 0; i--)
		std::cout << Num[numarr[i]] << Bit[i];

};