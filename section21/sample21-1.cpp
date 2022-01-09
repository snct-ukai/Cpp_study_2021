#include <iostream>
#include <fstream>
using namespace std;

int main(int argc, char* argv[]){
    //コマンドライン引数を1つだけ取りたい場合
    if(argc != 2){//実行ファイル(./a.outや./a.exe)もコマンドライン引数として認識されるため
        cerr << "ファイルを1つ指定してください" << endl;//標準エラー出力
        return -1;//エラーなので-1で終了
    }
    //ここから下はargcが1(コマンドライン引数が1つのみ)であることが担保されている

    ifstream in(argv[1]);//コマンドライン引数で開くファイルを指定できる
    double sum = 0;

    //ファイルが適切に開けたかを評価
    if(in.fail()){
        cerr << "ファイルが開けませんでした" << endl;
        return -1;
    }

    while(!in.eof()){
        double d = 0;
        in >> d;
        sum += d;
    }

    cout << sum << endl;
}