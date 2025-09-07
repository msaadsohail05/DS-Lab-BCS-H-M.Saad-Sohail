// Muhammad Saad Sohail   24K-0549

#include <iostream>
#include <string.h>

using namespace std;

class Node{
	public:
		char data;
		Node* next;
		Node(char val){
			data = val;
			next = NULL;
		}		
};

class Singly{
	public:
		Node* head;
		Node* tail;
		Singly(){
			head = NULL;
			tail = NULL;
		}
		void insertAtStart(char d){
			Node* n = new Node(d);
			n->next = head;
			head = n;
			tail = n;
			cout<<"Node inserted at the start"<<endl;	
		}
		
		void insertAtEnd(char d){
			Node* newNode= new Node(d);
			if(head == NULL){
				head = newNode;
				tail = newNode;
			}
			else{
				tail->next = newNode;
				tail = newNode;
				cout<<"Node inserted"<<endl;	
			}			
		}
		void displayAllNodes(){
			cout<<"Displaying all nodes:- "<<endl;
			Node* temp = head;
			while(temp != NULL){
				cout<<temp->data<<endl;
				temp = temp->next;
			}
			cout<<"List completed!"<<endl;
		}
};

bool isPalindrome(Node* head,int count){
    char array1[count];
    Node* temp = head;
    for(int i=0;i<count;i++){
        array1[i] = temp->data;
        temp = temp->next;
    }
    for(int i=0;i<count/2;i++){
        if(array1[i] !=array1[count-1-i]){
            return false;
        }
    }
    return true;
}
     

int main(){
	int flag,count=0;
	char val;
	Singly list1;
	
	cout<<"Enter 1 to insert a node or 0 to not insert a node: ";
	cin>>flag;
	if(flag==1){
		int f;
		cout<<"Enter the value to be inserted: ";
		cin>>val;
		list1.insertAtStart(val);
		count +=1;
		cout<<"Enter 1 to display all nodes or 0 to not display all node: ";
		cin>>f;
		if(f==1){
			list1.displayAllNodes();
		}
		cout<<"Enter 1 to insert another node or 0 to not insert a node: ";
		cin>>flag;
	}
	while(flag == 1){
		int f;
		cout<<"Enter the value to be inserted: ";
		cin>>val;
		list1.insertAtEnd(val);
		count +=1;
		cout<<"Enter 1 to display all nodes or 0 to not display all node: ";
		cin>>f;
		if(f==1){
			list1.displayAllNodes();
		}			
		cout<<"Enter 1 to insert another node or 0 to not insert a node: ";
		cin>>flag;		
	}
	cout<<"The number of elements in the list are: "<<count<<endl;
	//checking for palindrome
	if(isPalindrome(list1.head,count)){
		cout<<"This word is a palindrome!"<<endl;
	}
	else{
		cout<<"This word is not a palindrome!"<<endl;
	}	
	return 0;
}
