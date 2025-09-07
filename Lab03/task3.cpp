// Muhammad Saad Sohail   24K-0549

#include <iostream>
#include <string.h>

using namespace std;

class Node{
	public:
		int data;
		Node* next;
		Node(int val){
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
		void insertAtStart(int d){
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
		
		void insertAtEnd(int d){
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
		Node* reverseInGroups(Node* head,int k){
		    if(!head) return NULL;
		
		    Node* previous = NULL;
		    Node* current = head;
		    Node* next = NULL;
		    
		    int count=0;
		    
		    while(current !=NULL && count<k){
		        next = current->next;
		        current->next = previous;
		        previous = current;
		        current = next;
		        count++;
		    }       
		    if(next !=NULL){
		        head->next=reverseInGroups(next,k);
		    }
		    return previous;
		}

};

int main(){
	int flag,count=0,sort,length;
	int val;
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
	cout<<"Enter the size of the groups";
	cin>>length;
	list1.head = list1.reverseInGroups(list1.head,length);
	list1.displayAllNodes();
	
	
	
	return 0;
}
