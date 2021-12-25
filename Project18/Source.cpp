#include <iostream>
using namespace std;

const int N = 3;
void gen(int array[N][N]) {

	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j  < N; j ++)
		{
			array[i][j] = rand() % 10;
		}
	}
}
void out(int array[N][N]) {
	
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < N; j++)
		{
			cout << array[i][j] << "\t";
		}
		cout << endl;
	}
}
int norm(int array[N][N]){
	int maxsum = 0;
	for (int i = 0; i < N; i++)
	{
		int sum = 0;
		for (int j = 0; j < N; j++)
		{
			sum += array[i][j];
		}
		if (sum > maxsum) {
			maxsum = sum;
		}
	}
	return maxsum;
}
int main() {
	int A[N][N]; 
	int	B[N][N];
	gen(A);
	gen(B);
	cout << "A:\n";
	out (A);
	cout << "B:\n";
	out(B);
	cout << "norm for A: " << norm(A) << endl;
	cout << "norm for B: " << norm(B) << endl;
	cout << "avarage: " << (norm(A) + norm(B)) / 2.0 << endl;
}