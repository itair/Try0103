//Try.cpp  // ����ṹ��ʵ��

#include "Try.h"
#include <iostream>
#include <string>

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

BankAccount::~BankAccount() {

}