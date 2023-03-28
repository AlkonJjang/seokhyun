#include <iostream>
using namespace std;

int main(){
    int num, time;
    int result = 0;
    cin >> num >> time;
    int arr1[num];
    int arr2[time] = {0};
    for (int i = 0; i<num; i++){
        cin >> arr1[i];
    }
    for (int i =0;i<num;i++){
        int n = arr1[i];
        while (n<=time){
            arr2[n-1] = 1;
            n += arr1[i];
        }
    }
    for (int i=0;i<time;i++){
        if(arr2[i]==1){
            result += 1;
        }
    }
    cout << result;
    return 0;
}  
