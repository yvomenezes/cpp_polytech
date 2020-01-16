#pragma once
#include "IndexException.hpp"
class IndexUnderflow : public IndexException {
public:
  IndexUnderflow(){
    this->setMessage("Index underflow");
  }
};
