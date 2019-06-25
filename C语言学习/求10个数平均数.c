int a[10];
	int i;
	float ave = 0;

	for (size_t i = 0; i < 10; i++) {
		scanf_s("%d\n", &a[i]);
	}for (size_t i = 0; i < 10; i++) {
		printf("%d\t", a[i]);
		ave = ave + a[i];
	}
	printf("\n");
	ave = ave / 10;
	printf("%f\n", ave);
