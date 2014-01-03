//Try.cpp  // 类与结构的实现

#include "Try.h"
#include <iostream>
#include <string>

BankAccount::BankAccount() {
  using std::string;
  std::cout << "默认构造函数\n";
  fullname = "Itair Catsharp";
  userid = "catsharp09801985155adf";
  account = 9990.13;
}

BankAccount::BankAccount(const std::string & fn,
                         const std::string & id,
                         double money) {
  using std::string;
  std::cout  << "显式构造函数\n" ;
  fullname = fn;
  userid = id;
  account = money;
}

BankAccount::~BankAccount() {

}