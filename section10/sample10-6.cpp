#include <iostream>
using namespace std;

//swap関数の定義
//参照渡し
void swap(int& a, int& b){
    int tmp = a;
    a = b;
    b = tmp;
}

//ポインタ渡し
void swap(int* a, int* b){
    int tmp = *a;
    *a = *b;
    *b = tmp;
}

int main(){
    int x = 12345;
    int y = 54321;

    //参照渡し
    swap(x, y);
    cout << x << "\t" << y << endl;
    //出力結果：54321   12345

    //ポインタ渡し
    swap(&x, &y);
    cout << x << "\t" << y << endl;
    //出力結果：12345   54321
}