#include <iostream>
using namespace std;

//関数プロトタイプ宣言
int pow(int num, int n);

int main(){
    int num, a;
    cin >> num >> a;
    cout << pow(num, a) << endl;
}

//関数の中身を定義
int pow(int num, int n){
    int result = 1;
    for(int i = 1; i <= n; i++){
        result *= num;
    }
    return result;
}