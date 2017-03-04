#include<iostream>
using namespace std;
int main(){
	int A[]= {40,30,20,50,10};
	int x, y, z = 5, w = 1;
	
	cout<< "The Given Array is: ";
	for(int e = 0; e < 5; e++)
		cout << A[e] << " ";
		cout << endl;
	
	for (int i = 1; i < 5; i++){
		int j, temp = A[i];
		for(j = i-1; j >= 0 && temp < A[j]; j--){
			A[j+1] = A[j];
			x = A[j];
			y = temp;
			
		}
		A[j+1] = temp;
		cout << endl;
		cout << "Switches: " << x << " and " << y << endl;
			
		cout << "Pass no. " << w++ << ": ";
		for (int e = 0; e < z; e++){
			cout << A[e]<<" ";
		}
		cout << endl;
	}
	return 0;
}
