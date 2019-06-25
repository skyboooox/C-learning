int a[10] = { -1,9,8,7,6,8,1,0,27,2 };
int i, max, position = 0;
max = a[0];
	for (i = 1; i < 10; i++) {
		if (a[i] > max) {
			max = a[i];
			position = i;
		}
	}
	printf("max=%d position=%d\n", max, position + 1);
