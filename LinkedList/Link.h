#ifndef LINK_H
#define LINK_H

// Singly linked list node
template <typename E> class Link {
public:
  E element;      // Value for this node
  Link *next;        // Pointer to next node in list
  // Constructors
  Link(const E& elemval, Link* nextval =0)
    { element = elemval;  next = nextval; }
};

#endif // LINK_H
