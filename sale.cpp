#include "sales.h"
#include <iostream>

namespace SALES{

  Sales::Sales(const double ar[], const int n) {
     if (n <= 0 || n > 4) return ;
    int i = n;
    double temp(0.0), tol(0.0);
    max = min = ar[i-1];
    while (--i >= 0) {
     temp = ar[i];
      sales[i] = temp;
      tol += temp;
      max = temp > max ? temp : max;
     min = temp < min ? temp : min;
    }
    average = tol / n;
    return;
  }

  Sales::Sales() {
   std::cout << "Enter 4 double sales:\n";
   double temp(0.0), tol(0.0);
    int n = 4;
    int i = n ;
    if(std::cin >> temp) {
       average = sales[--i]= max = min = temp;
       while ((--i >= 0) && std::cin >> temp) {
       sales[i] = temp;
        tol += temp;
        max = temp > max ? temp : max;
       min = temp < min ? temp : min;
      }
      average = tol / n;
   } 
  }

  Sales::~Sales() {}

  void Sales::showSeles() {
    using namespace std;
     cout << " Sales:\n" 
          << sales[0] << endl 
          << sales[1] << endl 
          << sales[2] << endl 
          << sales[3] 
          << "\naverage: " << average 
          << "\nmax: " << max << "\nmin: " << min << endl; 
   return;
  }
}