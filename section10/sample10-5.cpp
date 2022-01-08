#include <iostream>
using namespace std;

int main(){
    int num = 20;

    //参照型変数の宣言
    int& rNum = num;

    rNum = 100;
    cout << rNum << "\t" << num << endl;
    //出力結果：100 100

    num = 0;
    cout << rNum << "\t" << num << endl;
    //出力結果：0   0
}