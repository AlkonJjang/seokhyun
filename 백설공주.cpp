#include <iostream>
using namespace std;
int main(){
    int arr[9];
    int sum = 0;
    for (int i=0;i<9;i++){
        cin >> arr[i];
        sum += arr[i];
    }
    int find = 0;
    for(int i=0; i<8; i++){
        for(int j = i+1; j<9; j++){
            if(sum-arr[i]-arr[j]==100){
                arr[i] = 0;
                arr[j] = 0;
                find = 1;
                break;
            }  
        }
        if (find == 1){
            break;
        }
    }
    for (int i = 0; i<9;i++){
        if (arr[i]!=0){
            cout << arr[i] << "\n";
        }
    }
    
}
