#include <iostream>
using namespace std;

class Point{
    double x, y, z;
    friend istream& operator>>(istream& s, Point& P);//右辺値を変更するのでconst参照しない
    friend ostream& operator<<(ostream& s, const Point& P);//右辺値を変更しないのでconst参照
};

//抽出演算子のオーバーライド
istream& operator>>(istream& s, Point& P){
    s >> P.x >> P.y >> P.z;
    return s;
}

//挿入演算子のオーバーライド
ostream& operator<<(ostream& s, const Point& P){
    s << P.x << " " << P.y << " " << P.z;
    return s;
}

int main(void){
    Point p;
    cout << "入力：";
    cin >> p;//演算子関数(抽出演算子)

    cout << "出力：" << p << endl;//演算子関数(挿入演算子)
}