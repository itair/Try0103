/*-----------------------------------------
//   C++ Primer Plus 课后习题 p337 10.10
//   by itAir
//   Try to use Google C++ programing style   
----------------------------------------- */    
#include "Try.h"
#include "GobalFuc.h"
#include "Inline.h"
#include <iostream>
#include <string>

using namespace std;

void main()
{
  showtitle();
  longline();

  longline(1); //1  
  BankAccount user1;
  user1.OutputInfo();
  BankAccount user2("What is it?", "I don't have an account id", 0.0);
  user2.OutputInfo();
  user1.DepositAccount(200.0);
  user1.OutputInfo();
  user1.WithdrawAccount(1000.1);
  user1.OutputInfo();
  //建立类
  longline(2); //2
  Person one;
  Person two("Smythecraft");
  Person three("Dimwiddy", "Sam");
  one.show();
  cout << endl;
  one.FormalShow();
  cout << endl;
  two.show();
  cout << endl;
  two.FormalShow();
  cout << endl;
  three.show();
  cout << endl;
  three.FormalShow();
  cout << endl;
  //类构造重载完成,,,两种字符串定义,还是string好用.

  longline();
  system("pause");
}