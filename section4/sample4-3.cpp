#include <iostream>
using namespace std;

int main(){
    int a;
    cin >> a;

    //三項演算子
    cout << (a != 0 ? "aは0以外の整数です" : "aは0です") << endl;

    //if文で書き直すと
    if(a != 0){
        cout << "aは0以外の整数です" << endl;
    }
    else{
        cout << "aは0です" << endl;
    }
}