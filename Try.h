//Try.h 主类声明与主模版

#ifndef TRY1230_TRY1230_TRY_H
#define TRY1230_TRY1230_TRY_H

#include <iostream>
#include <string>

//常量

//类与结构
class BankAccount {  
public:
  BankAccount();
  ~BankAccount();
  BankAccount(const std::string &, const std::string &, const double);
  inline void DepositAccount(const double in) { if (in) account += in; }
  inline void WithdrawAccount(const double out) { if (out) account -= out; }
  inline void OutputInfo(void){ 
    std::cout << fullname << "\t" << userid << "\t" << account << std::endl; }
private:
  std::string fullname;
  std::string userid;
  double account;
}; // class BankAcccount



//模版


#endif //TRY1230_TRY1230_TRY_H