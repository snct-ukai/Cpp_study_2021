#include <iostream>
#include <string>
using namespace std;

class Car{
private:
    int num;
    string cat;
public:
    Car(){
        num = 10;
        cat = "hogehoge";
    }
    int getNum(){
        return num;
    }
    string getCat(){
        return cat;
    }
    ~Car(){}
};

int main(){
    Car* car;

    Car car1;

    car = &car1;

    car -> getNum();
    car -> getCat();
}