#include <iostream>

long long lcm_naive(int a, int b) {
  for (long l = 1; l <= (long long) a * b; ++l)
    if (l % a == 0 && l % b == 0)
      return l;

  return (long long) a * b;
}


int gcd_fast(long long a,long long b){


  if(b==0)
      
    return a;
  else

    return gcd_fast(b,a%b);
}
int icm(long long a,long long b){
  long long d = gcd_fast(a,b);
  return ((long long)a*b)/d;

}

int main() {
  int a, b;
  std::cin >> a >> b;
  std::cout << lcm_naive(a, b) << std::endl;
  return 0;
}
