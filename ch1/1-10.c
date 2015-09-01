#include <stdio.h>

#define true 1
#define false 0

/* Copy input to output, replacing tab by \t, backspace by \b and each backslash by \\ */

int main(){

  int c;

  while((c = getchar()) != EOF){

    if (c == '\t'){
      putchar('\\');
      putchar('t');
    }
    else if (c == '\b'){
      putchar('\\');
      putchar('b');
    }
    else if (c == '\\'){
      putchar('\\');
      putchar('\\');
    }
    else{
      putchar(c);
    }

  }

  return 0;
}
