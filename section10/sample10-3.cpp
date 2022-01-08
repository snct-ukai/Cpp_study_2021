#include <iostream>
#include <string>
using namespace std;

struct Car{
    int num;
    string cat;
};

int main(){
    //構造体Carのポインタ変数
    Car* car;

    Car car1 = {10, "hogehoge"};

    //ポインタ変数carにCarオブジェクトcar1のポインタを格納
    car = &car1;

    //ポインタ変数carからメンバにアクセス(アロー演算子)
    car -> num;
    car -> cat;
}