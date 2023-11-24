#include <iostream>
void cstep(int *p);
int main() {
   int n;
   //im not going to document anything since not a single person will see this
   std::cout << "Input: ";
   std::cin >> n;
   if (std::cin.fail()) {
      std::cout << "Please enter a number\n";
      return -1;
   }
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
