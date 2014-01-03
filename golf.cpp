// golf .cpp pe10.3

#include "golf.h"
#include "iostream"

golf::golf() {
  strcpy_s(fullname,"Itair Catsharp");
  handicap= 100;
}
golf::~golf() {

};
golf::golf(golf & g, const char* name, int hc ) {
  using namespace std;  
  if (hc < 0 || strlen(name) == 0 ) {
    cout << "Wrong input.\n";
    return;
  } else {
    int len = strlen(name)>=kLen ? strlen(name) : kLen;
    for (int i = 0; i < len ; i++)
      g.fullname[i] = name[i];
    }
  g.handicap = hc;
  return ;
}

int golf::SetGolf() {
  using namespace std;
  cout << "\nEnter number name: ";
  golf temp;
  char next;
  cin.get(temp.fullname, kLen);
  if (*temp.fullname == '\0') 
    return 0; 
  if (cin) {
     cin.get(next);
    while (next != '\n')
      cin.get(next);
  }
  cout << "Enter number's handicap: ";
  cin >> temp.handicap;
  cin.get(); //输入重置
  *this = temp; // 引用传值
  return 1;
} 

void golf::Handicap(golf & g, int hc) const {
  if (hc >= 0)
    g.handicap = hc;
  return;
}

void golf::ShowGolf(golf & g) const {
   using namespace std;
  cout << "\nGolf numbers info list\n" << "Name: " << g.fullname << endl
       << "Level: " << g.handicap << endl; 
}