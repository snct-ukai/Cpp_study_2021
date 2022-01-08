#include <iostream>
#include <string>
using namespace std;

class Pet{
private:
    int age;
    string name;
public:
    //コンストラクタ
    Pet() : age(0), name("undefined"){}
    //コンストラクタのオーバーロード
    Pet(int num, string str) : age(num), name(str){}
    int getAge(){
        return age;
    }
    string getName(){
        return  name;
    }
    ~Pet(){}
};

int main(){
    Pet pet1;//引数なしのコンストラクタ
    Pet pet2(3, "hogehoge");//引数ありのコンスとラクタ

    cout << pet1.getAge() << "\t" << pet1.getName() << endl;
    cout << pet2.getAge() << "\t" << pet2.getName() << endl;
    /*
    出力結果
    0   undefined
    3   hogehoge
    */
}