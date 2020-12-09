//============================================================================
// Name        : book.cpp
// Author      : Amrit Shukla
// Version     :
// Copyright   : 
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <cstring>
#include <sstream>
using namespace std;

class Book {

	char title_[30];
	char author_[30];
	float price_;
	char isbn_[30];

public:

	void read();
	string display();
	void search_book(char []);

};

void Book :: read() {

	cout << "\n\nEnter Title: " << endl;
	cin >> title_;
	cout << "Enter Author: " << endl;
	cin >> author_;
	cout << "Enter Price: " << endl;
	cin >> price_;
	cout << "Enter ISBN no.: " << endl;
	cin >> isbn_;

}

string Book :: display() {

    stringstream ss;
	ss << "\n\nTitle: " << title_  << "\n" << "Author: " << author_ << "\n" << "Price: " << price_ << "\n" << "ISBN No.: " << isbn_ << endl;
	return ss.str();

}

void Book :: search_book(char isbn[]) {

	    if(strcmp(isbn_,isbn) == 0){

			cout << display() << endl;

		}

}

int main() {

	int i,n;
	char isbn[30];

	cout << "Enter no. of books you want to store: " << endl;
	cin >> n;

	Book b[n];

	cout << "\nEnter Book Details\n" << endl;
	for(i=0;i<n;i++)
		b[n].read();

	for(i=0;i<n;i++)
		b[n].display();

	cout << "\nEnter ISBN no. of book you want to search for\n" << endl;
	cin >> isbn;

	for(i=0;i<n;i++)
		b[n].search_book(isbn);

	return 0;
}

