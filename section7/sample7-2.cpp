#include <iostream>
#include <string>
using namespace std;

//構造体を定義
struct Car{
    int num;//メンバを定義
    string cat;
};

int main(){
    Car car = {10, "hogehoge"};//宣言と同時に初期化
    cout << car.num << "\t" << car.cat << endl;//ドット演算子でメンバにアクセス
}