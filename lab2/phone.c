#include <stdio.h>
#include <stdlib.h>

int main() {
  char phone[11];
  int i;
  scanf("%s", phone);
  scanf("%d", &i);
  if (i==0){
    printf("%s\n",phone);
    return 0;
  }
  else if (1<=i && i<=9){
    printf("%c\n", phone[i]);
    return 0;
  }
  else {
    printf("ERROR\n");
    return 1;
  }

}
