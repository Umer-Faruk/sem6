#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void main(){

     FILE *input,*procode,*symbtab,*opval;
     char sa[20],lc[20],label[20],opcode[20],oprand[20];


     input = fopen("output.txt","r");

     fscanf(input,"%s %s %s %s",sa,label,opcode,oprand);

     printf("H^%s^1008\n",label);

     fscanf(input,"%s %s %s %s",sa,label,opcode,oprand);

     while (strcmp(opcode,"END") !=0)
     {
          printf("\n T^%s^",sa,)
     }
     






     fclose(input);




}