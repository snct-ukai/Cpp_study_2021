#include <iostream>
using namespace std;

int pow(int num, int n){
    int result = 1;
    for(int i = 1; i <= n; i++){
        result *= num;
    }
    return result;
}

double pow(double num, int n){
    double result = 1;
    for(int i = 1; i <= n; i++){
        result *= num;
    }
    return result;
}

int main(){
    cout << pow(2, 2) << endl;//第一引数がintのpow関数が実行
    cout << pow(2.0, 2) << endl;//第一引数がdoubleのpow関数が実行
}