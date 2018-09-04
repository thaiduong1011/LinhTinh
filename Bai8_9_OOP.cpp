#include <iostream>
using namespace std;

class Array{
private:
    float *v;
    int n;

public:
    Array(int N, float a = 0 ){
        n = N;

        v = new float[n];
        for(int i = 0; i < n; i++){
            v[i] = a;
        }
    }

    Array(const Array &Arr){
        n = Arr.n;

        v = new float[n];
        for(int i = 0; i < n; i++){
            v[i] = Arr.v[i];
        }
    }

    int Get(float *&V){
        V = v;
        return n;
    }

    void Out(){
        int count = 0;
        cout<<"\n";
        for(int i = 0; i < n; i++){
            cout << v[i] <<"\t";
            count++;
            if (count == 10){
                cout<<"\n";
                count = 0;
            }
        }
    }


};

int main(){
    Array arr(16, 12);
    Array arrClone(arr);

    arr.Out();
    arrClone.Out();

    /*float *V;
    int n;
    n = arr.Get(V);
    for(int i = 0; i < n; i++){
        cout << V[i] << "\t";
    }*/

    return 0;
}
