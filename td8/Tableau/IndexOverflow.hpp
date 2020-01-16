#pragma once
#include "IndexException.hpp"
class IndexOverflow : public IndexException {
public:
  IndexOverflow(){
    this->setMessage("Index overflow");
  }
};
