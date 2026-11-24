#include <iostream>
using namespace std;

struct NODE
{
	int data;
	NODE* next;
};

int main()
{
	NODE* start = new NODE;
	NODE* end = new NODE;


	*end = { 22 , NULL };
	*start = { 33 , end };

	NODE* head = new NODE;
	*head = { 44 , start };
	start = head;
	cout << start->data << endl;
	cout << start->next->data << endl;
	cout << start->next->next->data;

}