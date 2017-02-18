#include <iostream>
using namespace std;

int main(){
	int A[] = {30 ,20 ,40 ,50 ,10};
	int n = 5, i , j;
	
	for (int j = 0; j < n; j++)
		cout << A[j] << " ";
	cout << endl;
	
	for (i = 1; i < n; i++){
		int tmp=A[i];
		for (j = i-1; j >= 0 && tmp < A[j]; j--){
			A[j+1] = A[j];
		}
	}
}
