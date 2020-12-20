//-----------------------------------------------------------------------------
//Project Name:     hello/hello-world.c
//Description:      A small example project, to try out git on macOS using
//                  commandline and atom built in tools.
//-----------------------------------------------------------------------------
//Author:           laazyLlama
//Date Created:     20/12/2020
//Last Changes:     20/12/2020
//-----------------------------------------------------------------------------

#include <stdio.h>

int main(int argc, char *argv[]) {
  if(argc == 2)
    printf("Hello %s!\n", argv[1]);
  else if(argc > 2)
    printf("Too many arguments supplied!\n");
  else
    printf("Hello World!\n");
  printf("This is my first commandline created git repo.\n");
  return 0;
}
