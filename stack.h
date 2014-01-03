//stack.h --class definiton for the stack ADT
#ifndef TRY01013_TRY0103_STACK_H
#define TRY01013_TRY0103_STACK_H

struct Customer {
  char fullname[35];
  double payment;
};

typedef Customer Item;

class Stack {
public:
  Stack();
  bool isempty() const;
  bool isfull() const;
  bool push(const Item & it);
  bool pop(Item & it);
  void outsum() const;
protected:

private:
  enum {MAX = 10};
  Item items[MAX];
  int top;
  double sum;
};// class Stack;

#endif //TRY01013_TRY0103_STACK_H