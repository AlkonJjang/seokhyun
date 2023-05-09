#include <iostream>
#include <algorithm>

using namespace std;

int BinarySearch(int arr[], int i, int size) {

    int first = i + 1;
    int last = size - 1;
    int mid;
    int r = i;

    while (first <= last) {
        mid = (first + last) / 2;
        if (arr[i] * 10 >= arr[mid] * 9) {
            r = mid;
            first = mid + 1;
        }
        else last = mid - 1;
    }
    return r;
}

int main() {
   
    int num;
    int arr[100000] = { 0 };
    long long result = 0;
    cin >> num;
    for (int i = 0; i < num; i++) {
        cin >> arr[i];
    }
    sort(arr, arr + num);

    for (int i = 0; i < num; i++) {
        result += BinarySearch(arr, i, num) - i;
    }
    cout << result;
    return 0;
}
