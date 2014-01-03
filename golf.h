// golf.h for pe9-1.cpp

#ifndef TRY0101_TRY0101_GOLF_H
#define TRY0101_TRY0101_GOLF_H

class golf {
public:
  golf();
  ~golf();
  golf(golf & g, const char* name, const int hc );
  int SetGolf();
  void Handicap(golf & g, int hc) const;
  void ShowGolf(golf & g) const ;
private:
  static const int kLen =  40;
  char fullname[kLen];
  int handicap;
};



#endif // TRY0101_TRY0101_GOLF_H