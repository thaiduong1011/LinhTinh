#include <iostream>
using namespace std;

class Complex{
	private:
		int Re, Im;
	public:
		Complex(int re = 0, int im = 0){
			Re = re;
			Im = im;
		}
		
		void Display(){
			cout << Re << " + i" << Im;
		}
		
		Complex operator+(Complex &comp){
			return Complex(Re + comp.Re, Im + comp.Im);			
		}
		
		Complex operator-(Complex &comp){
			return Complex(Re - comp.Re, Im - comp.Im);			
		}
		
		Complex operator!(){
			return Complex(Re*(-1), Im);			
		}
		
		friend ostream& operator << (ostream& os, Complex& comp){
			cout << comp.Re << " + i" << comp.Im;
		}
};

int main(){
	
	Complex complex(2,5);
	Complex complex1(3,1);
	complex.Display();
	cout << (complex + complex1);
	return 1;
}
