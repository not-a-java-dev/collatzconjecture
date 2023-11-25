#include <iostream>
void cstep(int *p);
int main() {
   int n;
   //get input
   std::cout << "Input: ";
   std::cin >> n;
   if (std::cin.fail()) {
      //nuh uh that aint good input please dont do that
      std::cout << "Please enter a number\n";
      return -1;
   }
   int *np = &n;
   //you know the drill
   while (n > 1) {
      cstep(np);
      std::cout << n << "\n";
   }
   return 0;
}
void cstep(int *p) {
   //if n is even divide by 2
   if (*p % 2 == 0) {
      *p /= 2;
   //if not then multiply by 3 and add 1
   } else {
      (*p) *= 3;
      (*p)++ ;
   }
}
