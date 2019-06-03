#include <iostream>
using namespace std;
#define n 5
int Q[n];
int front = -1;
int rear = -1;




void enqueue (int value){

 	if ((rear + 1)%n == front)
    	cout<<"can't keep this value, Queue is full \n";
 	else {
 
  	if( front == -1)
     	front = 0;
 	rear = (rear+1)%n;
   	Q[rear] = value;
 	}
}


void dequeue(){
 	if(front == -1 && rear == -1 )
  		cout<<"Now Queue is empty \n";

 	if( front == rear )
  		front = rear = -1;
 	else
  		front = (front + 1)%n;
}


void displayQueue(){
 	if(front == -1 && rear == -1)
  		cout<<"Queue is empty \n";
 	else{
  		int i;
  		if( front <= rear ){
   			for( i=front ; i<= rear ; i++)
   			cout<<Q[i]<<" ";
  		} else {
   			i=front;
   			while( i < n){
   				cout<<Q[i]<<" ";
   				i++;
   			}
   			i=0;
   			while( i <= rear){
   				cout<<Q[i]<<" ";
   				i++;
   			}
  		}
 	}
 	cout<<endl;
}


int main(){
 	char ord;
	int add;
do{

	cout<<"order: ";
	cin>>ord;
	
	switch (ord) {
		case 'i':
			cout<<"\t Enter add Queue: ";
			cin>>add;
			enqueue(add);
			break;
	
		case 'o':
			cout<<" \t Dequeue \n";
			dequeue();
			break;
	
		case 'd':
			cout<<"\t Show Queue: ";
			displayQueue();
			break;
	}
	
}while(ord != 'q');


}
