//Try.cpp  // ����ṹ��ʵ��

#include "Try.h"
#include <iostream>
#include <string>

//1
BankAccount::BankAccount() {
  using std::string;
  std::cout << "Ĭ�Ϲ��캯��\n";
  fullname = "Itair Catsharp";
  userid = "catsharp09801985155adf";
  account = 9990.13;
}

BankAccount::BankAccount(const std::string & fn,
                         const std::string & id,
                         double money) {
  using std::string;
  std::cout  << "��ʽ���캯��\n" ;
  fullname = fn;
  userid = id;
  account = money;
}

BankAccount::~BankAccount() {}

//2
Person::Person(const string & ln, const char *fn /* = "HeyYou" */) {
  lname = ln;
  strcpy_s(fname,fn);
}

void Person::show() const {
  std::cout << "Fullname:   " << fname << "-" << lname << std::endl;
}

void Person::FormalShow() const {
  std::cout << "Formal Show :   " << lname << "-" << fname << std::endl;
}
