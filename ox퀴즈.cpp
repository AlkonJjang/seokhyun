#include <iostream>
#include <string>
using namespace std;

int main(){
    int num;
    cin >> num;
    for (int i = 0; i<num; i++){
        string str;
        cin >> str;
        int sum = 0;
        int count  = 0;
        int cur = 0;
        for (int j = 0; j<(int)str.length(); j++){
            if (str[j] == 'O'){
                count++;
                cur += count;
            }
            else{
                sum += cur;
                count = 0;
                cur = 0;
            }
        }
        sum += cur;
        cout << sum << "\n";
    }
    
}
