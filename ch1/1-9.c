#include <stdio.h>

#define true 1
#define false 0

int main (){
  
  int c;
  int blankWritten_Q = false;

  while ((c = getchar()) != EOF){
    if (c == ' '){
      if(!blankWritten_Q){
	putchar(c);
	blankWritten_Q = true;
      }
    }
    else{
      putchar(c);
      blankWritten_Q = false;
    }
  }

  return 0;
}
      
      
