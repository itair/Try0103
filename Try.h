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

class Move {
public:
  ~Move();
  Move(double a = 0, double b = 0);
  void ShowMove () const;
  Move Add(const Move & m) const;
  void Reset(double a = 0, double b = 0);
private:
  double x;
  double y;
};// class Move

class Plorg {
public:
  ~Plorg();
  Plorg(const char str[] = "Plorga", const int ci = 50) ;
  bool SetCI(const int) ;
  void ShowCI() const;
protected:
private:
  static const int kNameLen = 20;
  static const int kICMax = 100;
  static const int kICMin = 0;
  char name[kNameLen];
  int CI;
};// class plorg


//模版
template<class T>
class Lists {
public:
  Lists();
  ~Lists();
  Lists(const T[], const int);
  bool isfull();
  bool push(const T &);
  void visit(void (*pf) (T &));
  bool isempty();
 
private:
  static const int kMax = 20;
  T item[kMax];
  int pointnum;
}; // 类模板 Lists


template<class T>
Lists<T>::Lists() {
  //item = NULL;
  pointnum = 0;
}

template<class T>
Lists<T>::~Lists(){}

template<class T>
Lists<T>::Lists(const T ti[], const int n){
  if (n < 0 || n >= kMax ) {
    //item = NULL;
    pointnum = 0;
    return;
  }
  for (int i = 0; i < n; i++)  {
    item[i] = ti[i];    
  }
  pointnum = n;
}

template<class T>
bool Lists<T>::isfull() {
  return pointnum == kMax;
}

template<class T>
bool Lists<T>::isempty() {
  return pointnum == 0;
}

template<class T>
bool Lists<T>::push(const T & t) {
  if (pointnum < kMax) {
    item[pointnum++] = t;
    return true;
  } else
    return false;
}

template<class T>
void Lists<T>::visit(void (*pf) (T & t)) {
  for (T tt : item) 
    pf (tt);  
}
#endif //TRY1230_TRY1230_TRY_H