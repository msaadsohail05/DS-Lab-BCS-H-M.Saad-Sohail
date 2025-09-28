// Muhammad Saad Sohail      24K-0549
#include <iostream>

using namespace std;

int calculateFactorial(int n){
	if(n == 1){
		return 1;
	}
	n = n* calculateFactorial(n-1);
}

int main(){
	int num;
	cout<<"Enter: ";
	cin >> num;
	cout<<"The factorial of "<<num<<" is: "<<calculateFactorial(num);
	return 0;
}
