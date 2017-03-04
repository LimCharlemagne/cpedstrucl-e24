#include<iostream>
using namespace std;
int main(){
	int A[]={30,40,20,50,10};
	int n = 5, y = 1;
	
	cout<<"The Given Array is: ";
	for(int e = 0; e < 5; e++)
		cout << A[e] << " ";
		cout << endl;
	
	for(int i = 0; i < n-1; i++){
		int min = A[i], index = i;
		for(int j = i+1; j < n; j++)
			if (A[j] < min){
				min = A[j];
				index = j;
			}

		A[index] = A[i];
		A[i] = min;
		cout << endl;
		cout << "Switches: "<< A[index] << " and " <<A[i] << endl;
		cout << "Pass no. " << y++ << ": ";
		for (int i = 0; i < 5; i++){
			cout << A[i] <<" ";
		}
		cout << endl;
	}
	return 0;
}
