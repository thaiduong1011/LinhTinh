#include <iostream>
#include <stdio.h>
using namespace std;

class Array{
private:
    float *v;
    int length;
    int n;

public:
    Array(int N){
    	length = 0;
        n = N;
        v = new float[n];
    }

    Array(const Array &Arr){
        n = Arr.n;

        v = new float[n];
        for(int i = 0; i < length; i++){
            v[i] = Arr.v[i];
        }
    }
    
    void Input(){ // input if num = 0, break
    	cout << "\n Nhap chuoi: ";
    	int newNumber;
    	while(length < n){
    		cin >>newNumber;
    		if (newNumber == 0)
    			break;
    		else{
    			v[length] = newNumber;
    			length++;
			}   			
		}
	}

    void Out(){
        int count = 0;
        cout<<"\n";
        for(int i = 0; i < length; i++){
            cout << v[i] <<"\t";
            count++;
            if (count == 10){
                cout<<"\n";
                count = 0;
            }
        }
    }

	int IndexMax(){
		int indexMax = 0;
		for (int i = 1; i < length; i++){
    		if (v[i] > v[indexMax]){
				indexMax = i;
			}
		}
		
		return indexMax;
	}
	
	int IndexMin(){
		int indexMin = 0;
		for (int i = 1; i < length; i++){
    		if (v[i] < v[indexMin]){
				indexMin = i;
			}
		}
		
		return indexMin;
	}
	
	void Remove(int value){
		for (int i = 0; i < length; i++){
    		if (v[i] == value){
				for (int j = i; j < length - 1; j++){
					v[j] = v[j + 1];
				}				
				i--;
				length--;
			}
		}
	}
	
	void Insert(int value){		
		if (length < n){
			v[length] = value;
			length++;
		}else
			cout << "Array is full";
	}
	
//	swap(float *a, float *b){
//		float temp = *a;
//		*a = *b;
//		*b = temp;
//	}

swap(float &a, float &b){
	float temp = a;
	a= b;
	b = temp;
}
	
	void Reverse(){
		int SoDu = 1;
		if (length%2 == 0)
			SoDu = 0;
			
		for(int i = 0; i < length/2 + SoDu; i++){
			swap(v[i], v[length - 1 - i]);
		}
	}
	

};

int main(){
	Array arr(5);
	arr.Input();
    arr.Out();
    cout<< "\nVi tri co gtri lon nhat: "<< arr.IndexMax();
    cout<< "\nVi tri co gtri nho nhat: "<< arr.IndexMin();
    
    int value;
    cout<<"\nXoa phan tu: ";
    cin>> value;
	arr.Remove(value);
    arr.Out();
    
    cout<<"\nThem phan tu: ";
    cin>> value;
    arr.Insert(value);
    arr.Out();
	
	cout<<"\nDao mang: ";
    arr.Reverse();
    arr.Out();
	

    return 0;
}
