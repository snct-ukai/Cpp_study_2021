#include <iostream>
#include <string>
using namespace std;

class Pet{
    static unsigned int num;//静的メンバ変数
    string name;
    public:
    Pet(const string& n){
        num++;
        name = n;
    }
    void Name(){
        cout << name << endl;
    }
    static unsigned int pet_num(){//静的メンバ関数
        return num;
    }
    ~Pet(){
        num--;
    }
};