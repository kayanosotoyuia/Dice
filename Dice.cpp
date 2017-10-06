#include <iostream>
#include <math.h>
#include <stdio.h>      /* printf, NULL */
#include <stdlib.h>     /* srand, rand */
#include <time.h>       /* time */

using namespace std;

int main()
{
  int d;     // ダイスの数
  int max;   // 最大値

  int ret = 0;

  printf("振るダイスの数: ");
  scanf("%d", &d);
  printf("最大値: ");
  scanf("%d", &max);


  for(int i = 0; i < d; i++){
    srand((unsigned int)time(NULL));
      ret  +=  rand() % max;
   }

    printf("%d\n",ret);

    return 0;
}
