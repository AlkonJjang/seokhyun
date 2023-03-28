#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main() {
    long long num;
    cin >> num;
    if (num < 10) {
        if (num % 2 == 0) {
            printf("%lld", num / 2);
        }
        else {
            printf("%d", 0);
        }
        return 0;
    }
    int size = floor(log10(num) + 1);
    int min = (size - 1) * 9 + num / pow(10, size - 1) - 1;

    for (long long i = num - (min); i < num; i++) {
        long long sum = 0;
        long long cur = i;
        while (cur > 0) {
            sum += cur % 10;
            cur = cur / 10;
        }
        if (sum + i == num) {
            printf("%lld", i);
            return 0;
        }
    }
    printf("%d", 0);
    return 0;
}
