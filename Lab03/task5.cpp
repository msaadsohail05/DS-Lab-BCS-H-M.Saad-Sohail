// Muhammad Saad Sohail   24K-0549

#include <iostream>
#include <string.h>

using namespace std;

class SNode{
	public:
		int data;
		SNode* next;
		SNode(int val){
			data = val;
			next = NULL;
		}		
};

class DNode{
	public:
		int data;
		DNode* next;
		DNode* prev;
		DNode(int val){
			data = val;
			next = NULL;
			prev = NULL;
		}		
};

class Singly{
	public:
		SNode* head;
		SNode* tail;
		Singly(){
			head = NULL;
			tail = NULL;
		}
		void insertAtStart(int d){
			SNode* n = new SNode(d);
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
			SNode* newNode= new SNode(d);
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
			SNode* temp = head;
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
				SNode* current;
	    		SNode* index;
	    		int temp;
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
		DNode* toDoubly(){
        if(head == NULL) return NULL;
        SNode* temp = head;
        DNode* dHead = new DNode(temp->data);
        DNode* dTail = dHead;
        temp = temp->next;

        while(temp != NULL){
            DNode* newNode = new DNode(temp->data);
            dTail->next =newNode;
            newNode->prev =dTail;
            dTail =newNode;
            temp =temp->next;
        }
        return dHead;
    }
    SNode* toCircular(){
        if(head == NULL) return NULL;
        tail->next = head;
        return head;
    }
};

void displayDoubly(DNode* head){
    DNode* temp = head;
    while(temp != NULL){
        cout<<temp->data;
        if(temp->next){
			cout<<" <-> ";
		}
        temp = temp->next;
    }
    cout<<endl;
}
void displayCircular(SNode* head, int N) {
    SNode* temp = head;
    for(int i=0;i<N;i++){
        cout<<temp->data<<" -> ";
        temp= temp->next;
    }
    cout<<"(back to head)"<<endl;
}

int main(){
	int flag,count=0,sort;
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
	
	DNode* dHead = list1.toDoubly();
    cout <<"Converted Doubly Linked List: ";
    displayDoubly(dHead);
    
    SNode* cHead =list1.toCircular();
    cout<<"Converted Circular Linked List: ";
    displayCircular(cHead,8);

	
	return 0;
}
