#include <iostream>
#include <algorithm>
#include <stdio.h>

using namespace std;

int binsearch(int arr[], int n, int size) {
	int start = 0;
	int end = size - 1;
	while (start <= end) {
		int mid = (start + end) / 2;
		if (arr[mid] == n) {
			return 1;
		}
		else if (n < arr[mid]) {
			end = mid - 1;
		}
		else {
			start = mid + 1;
		}
	}
	return 0;
}

int main() {
	int num1;
	int arr[100000];
	scanf("%d", &num1);
	for (int i = 0; i < num1; i++) {
		scanf("%d", &arr[i]);
	}
	sort(arr, arr + num1);
	int num2;
	scanf("%d", &num2);
	int n;
	for (int i = 0; i < num2; i++) {
		scanf("%d", &n);
		printf("%d\n", binsearch(arr,n,num1));
	}
    
}
