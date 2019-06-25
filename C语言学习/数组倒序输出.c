int a[10] = { -2,45,2,78,9,3,2,7,3.9 };
	int n = 10, i, j, t;
	for (size_t i = 0; i < 10; i++) {
		printf("%d\t", a[i]);
	}
	printf("\n");
		for (i = 0, j = n - 1; i <= j; i++, j--) {
			t = a[i];
			a[i] = a[j];
			a[j] = t;
		}
	for (size_t i = 0; i < 10; i++) {
		printf("%d\t", a[i]);
		/* code */
	}
	printf("\n");
