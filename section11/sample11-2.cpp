#include <iostream>
#include <string>
using namespace std;

class Pet{
protected:
    int age;
    string name;
public:
    //コンストラクタ
    Pet() : age(0), name("undefined"){}
    //コンストラクタのオーバーロード
    Pet(int num, string str) : age(num), name(str){}
    ~Pet(){}
};

class Dog : public Pet{
public:
    Dog(){}
    //継承元のコンストラクタを用いてメンバを初期化する方法
    Dog(int num, string str) : Pet(num, str){}
    int getAge(){
        return age;
    }
    string getName(){
        return  name;
    }
};

class Cat : public Pet{
public:
    Cat(){}
    Cat(int num, string str) : Pet(num, str){}
    int getAge(){
        return age;
    }
    string getName(){
        return  name;
    }
};

int main(){
    Dog dog(1, "hogehoge");
    cout << dog.getAge() << "\t" << dog.getName() << endl;

    Cat cat1;
    cout << cat1.getAge() << "\t" << cat1.getName() << endl;
    /*
    出力結果
    1   hogehoge
    0   undefined
    */
}