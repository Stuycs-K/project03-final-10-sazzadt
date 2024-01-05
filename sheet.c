#include "sheet.h"

int prompt() { 
    int r,c;
    char buff[BUFF_SIZE];
    int proper_input = 0;
    while(!proper_input) {
      printf("Enter the # of rows in the spreadsheet (only numeric characters): ");
      int letter_found = 0;
      fgets(buff, BUFF_SIZE, stdin);
      buff[strlen(buff) - 1] = '\0';
      for(int i = 0; i < strlen(buff) && !letter_found; i++) {
        if(!isdigit( buff[i] )) {
          printf("Please enter only numeric characters, no negatives\n");
          letter_found = 1;
        }
      }
      if(letter_found == 0) {proper_input = 1;}
    }
    r = (int) (buff);
    printf("Rows: %s", buff);
}

void err(int i, char*message){
  if(i < 0){
	  printf("Error: %s - %s\n",message, strerror(errno));
  	exit(1);
  }
}