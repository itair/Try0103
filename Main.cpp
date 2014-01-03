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
#include "sales.h"
#include "stack.h"
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
//   longline(3); //3
//   golf test1[3];
//   for (int i = 0; i < 2; i++)  {
//     if(test1[i].SetGolf() == 0) break;
//     test1[i].Handicap(test1[i], i+1 );
//     test1[i].ShowGolf(test1[i]);
//   }
//   test1[3]= golf();
//   test1[3].ShowGolf(test1[3]);
  // 比较类与结构体
  longline(4); // 4
  //using SALES::Sales;   
  //double ar[4] = {12.5, 22.1, 18.7, 34.4};  
  //Sales biger(ar, 4);
  //std::cout << "显式构造 Sales\n";
  //biger.showSeles();
  //Sales tiner;  
  //std::cout << "默认构造 Sales\n";
  //tiner.showSeles();
  //改写 结构 作为类,  接口的用法 和内部元素的隐藏;
  longline(5); // 5
  Stack struct_stack;
  Customer cus[3] = {{"Itar", 225.2 }, {"Catsharp", 123.6}, {"Authr", 341.7}};
  while(!struct_stack.isfull()) {
    for (Customer cs: cus)
      struct_stack.push(cs);
  }
  struct_stack.outsum();
  Customer cusss[10];
  int j(0);
  while (!struct_stack.isempty())  {
    struct_stack.pop(cusss[j++]);
  }
  struct_stack.outsum();
  // ADT 栈 的应用
  longline(6);//6
  Move mm;
  Move mmm(3.3, 6.6);
  Move mmmm(10.0, 10.0);
  mm.ShowMove();
  mmm.ShowMove();
  mmmm.ShowMove();
  mmmm = mmmm.Add(mmm);
  mmmm.ShowMove();
  mmmm.Reset();
  mmmm.ShowMove();
  //根据声明 写实现, 测试;
  longline(7);//7
  Plorg pl;
  pl.ShowCI();
  pl.SetCI(66);
  pl.ShowCI();
  Plorg pll("Itair", 99);
  pll.ShowCI();
  //根据需求文档 进行类的设计
  longline();
  system("pause");
}