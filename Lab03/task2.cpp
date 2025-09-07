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
			if(head == NULL){
				head = tail = n; 
			}
			else{
				n->next = head;
				head = n;	
			}
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
		void sortLinkedList(){
			cout<<"Sorting this list:-"<<endl;
			if(head == NULL){
				cout<<"The list is empty!"<<endl;
			}
			else{
				Node* current;
	    		Node* index;
	    		char temp;
	    		for(current = head; current !=NULL; current = current->next){
	    			for(index = current->next;index != NULL; index= index->next){
	    				if(current->data > index->data){
	    					temp = current->data;
	    					current->data = index->data;
	    					index->data = temp;
						}
	    				
					}
				}
			}
			cout<<"List has been sorted!"<<endl;	
		}
};

int main(){
	int flag,count=0,sort;
	char val;
	Singly list1;
	cout<<"Operations of linked list 1"<<endl;
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
	cout<<"Enter 1 to sort this linked list: ";
	cin>>sort;
	if(sort==1){
		list1.sortLinkedList();	
		list1.displayAllNodes();	
	}
	
	//second linked list
	int flag1,count1=0,sort1;
	char val1;
	Singly list2;
	cout<<"Operations of linked list 2"<<endl;
	cout<<"Enter 1 to insert a node or 0 to not insert a node: ";
	cin>>flag1;
	if(flag1==1){
		int f1;
		cout<<"Enter the value to be inserted: ";
		cin>>val1;
		list2.insertAtStart(val1);
		count1 +=1;
		cout<<"Enter 1 to display all nodes or 0 to not display all node: ";
		cin>>f1;
		if(f1==1){
			list2.displayAllNodes();
		}
		cout<<"Enter 1 to insert another node or 0 to not insert a node: ";
		cin>>flag1;
	}
	while(flag1 == 1){
		int f1;
		cout<<"Enter the value to be inserted: ";
		cin>>val1;
		list2.insertAtEnd(val1);
		count1 +=1;
		cout<<"Enter 1 to display all nodes or 0 to not display all node: ";
		cin>>f1;
		if(f1==1){
			list2.displayAllNodes();
		}			
		cout<<"Enter 1 to insert another node or 0 to not insert a node: ";
		cin>>flag1;		
	}
	cout<<"Enter 1 to sort this linked list: ";
	cin>>sort1;
	if(sort1==1){
		list2.sortLinkedList();
		list2.displayAllNodes();		
	}
	
	Singly mergedList;
	Node* temp1 = list1.head;
	mergedList.insertAtStart(temp1->data);
	temp1 = temp1->next;
	for(int i=0;i<count-1;i++){
		mergedList.insertAtEnd(temp1->data);
		temp1 = temp1->next;
	}
	
	Node* temp2 = list2.head;
	for(int j=0;j<count1;j++){
		mergedList.insertAtEnd(temp2->data);
		temp2 = temp2->next;
	}
	mergedList.displayAllNodes();
	mergedList.sortLinkedList();
	mergedList.displayAllNodes();
	return 0;
}
