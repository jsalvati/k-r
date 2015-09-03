#include <stdio.h>

#define true 1
#define false 0

/* Write a program that prints its input one word per line. */

int main() {
  int word_Q = 0;
  int c;

  while ((c = getchar()) != EOF){
    
    if ((c == '\n') || (c == ' ') || (c == '\t')){
      if(word_Q){    //we were processing a word
	putchar('\n');
      }
      
      word_Q = false;
    }

    else{
      putchar(c);
      word_Q = true;
    }
  }
  
  return 0;
}
    
