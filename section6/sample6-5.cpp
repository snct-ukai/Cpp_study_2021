#include <iostream>
using namespace std;

template <class T>
T pow(T num,int n){
    T result = 1;
    for(int i = 1; i <= n; i++){
        result *= num;//result = result * num;と同じ
    }
    return result;
}

int main(){
    cout << pow(2, 2) << endl;//Tがintに置き換えられたpow関数が実行
    cout << pow(2.0, 2) << endl;//Tがdoubleに置き換えられたpow関数が実行
}