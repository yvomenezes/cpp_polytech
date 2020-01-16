#pragma once
#include <exception>
#include <string>
class IndexException : public std::exception{
private:
  std::string message;
public:
  void setMessage(const std::string &m){
    this->message = m;
  }
  const char *what() const noexcept override{
    return this->message.c_str();
  }
};
