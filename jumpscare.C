#include <stdio.h>
#include <time.h>

void wait(int seconds) {
  clock_t endwait;
  endwait = clock() + seconds * CLOCKS_PER_SEC;
  while (clock() < endwait) {
  }
}

int main() {
  
  int n;
  int a;
  printf("...살려주세요, 여기 사람이 갇혀있어요.\n\
    목소리가 안 나와요.\n");
  for (n = 0; n < 3; n++)
  {wait(1);}

  while (n>2){
    for (a = 26000; a > 0; a--){
  printf("숨이막혀");
    }
    printf("\n\n 저 여기에 있어요...");
    break;
    }
  
  return 0;
}
