#include "Matriz.h"

int main()
{
    Matriz m;
    m.create(2,2);
    m.setElementAt(0, 0, 1);
    m.setElementAt(0, 1, 2);
    m.setElementAt(1, 0, 3);
    m.setElementAt(1, 1, 4);

    Matriz m1;
    m1.create(2,2);
    m1.setElementAt(0, 0, 1);
    m1.setElementAt(0, 1, 2);
    m1.setElementAt(1, 0, 3);
    m1.setElementAt(1, 1, 4);
    m1.print();

    m.sub(m);
    return 0;
}
