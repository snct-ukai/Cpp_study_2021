1. 次のメンバを持つPetクラスを作成せよ

    ```cpp
    private:
    int age;
    string name;
    public:
    Pet();
    friend istream& operator>>(istream& in, Pet& p);
    friend ostream& operator<<(ostream& o, const Pet& p);
    ```

    コンストラクタでは`age=0` `name="undefined"`で初期化
    operator>>()ではistreamからage, nameの順に入力
    opetator<<()ではostreamへage, nameの順に出力(区切り文字は`\t`)

2. 1で作成したPetクラスを用いて次の処理を実装せよ
   1. Petの数を標準入力から指定
   2. Petの数だけオブジェクトを作成(配列)
   3. 各オブジェクトに標準入力から`age` と `name`を指定
   4. ファイル`data.txt`を作成しリストを作成する、ただしオブジェクトを１つ出力するごとに改行すること

3. コマンドライン引数で2で出力したファイルを指定し、それをopenして以下に示す条件を満たした１行ごとに出力する処理を実装せよ
   - 出力は`age:name` のようにする
   - １つ出力したら改行すること
    hint:
    - stringオブジェクトとgetline関数を用いることで一行取得ができる
    - stringstreamを使うことで区切り文字で文字列を分割することが出来る