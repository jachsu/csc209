#include <stdio.h>
#include <stdlib.h>

int main() {
  int err = 0;
  char phone[11];
  int i;
  scanf("%s", phone);
  while (scanf("%d", &i) != EOF){
    if (i==0){
      printf("%s\n",phone);
    }
    else if (1<=i && i<=9){
      printf("%c\n", phone[i]);
    }
    else {
      err = 1;
      printf("ERROR\n");
    }
  }
  printf("%d\n", err);
  return err;
}
