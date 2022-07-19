#include "ProcBar.h"

void ProcBar(void)
{

  printf("complete\n");
}


void ProcBar_Process(void)
{
  char Bar[ARR_NUM] = { 0 };
  memset(Bar, '\0', ARR_NUM);
  int i = 0;
  const char* lable = "-\\|/";
  for(i = 0; i < ARR_NUM; i++)
  {
    printf("[%-100s]  [%d%%] [%c]\r", Bar, i, lable[i % 4]);
    Bar[i] = '#'; 
    fflush(stdout);
    usleep(300000);
  }

  printf("\n");
}
