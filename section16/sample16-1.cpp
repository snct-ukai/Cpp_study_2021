#include<iostream>
#include <fstream>
using namespace std;

int main(void){
    ifstream in("data.txt");//入力元ファイル
    double sum = 0;
    while(!in.eof()){//istreamが終端でない場合に繰り返し実行
        double d = 0;
        in >> d;//double型変数にファイルからの値を代入
        sum += d;
    }
    cout << sum << endl;
}