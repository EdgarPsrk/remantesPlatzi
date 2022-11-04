#include <iostream>
using namespace std;
int main()
 {
   int dir = 20;
   int dir1 = 30;
   int * apuntDir;

   cout << apuntDir << endl;
   cout << * apuntDir << endl;
   cout << dir << endl;
   cout << dir1 << endl;
   cout << &dir << endl;
   cout << &dir1 << endl;

   apuntDir = &dir;
   * apuntDir = dir1;
   std::cout << dir << '\n';
   std::cout << dir1 << '\n';



   return 0;
 }
