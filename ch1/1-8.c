#include <stdio.h>

/* Write a program to count blanks, tabs, and newlines. */

int main() {
  
  int nBlanks = 0, nTabs = 0, nNewlines = 0;
  int c;
  
  while ((c = getchar()) != EOF){
    
    if (c == ' '){
      nBlanks++;
    }
    
    if (c == '\n'){
      nNewlines++;
    }
    
    if (c == '\t'){
      nTabs++;
    }
  
  }

  printf("nBlanks : %i \n", nBlanks);
  printf("nNewLines : %i \n", nNewlines);
  printf("nTabs : %i \n", nTabs);

  return 0;
}
