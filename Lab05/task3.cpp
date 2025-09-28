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
#include <iostream>

using namespace std;

int sumNonTail(int n,int total){
	if(n == 0){
		return 0;
	}
	int result = sumNonTail(n-1,total);
	return result + n;
}

int main(){
	int num,total=0;
	cout<<"Enter: ";
	cin >> num;
	cout<<sumNonTail(num,total);
	return 0;
}
