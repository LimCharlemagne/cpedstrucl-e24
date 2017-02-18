#include<iostream>
using namespace std;

int main(){
	int A[] = {35, 10, 55, 20, 5};
	for (int i = 5; i > 1; i--)
		for (int j = 0; j < 5-1; j++) 
			if(A[j] > A[j+1]){
				int swap = A[j];
				A[j] = A[j+1];
				A[j+1] = swap;
}
	cout << " " << endl;
		for (int j = 0; j < 6-1; j++)
		cout << A[j] << "" << endl ;
return 0;
}
