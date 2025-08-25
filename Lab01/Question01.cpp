#include <iostream>
#include <string.h>

using namespace std;

class BankAccount{
	private:
		int balance;
	public:
		BankAccount(){
			balance = 200;
			cout<<"Normal Constructor.Your initial balance is: "<<balance<<endl;
		}
		BankAccount(int b){
			balance= b;
			cout<<"Parameterized Constructor.Your initial balance is: "<<balance<<endl;
		}
		BankAccount(BankAccount &obj){
			balance = max(obj.balance - 200); //using max to prevent the value from getting negative
			cout<<"Copy Constructor.Your initial balance is: "<<balance<<endl;
		}
		   
};

int main(){
	BankAccount account1;
	BankAccount account2(1000);
	BankAccount account3(account2);
	return 0;
}
