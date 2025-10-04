#include <stdio.h>
int main()
{ float x;
  printf ("enter a bytes:");
  scanf("%f",&x);
  printf("momory in kb : %f\n",x/1024);
  printf("momory in mb : %f\n",x/(1024*1024));
  printf("momory in gb : %f",x/(1024*1024*1024));
  return 0;
}  