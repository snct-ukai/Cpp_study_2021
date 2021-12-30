#include <iostream>
using namespace std;

//関数定義(第一引数(num)の第2引数(n)乗を求める関数、0乗は1)
int pow(int num, int n){
    int result = 1;
    for(int i = 1; i <= n; i++){
        result *= num;//result = result * num;と同じ
    }
    return result;
}

int main(){
    int num, a;
    //標準入力からn上させたい数と何乗するかを指定
    cin >> num >> a;
    //結果を標準出力に出力
    cout << pow(num, a) << endl;
}