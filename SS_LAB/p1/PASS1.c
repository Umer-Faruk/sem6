#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void main(){

     FILE *input,*output,*symb;
     char label[20],opcode[20],oprand[20];
     int lc,sa;

     input = fopen("input.txt","r");
     output =fopen("OUTput.txt","w");
     symb =fopen("Symbtab.txt","w");
     
     fscanf(input,"%s %s %s",label,opcode,oprand);
     
    sa =strtol(oprand,NULL,16);
    lc=sa;
     fprintf(output, "%X\t%s\t%s\t%s\n", sa, label, opcode, oprand);

          
     fscanf(input,"%s %s %s",label,opcode,oprand);

     
     

while (strcmp(opcode,"END")!=0)
{



     if (strcmp(label,"-") != 0){

          fprintf(symb,"%s \t %X \n",label,lc);

     }


   

     printf("%X %s %s %s\n",lc,label,opcode,oprand);
     if (strcmp(opcode,"BYTE") == 0){

          if(oprand[0] == 'X'){

               lc = lc +(strlen(oprand)-2)/2;

          }
          else {
               lc = lc+ strlen(oprand) -2;
          }


     }

    else  if (strcmp(opcode,"RESB")== 0){
         lc = lc + strtol(oprand,NULL,10);

    }
    else if(strcmp(opcode,"RESW") ==0)
    {
         lc =lc +(3* strtol(oprand,NULL,10));
    }
     else
     {

     lc +=3;
     }
     
     fscanf(input,"%s %s %s",label,opcode,oprand);
}

fclose(input);
fclose(output);
fclose(symb);


}