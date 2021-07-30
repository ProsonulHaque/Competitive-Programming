/*
 * File:   main.c
 * Author: zentut.com
 * Description: Read text file line by line and output it to
 *              the screen.
 */
 
#include <stdio.h>
#define MAXCHAR 7

int main() {
	int num=0, total=0, i=0;
	int weight[4];
    FILE *fp;
    char data[MAXCHAR];
    char* filename = "W_lzvc89Eem06hL8prFFBA_161b31dd311a49239814cf1dff0bec18_elephant_seal_data.txt";
 
    fp = fopen(filename, "r");
    
    while (fgets(data, MAXCHAR, fp) != NULL){
    	for (i=0; i<4; i++)
    		weight[i] = data[i];
		//printf("%s", data);
		total += (weight[0]*1000 + weight[1]*100 + weight[2]*10 + weight[3]);
		num += 1;    
	}
	
    fclose(fp);
    printf("Average seal weight = %.2f", total/num);
    return 0;
}
