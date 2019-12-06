#include <iostream>

using namespace std;

struct mystruct {

    int a;
    mystruct *next;


};


mystruct* reverse_list(mystruct * elements) {

    
    mystruct * prev = NULL;

    while(elements) {
        
        mystruct * tmp = elements->next;
        elements->next = prev;
        prev = elements;
        elements = tmp;
    }

    return prev;

}

void print(mystruct *elements) {

    while(elements) {

        cout<<elements->a<<"\n";
        elements = elements->next;
    }

}

void add(mystruct * front, int a) {

    mystruct * new_el = new mystruct;
    new_el->a = a;
    new_el->next = NULL;

    while(front->next != NULL)
        front = front->next;

    front->next = new_el;
    

}

int main() {

    mystruct * front = new mystruct;

    front->a = 0;
    front->next = NULL;


    for(int i=1; i<10; i++)
        add(front,i);
    
    print(front);

    front = reverse_list(front);

    print(front);

    return 0;
}
