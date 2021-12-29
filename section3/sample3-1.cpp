#include <iostream>
using namespace std;

int main(){
    //変数の宣言

    //int(整数)
    int i;

    //float(単精度浮動小数点数)
    float f;

    //double(倍精度浮動小数点数)
    double d;

    //char(文字)
    char c;

    //bool(論理型(true or false))
    bool b;

    //変数に値を代入
    i = 10;
    f = 2.1;
    d = 5.3;
    c = 'a';
    b = false;

    //各種演算
    //加算
    i = i + 20;
    f = f + 3.2;
    d = d + 1.2;

    //減算
    i = i - 15;
    f = f - 2.3;
    d = d - 2.5;

    //乗算
    i = i * 2;
    f = f * 3;
    d = d * 2.5;

    //除算
    i = i / 30;
    f = f / 3;
    d = d / 10;

    //インクリメント
    i++;
    ++i;

    //デクリメント
    i--;
    --i;

    //配列
    int array[10];

    //1番目の要素
    array[0];

    //配列の大きさを取得
    sizeof(array);
}