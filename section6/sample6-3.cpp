#include <iostream>
using namespace std;

//デフォルト引数あり
int pow(int num, int n = 2){
    int result = 1;
    for(int i = 1; i <= n; i++){
        result *= num;
    }
    return result;
}

int main(){
    int a, b;
    cin >> a >> b;
    cout << pow(a, b) << endl;//a^b
    cout << pow(a) << endl;//a^2
}