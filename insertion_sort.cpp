#include<iostream>
using namespace std;

int main(){
	int i, n, j, A[6]={40,30,20,50,10};

		for(i = 1; i < 6; i++){
			int tmp = A[i];
			for (j = i-1; j >= 0 && tmp < A[j]; j--){
			A[j+1] = A[j];
		}
		A[j+1] = tmp;
	}
	cout << "Sorted array: ";
	for (i = 1; i < 6; i++)
	cout << A[i] << " ";
return 0;	
}
