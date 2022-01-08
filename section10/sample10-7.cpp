#include <iostream>
using namespace std;

int main(){
    //int型変数の動的確保
    int* a = new int;

    //配列の大きさ
    const size_t size = 8;
    //一般的な配列の宣言
    int sarray[size];

    //配列の動的確保
    int* darray = new int[size];

    for(size_t i = 0; i < size ; i++){
        cin >> darray[i];
        //動的確保した配列の各要素に標準入力から値を入れる
    }

    for(size_t i = 0; i < size; i++){
        cout << darray[i] << endl;
        //darrayの各要素を標準出力へ出力
    }

    //メモリの破棄
    //配列でないものの破棄
    delete a;

    //配列の破棄
    delete[] darray;

    /*
    構造体やクラス、列挙型でも同様のことができる
    */
}