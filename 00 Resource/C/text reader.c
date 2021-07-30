/*
 * File:   main.c
 * Author: Prosonul Haque
 * Description: Read text file line by line, convert each number into integer, 
   sum them up and output the average on the screen.
   Date: Aug 11, 2020	 
 */
 
#include <stdio.h>
#define MAXCHAR 7

int main() {
	int num=0, total=0, count=0;
    double avg=0;
	FILE *fp;
    char data[MAXCHAR];
    char* filename = "W_lzvc89Eem06hL8prFFBA_161b31dd311a49239814cf1dff0bec18_elephant_seal_data.txt";
 
    fp = fopen(filename, "r");
    
    //The fgets function reads a sequence of character, i. e., a character string from an input stream.
    while (fgets(data, MAXCHAR, fp) != NULL){
		//printf("%s\n", data);
		num = atoi(&data);
		total += num;
		count += 1;    
	}
	
    fclose(fp);
    //printf("Total = %d\nCount = %d\n", total, count);
    avg = total/count;
	printf("Average seal weight = %lf", avg);
    return 0;
}
