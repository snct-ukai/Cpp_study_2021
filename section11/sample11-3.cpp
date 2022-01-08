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
    int getAge(){
        return age;
    }
    string getName(){
        return  name;
    }
    //純粋仮想関数
    virtual void play() = 0;
    virtual void bark() = 0;
};

class Dog : public Pet{
public:
    Dog(){}
    Dog(int num, string str) : Pet(num, str){}

    //純粋仮想関数をオーバーライド
    void play(){
        cout << "in dog run" << endl;
    }
    void bark(){
        cout << "wan" << endl;
    }
};

class Cat : public Pet{
public:
    Cat(){}
    Cat(int num, string str) : Pet(num, str){}
    void play(){
        cout << "with cat tower" << endl;
    }
    void bark(){
        cout << "nya~" << endl;
    }
};

int main(){
    //Petクラス
    Pet* pets[4];
    //Petクラスのポインタ変数にDogまたはCatオブジェクトを生成
    pets[0] = new Dog(4, "dog1");
    pets[1] = new Cat(1, "cat1");
    pets[2] = new Dog(6, "dog2");
    pets[3] = new Cat(0, "cat2");

    for(size_t i = 0; i < 4; i++){
        cout << pets[i] -> getAge() << "\t" << pets[i] -> getName() << endl;
        //DogまたはCatクラスでオーバーライドした関数が実行される
        pets[i] -> play();
        pets[i] -> bark();
        cout << endl;
    }
    /*
    出力結果
    4       dog1
    in dog run
    wan
    
    1       cat1
    with cat tower
    nya~
    
    6       dog2
    in dog run
    wan
    
    0       cat2
    with cat tower
    nya~

    */
}