#include<iostream>
using namespace std;

struct node{
    int data;
    struct node *next;
};

class stack{
    struct node *top;
    public:
    stack() 
    {
        top=NULL;
    }
    void push(); 
    void pop();  
    void show(); 
};

void stack::push(){
    int value;
    struct node *ptr;
    cout<<"\nPUSH Operation\n";
    cout<<"Enter a number to insert: ";
    cin>>value;
    ptr=new node;
    ptr->data=value;
    ptr->next=NULL;
    if(top!=NULL)
        ptr->next=top;
    top=ptr;
    cout<<"New item is inserted to the stack!~";
    system("cls");
}

void stack::pop(){
    struct node *temp;
    if(top==NULL){
        cout<<"The stack is empty!~";
    }
    temp=top;
    top=top->next;
    cout<<"POP Operation........Poped value is "<<temp->data;
    delete temp;
    system("cls");
}

void stack::show()
{
    struct node *ptr1=top;
    cout<< " " << "Stacked!~ ";
    while(ptr1!=NULL)
    {
        cout<<ptr1->data;
        ptr1=ptr1->next;
    }
    if(top==NULL){
        cout<<"The stack is empty!~";
    }
}

int main(){
    stack s;
    int choice;
    while(1){
        cout << "\n//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~//\n" << endl;
        cout << "LINKED LIST /W STACK IMPLEMENTATION    ~" << endl;
        cout << "1: PUSH                                ~\n";
        cout << "2: POP                                 ~\n";
        cout << "3: DISPLAY                             ~\n";
        cout << "4: EXIT                                ~\n";
        cout << "\n//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~//\n" << endl;
        cout<<"Enter your choice(1-4): ";
        cin>>choice;
        switch(choice){
            case 1:
                s.push();
                break;
            case 2:
                s.pop();
                break;
            case 3:
                s.show();
                break;
            case 4:
                return 0;
                break;
            default:
                cout<<"Please enter correct choice(1-4)!!";
                break;
        }
    }
    return 0;
}
