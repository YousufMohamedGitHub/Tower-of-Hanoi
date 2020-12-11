

#include "Stack.h"
#include <exception>
#include <iostream>

using namespace std;


void Stack::push_back(const Cube & cube) {
  
  cubes_.push_back(cube);
}

Cube Stack::removeTop() {
  Cube cube = peekTop();
  cubes_.pop_back();
  return cube;
}

Cube & Stack::peekTop() {
  return cubes_[cubes_.size() - 1];
}

unsigned Stack::size() const {
  return cubes_.size();
}

std::ostream& operator<<(std::ostream & os, const Stack & stack) {
  for (unsigned i = 0; i < stack.size(); i++) {
    os << stack.cubes_[i].getLength() << " ";
  }
  os << endl;
  return os;
}
