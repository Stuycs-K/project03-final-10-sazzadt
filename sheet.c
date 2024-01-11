#include "sheet.h"

int checkNum(char* s) {
  int no_letters = 1;
  for(int i = 0; i < strlen(s) && no_letters; i++) {
    if(!isdigit( s[i] )) {
      no_letters = 0;
    }
  }
  return no_letters;
}

void userPrompt(char* dest, char* message) {
  char buff[BUFF_SIZE];
  printf("%s", message);
  fgets(buff, BUFF_SIZE, stdin);
  buff[strlen(buff) - 1] = '\0';
  strcpy(dest, buff);
}

int* prompt() { 
    static int dims[2];
    char last_input[BUFF_SIZE];
    int proper_input = 0;
    while(!proper_input) {
      userPrompt(last_input, "Enter the # of rows in the spreadsheet: ");
      proper_input = checkNum(last_input);
      if(proper_input == 0) {printf("Please enter a positive number only!\n");}
    }
    sscanf(last_input, "%d", &dims[0]);
    
    proper_input = 0;
    while(!proper_input) {
      userPrompt(last_input, "Enter the # of cols in the spreadsheet: ");
      proper_input = checkNum(last_input);
      if(proper_input == 0) {printf("Please enter a positive number only!\n");}
    }
    sscanf(last_input, "%d", &dims[1]);

    return dims;
}

void initialize(struct sheet s) {
  s.data = calloc(s.dim[0] * s.dim[1], sizeof(int));
  err("Initialize sheet");
}

void displayRow(int* row, int num_cols) {
  printf("[");
  for(int c = 0; c < num_cols; c++) {
    if(c == num_cols - 1) { printf("%d]\n", row[c]); }
    else { printf("%d, ", row[c]); }
  }
}

void display(struct sheet s) {
  for(int r = 0; r < s.dim[0]; r++) {
    displayRow(s.data[r], s.dim[1]);
  }
}

void err(char*message){
  if(errno < 0){
	  printf("Error: %s - %s\n",message, strerror(errno));
  	exit(1);
  }
}