//Try.h ������������ģ��

#ifndef TRY1230_TRY1230_TRY_H
#define TRY1230_TRY1230_TRY_H

#include <iostream>
#include <string>

//����

//����ṹ
class BankAccount {
public:
  BankAccount();
  ~BankAccount();
  inline void DepositAccount(const double in) { if (in) account += in; }
  inline void WithdrawAccount(const double out) { if (!out) account -= out; }
  inline void OutputInfo(void){ 
    std::cout << fullname << "\t" << userid << "\t" << account << std::endl; }
private:
  string fullname;
  string userid;
  double account;

};



//ģ��


#endif //TRY1230_TRY1230_TRY_H