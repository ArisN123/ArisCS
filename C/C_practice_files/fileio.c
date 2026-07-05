// Chapter 9 — File I/O
// Exercise: Log file summarizer

// Create a file called log.txt like this:

// INFO Program started
// ERROR Missing file
// INFO Retrying
// WARNING Slow response
// ERROR Failed again

// Write a program that reads the file and creates summary.txt.

// summary.txt should contain:

// Total lines: 5
// INFO: 2
// WARNING: 1
// ERROR: 2

// Errors:
// 2: ERROR Missing file
// 5: ERROR Failed again

// Your program should use fopen(), fgets(), fprintf(), and fclose(). Print file-opening problems to stderr.

// This is one task: read a log and generate a useful report.


#include <stdio.h>

int main(){

    FILE *log;
    char line[2000];
    log = fopen("log.txt","r");
    int line_count = 0;
    char* error_text;
    int error_count = 0;
    int warning_count = 0;
    int info_count = 0;
    char error_log[20];
    int error_log_count = 0;
    FILE *summary = fopen("summary.txt","w");
     
    fprintf(summary, "Errors:\n");
    

    while(fscanf(log,"%s", error_text) != EOF){
        fgets(line, sizeof line, log);
        ++line_count;
         if(error_text[0] == 'W'){
            warning_count += 1;
         }
          if(error_text[0] == 'E'){ 
            error_count += 1;
            fprintf(summary,"%d: %s%s", line_count,error_text, line);
         }
          if(error_text[0] == 'I'){
            info_count += 1;
         }
    }

        fprintf(summary, "\n\nTotal Lines: %d\nINFO: %d\nWARNING: %d\nERROR: %d\n",line_count,info_count,warning_count,error_count);





  fclose(log);
    fclose(summary);




}