#include <iostream>
using namespace std;

int main(){
    //ポインタ変数(int)
    int* pa;

    //int型変数
    int a = 0;

    //aのアドレスをポインタ変数pzに代入
    pa = &a;//&:ポインタ演算子

    //下の２つはどちらも同じアドレスが出力される
    cout << pa << endl;
    cout << &a << endl;

    *pa = 10;//a=10;と同じ(aのアドレスに格納される値を10に変更)

    cout << *pa << endl << a << endl;//どちらも10が出力
}