#include <iostream>
#include <algorithm>
#include <stdio.h>

using namespace std;

int binsearch(int arr[], int size, int left, int right, int n) {
	long long start = left;
	long long end = right;
    int r = 0;
	while (start <= end) {
		long long mid = (start + end) / 2;
		int sum = 0;
		for (int t = 0; t < size; t++) {
			sum += arr[t] / mid;
		}
		if (sum >= n) {
            start = mid + 1;
            r = mid;
		}
		else {
			end = mid - 1;
		}
	}
    return r;
}

int main() {
	int k;
	int arr[10000];
	int n;
	int max = -1;
	scanf("%d %d", &k, &n);
	for (int i = 0; i < k; i++) {
		scanf("%d", &arr[i]);
		if (arr[i] > max) {
			max = arr[i];
		}
	}
	printf("%d", binsearch(arr, k, 1, max, n));
	
    
}
