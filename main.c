// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>

// C File handling
// 1. Stream-oriented data files - the data is stored in the same manner as it appears on the screen
// 2. System-oriented data files - the data files are more closely associated with the OS

// C File Operations
// creation of a new file, opening a file, reading a files contents, writing data in a file, closing a file

// Steps for Processing a File
// 1. Declare a file pointer variable
// 2. Open a file using fopen() function
// 3. Process the file using the suitable function
// 4. Close the file using fclose() function

// fopen[open a file], fclose[close a file], getc[read a character from the file], 
// putc[write a character to a file], getw[read an integer from a file], putw[write an integer to a file],
// fprintf[prints formatted output into a file], fscanf[reads formatted input from a file], fgets[read string of characters from a file],
// fputs[writes string of characters into a file], feof[detect End of File marker in a single file]

// int main(){
//   // FILE *fopen(const char * filePath, const char * mode);
//   FILE *fp;
//   fp = fopen("filename.txt", "w"); // the file is being opened for "writing"["w"]
//   // processing of the file
//   fprintf(fp, "%s", "Hello World");
//   // end of processing
//   fclose(fp);
//   return 0;
// }

// ------------------------------------------------------------------------------------------------
// File Handling Part 2

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
  FILE *fileName; // pointer variable (1st step) for handling files in C
  char ch[100];
  fileName = fopen("filename.txt", "r"); // "r" for "read". Setting the mode for fopen.
  printf("%s", fgets(ch, 50, fileName)); // (where to save the characters, the count of how many characters to save into ch, the file name)
  fclose(fileName);
  return 0;

  // getc - reads a character from a file
  // getw - reading an integer from a file
  // fgets - reads string of characters from a file
  // writing into the file
  // putc, putw, fprintf, fputs, 
}