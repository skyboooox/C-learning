int n, i, j, x, a[100];
	printf("输入待排序的元素个数：");
	scanf_s("%d", &n);
	printf("输入%d个带排序的元素：", n);
	for (i = 0; i < n; i++)
		scanf_s(" %d", &a[i]);
	for (i = 1; i < n; i++) {
		x = a[i];
		j = i - 1;
		while ((a[i] < a[j]) && (x < a[j])) {
			a[j + 1] = a[j];
			j--;
		}
		a[j + 1] = x;
	}
	for (i = 0; i < n; i++)
		printf("%d\t", a[i]);
	printf("\n");
