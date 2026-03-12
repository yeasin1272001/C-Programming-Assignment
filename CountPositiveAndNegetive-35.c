#include <stdio.h>
int main() {
 int n, pos = 0, neg = 0;
 for (int i = 1; i <= 5; i++) {
 printf("Enter number %d: ", i);
 scanf("%d", &n);
 if (n > 0) pos++;
 else if (n < 0) neg++;
 }
 printf("Positive = %d, Negative = %d\n", pos, neg);
 return 0;
}
