#include <iostream>
#include <map>
#include <list>

int main() {

  std::map< std::string,std::list<int> > ilmap;
  int i;
 
  for(i = 0; i < 10000000; i++) {
    std::list<int> l;
    char key[33];
    sprintf(key, "%d", i);
    l.assign(50,100);
    ilmap.insert(std::make_pair(key,l));
  }
  std::cout << "Done.\n";
  std::cin >> i;
}
