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

//6
Move::~Move(){
}

Move::Move(double a /* = 0 */, double b /* = 0 */) {
  x = a;
  y = b;
}

void Move::ShowMove() const {
  std::cout << "x--" << x <<"  y--" << y << std::endl;
}

void Move::Reset(double a /* = 0 */, double b /* = 0 */) {
  x = a ; y = b ;
}

Move Move::Add(const Move & m) const {
  const double a = (this->x + m.x);
  const double b = (this->y + m.y) ;
  return  Move(a,b);
 }

//7
Plorg::~Plorg() {}

Plorg::Plorg(const char str[] /* = "Plorga" */, const int ci /* = 10 */) {
  if (strlen(str)>= kNameLen || ci < kICMin || ci > kICMax) {
    const char str[] = "Plorga";
    const int ci = 10;
  }  
  strcpy_s(name, str);
  CI = ci;
}

bool Plorg::SetCI(const int ci) {
  if (ci < 0 || ci > kICMax) 
    return false;
  CI = ci;
  return true;
}

void Plorg::ShowCI() const {
  std::cout << "name: " << name << std::endl;
  std::cout << "CI:   " << CI << std::endl;
}

//8
///��֮��˼������ģ�治��ʵ��...
//ģ���������ʵ�ֱ�����ͬһ���ļ���
//ͬ���� ��ʾ���廯������ ��ʵ�ֱ�����ͬһ���ļ���;