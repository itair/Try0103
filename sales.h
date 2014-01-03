#ifndef TRY0101_TRY0101_NAMESPACE_H
#define TRY0101_TRY0101_NAMESPACE_H

namespace SALES {
  const int QUARTERS =4;

  class Sales  {
  private:
    double sales[QUARTERS];
    double average;
    double max;
    double min;
  public:
    Sales();
    ~Sales();
    Sales(const double ar[], const int n); 
    void showSeles();
  };

  
}

#endif //TRY0101_TRY0101_NAMESPACE_H