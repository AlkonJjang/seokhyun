#include <iostream>
#include <string>
using namespace std;

int main() {
    int w, l;
    cin >> w >> l;
    if (w == 1 || l == 1) {
        cout << 1;
        return 0;
    }
    else {
        int result = 1;
        int arr[50][50] = { 0 };
        for (int i = 0; i < w; i++) {
            string str;
            cin >> str;
            for (int j = 0; j < l; j++) {
                arr[i][j] = str[j] - '0';
            }
        }

        for (int i = 0; i < w; i++) {
            for (int j = 0; j < l; j++) {
                int cw = i + 1;
                int cl = j + 1;
                int last = -1;
                while (cw < w && cl < l) {
                    if (arr[cw][cl] == arr[i][j] && arr[cw][j] == arr[i][j] && arr[i][cl] == arr[i][j]) {
                        last = cw;
                    }
                    cw++;
                    cl++;
                }
                if (last != -1 && result < (last - i + 1) * (last - i + 1)) {
                    result = (last - i + 1) * (last - i + 1);
                }

            }
        }
        cout << result;
    }
    return 0;
}
