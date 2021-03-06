#include<iostream>
#include<conio.h>
using namespace std;
class Stack {
  public:
    Stack(int num) {
      top = 0;
      maxelem = num;
      s = new int[maxelem];
    }
    
  void push(int t) {
 
    if (top == maxelem) 
		return;
    s[top++] = t;
  }
  
  int pop() {

    if (top == 0) 
		return -1;
    return s[--top];
  }
  
  void display() {
    if (top == 0) {
      cout << "(empty)\n";
      return;
    }
    for (int t = 0; t < top; t++) 
		cout << s[t] << " ";
    cout << "\n";
  }
  
  int empty() {
    return top == 0;
  }
  
  private:
    int * s;
  int top;
  int maxelem;
};
    
class LinkedList{
    struct Node {
        int x;
        Node *next;
    };
public:
    LinkedList(){
        head = NULL;
    }
    
    int display()
	{
    	node = head;
    	while(node!=NULL)
    	{
      	  cout << node->x << " ";
      	  node = node->next;
  		}
  	}

    void addValue(int val){
        Node *n = new Node();   
        n->x = val;             
        n->next = head;         
                               
        head = n;              
    }

    int popValue(){
        Node *n = head;
        int ret = n->x;

        head = head->next;
        delete n;
        return ret;
    }

private:
    Node *head, *node; 
};

void menu(){
	cout << "============================\n" << endl;
	cout << "1: Enter Numbers\n" << endl;
	cout << "2: Pop \n" << endl;
	cout << "3: Exit\n" << endl; 
	cout << "4: Display\n" << endl;
	}

int main()
{
	int choice, a, num, flag;
	LinkedList list;
	Stack * s = new Stack(100);
	while(1){
		system("cls");
		menu();
		cout << "============================\n" << endl;
		cout<<"Enter choice: ";
		cin>>choice;
		switch(choice){
		case 1:{
			cout<<"Enter into link list: ";
			cin>>a;
			list.addValue(a);
			break;
		}
		case 2:{
			cout << "\nValue~ " << list.popValue() << " ~Has Successfully Popped" << endl;
			getch();
			break;
		}
		case 3: {
			exit(1);
			break;
			}
		case 4:{
			cout << "Link List Value: " << endl;
			list.display();
			getch();
			break;
		}
	}

}	
 return 1;
}
