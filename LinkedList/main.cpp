#include "Link.h"
#include <iostream>

using namespace std;

template<typename T>
void printLList(Link<T> *l) {
    Link<int> *current = l;
    while (current != 0) {
        cout << current->element << " ";
        current = current->next;
    }
}

int main() {
    Link<int> * head = new Link<int>(1);
    Link<int> * current = head;
    for (int i = 2; i <= 4; ++i, current = current->next) {
        current->next = new Link<int>(i);
    }
    printLList(head);

    return 0;
}
