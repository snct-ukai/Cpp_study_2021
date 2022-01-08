#include<cstddef>

class Vector{
    private:
        double* vec;
        size_t _size;

    public:
        Vector(){
            vec = nullptr;//アドレスが無いことを明示的に指定
            _size = 0;
        }
        //コピーコンストラクタ(深いコピー)
        Vector(const Vector& Vec){
            _size = Vec._size;
            vec = new double[_size];
            for(size_t i = 0; i < _size; i++){vec[i] = Vec.vec[i];}
        }

        //引数ありのコンストラクタ
        Vector(size_t size){
            _size = size;
            vec = new double[_size];
        }
        size_t size(){return _size;}
        //配列参照演算子のオーバーライド
        double& operator[](size_t i){return vec[i];}

        //代入演算子のオーバーライド(深いコピー)
        Vector& operator=(const Vector& Vec){
            if(this != &Vec){
                delete[] vec;
                _size = Vec._size;
                vec = new double[_size];
                for(size_t i = 0; i < _size; i++){vec[i] = Vec.vec[i];}
            }
            return *this;
        }

        //デストラクタ
        ~Vector(){
            delete[] vec;//確保したメモリを解放
        }
};

int main(){
    Vector vec1(10);
    for(size_t i = 0; i < vec1.size(); i++){
        vec1[i] = i;
    }

    Vector vec2 = vec1;
    Vector vec3;
    vec3 = vec1;

    return 0;
}