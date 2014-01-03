// method of stack.h 
#include <iostream>
#include "stack.h"

Stack::Stack() {
  top = 0 ;
  sum = 0.0;
}

bool Stack::isempty() const {
  return top == 0;
}

bool Stack::isfull() const {
  return top == MAX;
}

bool Stack::push(const Item & it) {
  if (top < MAX) {
    items[top++] = it;
    return true;
  } else 
    return false;
}

bool Stack::pop(Item & it) {
  if (top > 0) {
    it = items[--top];
    sum += it.payment;
    return true;
  } else 
    return false;
}

void Stack::outsum() const {
  std::cout << "The sum of popped paymets is " << sum << std:: endl;
}