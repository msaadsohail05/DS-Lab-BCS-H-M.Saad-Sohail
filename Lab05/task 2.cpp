// Muhammad Saad Sohail     24K-0549

#include <iostream>

using namespace std;

void printNumbers(int n){
	if(n == 1){
		cout<<n<<endl;
		return;
	}
	cout<<n<<endl;
	printNumbers(n-1);
}

int main(){
	int num;
	cout<<"Enter: ";
	cin >> num;
	printNumbers(num);
	return 0;
}
