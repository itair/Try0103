//Try.h 主类声明与主模版
#ifndef TRY1230_TRY1230_TRY_H
#define TRY1230_TRY1230_TRY_H

#include <iostream>
#include <string>

using namespace std;

//常量

//类与结构
class BankAccount {  
public:
  BankAccount();
  ~BankAccount();
  BankAccount(const string &, const string &, const double);
  inline void DepositAccount(const double in) { if (in) account += in; }
  inline void WithdrawAccount(const double out) { if (out) account -= out; }
  inline void OutputInfo(void){ 
    cout << fullname << "\t" << userid << "\t" << account << endl; }
private:
  string fullname;
  string userid;
  double account;
}; // class BankAcccount

class Person {
public:
  Person() { lname = ""; fname[0] = '\0' ;}
  Person(const string & ln, const char *fn = "HeyYou");
  void show() const;
  void FormalShow() const;

private:
    static const int LIMIT = 25;
    string lname;
    char fname[LIMIT];
};  // Person

//模版


#endif //TRY1230_TRY1230_TRY_H