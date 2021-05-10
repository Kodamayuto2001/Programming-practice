#include<stdio.h>

void min(int a, int b) {
	if (a < b) {
		printf("%d\n", a);
	}
	else {
		printf("%d\n", b);
	}
}

void max(int a, int b) {
	if (a > b) {
		printf("%d\n", a);
	}
	else {
		printf("%d\n", b);
	}
}

void swap(int arr[], int a, int b, int arr_len) {
	int tmp = arr[a];
	arr[a] = arr[b];
	arr[b] = tmp;
}

int linear_search(int arr[], int n,int arr_len) {
	for (int i = 0; i < arr_len; i++)
	{
		if (arr[i] == n) {
			return i;
		}
	}
	return -1;
}

int binary_search(int arr[], int target,int arr_len) {
	int left = 0;
	int right = arr_len-1;
	int pivot = 0;
	
	while ((right - left) != -1)
	{
		pivot = (int)((left + right) / 2);
		if (target == arr[pivot]) { return pivot; }
		if (target < arr[pivot]) { right = pivot-1; }
		if (target > arr[pivot]) { left = pivot+1; }
	}
	return -1;
}

void bubble_sort(int arr[],int arr_len) {
	for (int i = 0; i < arr_len; i++)
	{
		for (int j = i+1; j < arr_len; j++)
		{
			if (arr[j] < arr[i]) {
				int min = arr[j];
				arr[j] = arr[i];
				arr[i] = min;
			}
		}
	}
}

void quick_sort(int arr[], int arr_len) {
	int pivot = (int)(arr_len / 2);
	int left = 0;
	int right = arr_len - 1;
	int lr_flag = 0;
	while (1)
	{
		if (lr_flag == 0) {
			//	左　基準以下の値なら
			if (arr[left] <= arr[pivot]) {
				//	入れ替える
				arr[right] = arr[left];
				//	左フラグを右フラグに
				lr_flag = 1;
			}
			else { left++; }
		}
		else {
			//	右　基準より上の値なら
			if (arr[right] > arr[pivot]) {
				//	入れ替える
				arr[left] = arr[right];
				//	右フラグを左フラグに
				lr_flag = 0;
			}
			else { right--; }
		}
		//	大きいグループと小さいグループの境界線
		if ((right - left) == 1) {
			//	大きいグループ
			//  小さいグループ
		}
	}
}

int main(void) {
	// min(3, 5);
	// max(3, 5);
	//int arr[10] = { 0,5,10,15,20,25,30,35,40,45 };
	//swap(arr, 1, 9, 10);
	//for (int i = 0; i < 10; i++)
	//{
	//	printf("arr[%d] = %d\n", i, arr[i]);
	//}
	//int x = linear_search(arr, 5, 10);
	//printf("%d\n", x);
	//int x = binary_search(arr, 1, 10);
	//printf("%d\n", x);
	int a[10] = { 51,23,75,40,34,79,79,82,31,0 };
	//bubble_sort(a, 10);
	//for (int i = 0; i < 10; i++)
	//{
	//	printf("%d\n", a[i]);
	//}

	return 0;
}