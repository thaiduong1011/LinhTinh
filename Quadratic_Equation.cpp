#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;

class Complex{
	private:
		float Re;
		float Im;
	public:
		Complex(float re = 0, float im = 0){
			Re = re;
			Im = im;
		}
		
		friend ostream& operator<<(ostream& os, Complex& comp){
			if (comp.Im >= 0)
				os<<comp.Re << "+" << setprecision(2) << comp.Im<< "i";
			else
				os<<comp.Re << setprecision(2) << comp.Im<< "i";
		}
};

class Quadratic{
	private:
		int a;
		int b;
		int c;
		
	public:
		Quadratic(int A = 0, int B = 0, int C = 0);
		void Input();
		void OutputEquation();
		void OutputResult();
};

Quadratic::Quadratic(int A, int B, int C){
	a = A;
	b = B;
	c = C;
}

void Quadratic::Input(){
	cout<<"\nInput:\n";
	cout<< "a: ";
	cin>> a;
	cout<< "b: ";
	cin>> b;
	cout<< "c: ";
	cin>> c;
}

void Quadratic::OutputEquation(){
	if (a != 0)
		cout << a << "x2";
	if (b != 0)
		cout << (b > 0? "+": "-") << abs(b) << "x";
	if (c != 0)
		cout << (c > 0? "+": "-") << abs(c);
	
	cout << "= 0";
}

void Quadratic::OutputResult(){
	float x1;
	float x2;
	
	if (a == 0){
		if (b == 0){
			if (c == 0)
				cout << "Phuong trinh vo so nghiem";
			else
				cout << "Phuong trinh vo nghiem";
		}
		else {
			x1 = -c/b;
			cout << "Result x1 = " << setprecision(2) << x1;
		}
		return;
	}
	
	float delta = b*b - 4*a*c;
	if (delta < 0){
		cout << "Phuong trinh co 2 nghiem phuc: \n";
		float Re = -b/(2*a);
		float Im = sqrt(-delta)/(2*a);
		Complex comp1(Re, Im);
		Complex comp2(Re, -Im);
		cout<<"\nx1 ="<< comp1;
		cout<<"\nx2 ="<< comp2;
	}		
	else if (delta == 0){
		 cout << "x1 = x2 = " << (-b/(2*a));
	}else{
		x1 = (-b + sqrt(delta))/ (2*a);
		x2 = (-b - sqrt(delta))/(2*a);
		cout << "\nResult x1 = " << setprecision(2) << x1;
		cout << "\nResult x2 = " << setprecision(2) << x2;
	}
}

int main(){
	Quadratic quad1;
	quad1.Input();
	quad1.OutputEquation();
	quad1.OutputResult();
	
	return 0;
}
