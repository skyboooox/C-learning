#include "祖传头文件.h"

int isprime(int x){
	int r = 1;
	if (x == 1 || x != 2 && x % 2 == 0) {
		r = 0;
	}
	for (int j = 3; j < sqrt(x); j += 2) {
		if (x % j == 0){
			r = 0;
			break;
		}
	}
	return r;
}
int main(int argc, char const* argv[]){
	const int maxNum = 10;
	int isPrime[maxNum];
	int x, i;
	for (int i = 0; i < maxNum; ++i){
		isPrime[i] = 1;
	}
	for (x = 2; x < maxNum; ++x){
		if (isPrime[x]){
			for (i = 2; i * x < maxNum; ++i)
			{
				isPrime[i * x] = 0;
			}
		}
	}
	for (i = 2; i < maxNum; ++i){
		if (isPrime[i]) {
			printf("%d\n", i);
		}
	}
	return 0;
}
