#include <iostream>
#include <string>
using namespace std;

class Car{
private://アクセス指定子
    int num;
    string cat;
    
public://アクセス指定子
    //コンストラクタ
    Car(){
        num = 1;
        cat = "hogehoge";
    }

    int getnum(){
        return num;
    }

    string getcat(){
        return cat;
    }

    //デストラクタ
    ~Car(){

    }
};

int main(){
    Car car;
    cout << car.getnum() << endl;
    cout << car.getcat() << endl;
}