#include <iostream>
using namespace std;

int main(){
    int array[20];

    int* parray;

    //ポインタ変数に配列の先頭ポインタを格納
    parray = array;

    //parrayには配列の先頭アドレスが格納されている->間接参照演算子を用いると配列の一番目(0番目)の要素が参照される
    *parray;

    //ポインタ演算
    parray++;//次の要素
    parray--;//前の要素

    int* parray2 = parray + 3;
    parray2 - parray;//演算結果：3
}