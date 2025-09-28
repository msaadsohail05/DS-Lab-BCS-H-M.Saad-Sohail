//Muhammad Saad Sohail   
#include <iostream>

using namespace std;

int sumTail(int n,int total){
	if(n == 0){
    
		return total;
	}
  cout<<"new cycle"<<endl;
	return sumTail(n-1,total+n);
}

int main(){
	int num,total=0;
	cout<<"Enter: ";
	cin >> num;
	cout<<sumTail(num,total);
	return 0;
}

//part 2:
