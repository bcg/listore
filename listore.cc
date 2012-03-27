#include "stdio.h"
#include <iostream>
#include <map>
#include <vector>

int main() {

  std::map< long int,std::vector<unsigned short> > ilmap;
  int i;
 
  for(i = 0; i < 10000000; i++) {
    std::vector<unsigned short> l;
    l.assign(10,10000);
    ilmap.insert(std::make_pair(i,l));
  }
  std::cout << "Done.\n";
  std::cin >> i;
}
