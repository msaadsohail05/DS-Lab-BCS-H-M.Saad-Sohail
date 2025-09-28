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

// part 2
// Muhammad Saad Sohail     24K-0549

#include <iostream>

using namespace std;

#include <stdio.h>

void functionB(int n);   

void functionA(int n){
    if(n>0){
        cout<<n<<endl;
        functionB(n-1);  
    }
}

void functionB(int n){
    if(n>0){
        functionA(n-1);   
    }
}



int main(){
	int num;
	cout<<"Enter: ";
	cin >> num;
	functionA(num);
	return 0;
}
