#include <iostream>
using namespace std;

class Matrix{
	private:
		float **p;
		int cols;
		int rows;
	public:
		Matrix(int = 0, int = 0);
		~Matrix();
		void Input();
		void Output();
		Matrix& operator=(const Matrix& matrix);
		Matrix& operator=(const float& number);
		
};

Matrix::Matrix(int c, int r){
	cols = c;
	rows = r;
	p = new float*[rows];
	
	for (int i = 0; i < r; i++){
		p[i] = new float[i];
	}
}

Matrix::~Matrix(){
	for(int i = 0; i < rows; i++){
		delete p[i];
	}
	
	delete p;
}

Matrix& Matrix::operator=(const float& number){
	for(int i = 0; i < rows; i++){
		for (int j = 0; j < cols; j++){
			p[i][j] = number;
		}
	}
	
	return *this;
}

Matrix& Matrix::operator=(const Matrix& matrix){
	this->cols = matrix.cols;
	this->rows = matrix.rows;
	this->p = matrix.p;
	
	return *this;
}

void Matrix::Input(){
	cout <<"Input: ";
	for(int i = 0; i < rows; i++){
		for (int j = 0; j < cols; j++){
			cin>> p[i][j];
		}
	}
}

void Matrix::Output(){
	cout <<"\nOutput: \n";
	for(int i = 0; i < rows; i++){
		for (int j = 0; j < cols; j++){
			cout << p[i][j] <<"\t";
		}
		cout << "\n";
	}
}

int main(){
	Matrix matrix(3, 4);
	matrix.Input();
	matrix.Output();
	
	matrix = 6;
	matrix.Output();
	matrix.~Matrix();
	return 0;
}
