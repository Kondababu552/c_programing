#include <stdio.h>
int main()
{
  int i,a,b,c,n;
 a = 2, b = 3;
  c = a + b;
  printf("Enter the number of terms: ");
  scanf("%d", &n);
  printf("Fibonacci Series: %d, %d, ", a, b);
  for (i = 1; i <= n; ++i) 
  {
    printf("%d, ",c);
    a = b;
    b = c;
    c = a+ b;
  }

  return 0;
}
