/*-----------------------------------------
//   C++ Primer Plus 课后习题 p337 10.10
//   by itAir
//   Try to use Google C++ programing style   
----------------------------------------- */    

#include <iostream>
#include <string>

#include "Try.h"
#include "GobalFuc.h"
#include "Inline.h"
#include "golf.h"

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
  longline(3); //3
  golf test1[3];
  for (int i = 0; i < 2; i++)  {
    if(test1[i].SetGolf() == 0) break;
    test1[i].Handicap(test1[i], i+1 );
    test1[i].ShowGolf(test1[i]);
  }
  test1[3]= golf();
  test1[3].ShowGolf(test1[3]);
  // 比较类与结构体

  longline();
  system("pause");
}