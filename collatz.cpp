#include <iostream>
void cstep(int *p);
int main() {
   int n;
   n = 27;
   int *np = &n;
   while (n > 1) {
      cstep(np);
      std::cout << n << "\n";
   }
   return 0;
}
void cstep(int *p) {
   if (*p % 2 == 0) {
      *p /= 2;
   } else {
      *p = *p * 3 + 1;
   }
}
