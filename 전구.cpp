#include <iostream>
#include <string>
using namespace std;

int main() {
    int num;
    cin >> num;
    int result = 0;
    int o_o = 0;
    int z_z = 0;
    int z_o = 0;
    int o_z = 0;

    for (int i = 0; i < num; i++) {
        string str;
        cin >> str;
        for (int j = 0; j < (int)str.length() - 1; j++) {
            if (str[j] != str[j + 1]){
                result++;
            }
        }
        if (str[0] == '0' && str[(int)str.length() - 1] == '0' && z_z == 0) {
            z_z++;
        }
        else if (str[0] == '0' && str[(int)str.length() - 1] == '1') {
            z_o++;
        }
        else if (str[0] == '1' && str[(int)str.length() - 1] == '0') {
            o_z++;
        }
        else if (str[0] == '1' && str[(int)str.length() - 1] == '1' && o_o==0) {
            o_o++;
        }
    }
    if(z_o>0||o_z>0){
        o_o = 0;
        z_z = 0;
    }
  
    int add = o_o + abs(z_o - o_z) + z_z;
    if (add > 1) {
        result += add - 1;
    }
    
    cout << result << "\n";
    return 0;
}
