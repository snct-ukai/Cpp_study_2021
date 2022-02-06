#include <iostream>
#include <sstream>
#include <string>
#include <fstream>
using namespace std;

class Pet{
private:
    int age;
    string name;
public:
    Pet() : age(0), name("undefined"){}
    friend istream& operator>>(istream& in, Pet& p);
    friend ostream& operator<<(ostream& o, const Pet& p);
};

istream& operator>>(istream& in, Pet& p){
    in >> p.age >> p.name;
}

ostream& operator<<(ostream& o, const Pet& p){
    o << p.age << "\t" << p.name;
}

int main(int argc, char* argv[]){
    if(argc != 2){
        cerr << "ファイルを１つ指定してください" << endl;
        return -1;
    }

    ifstream in(argv[1]);

    if(in.fail()){
        cerr << "ファイルの読み込みに失敗しました" << endl;
        return -1;
    }

    while(!in.eof()){
        string s;
        stringstream ss;

        getline(in, s);//一行取得

        ss << s;//stringstreamへ区切り文字が入った一行を挿入
        ss >> s;//streamの始めから区切り文字までをstringオブジェクトsへ抽出

        cout << s << ":";//標準出力へ出力

        ss >> s;//streamの始めから区切り文字までをstringオブジェクトsへ抽出

        cout << s << endl;//標準出力へ出力し改行
    }
}
