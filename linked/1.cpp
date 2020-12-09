#include <iostream>

using namespace std;

class node {
public:
	int data;
	node *next;
};

class list {

	node *head;

public:
	list() {
		head=NULL;
	}

	~list() {}
	
	void insert_node();
	void insert_node_pos();
	void display();
};

void list::insert_node() {

	node *temp,*ptr;
	temp=new node;
	
	cout << "\nEnter the data value of the node: ";
	cin >> temp->data;

	temp->next=NULL;

	if(head==NULL)
		head=temp;

	else {
		ptr=head;
		
		while(ptr->next!=NULL)
			ptr=ptr->next;
		
		ptr->next=temp;
	}
}

void list::insert_node_pos() {
	
	int i,pos;
	node *ptr,*temp;
	
	temp=new node;
	
	cout << "\nEnter position to insert the element: ";
	cin >> pos;

	cout << "\nEnter data value: ";
	cin >> temp->data;

	temp->next=NULL;

	if(pos==1) {
		temp->next=head;
		head=temp;
	}

	else {

		for(i=1,ptr=head;i<pos-1;i++) {

			ptr=ptr->next;
			if(ptr==NULL) {
				cout << "\nNo such position possible:Out Of Bound Position\n";
				return;
			}
		}

		temp->next=ptr->next;
		ptr->next=temp;
	}
} 

void list::display() {

	node *ptr;
	ptr=head;

	if(ptr==NULL)
		cout << "\nNothing to display: The list is empty\n";

	else {
		cout << "\nElements present in the list\n";

		while(ptr!=NULL) {
		
			cout << ptr->data << "\t";
			ptr=ptr->next;
		}
		cout << endl;
	}
}

int main() {
	
	int choice;
	list l;

	cout << "\n Singular linked list Implementation using C++, Position is assumed to start from 1\n";

	while(1) {
	
		cout << "\n----MENU-----\n";
		cout << "\n1.Insert Node";
		cout << "\n2.Insert node at a given position";
		cout << "\n3.Display List";
		cout << "\n4.Quit";

		cout << "\n\nEnter your choice: ";
		cin >> choice;
		
		switch(choice) {

			case 1: l.insert_node();
				break;
			case 2: l.insert_node_pos();
				break;
			case 3: l.display();
				break;
			case 4: exit(0);
				break;
			default: cout << "\nEnter a valid choice\n";
		}
	}
	return 0;
}
		
	
