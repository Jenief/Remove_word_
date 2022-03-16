
#include<stdio.h>
#include<conio.h>
#include<string.h>
void removeChar(char * str, char charToRemmove){
    int i, j;
    int len = strlen(str);
   
    
}

void main(){
	 char str[100],ch,c;
	 int i,j,len;
	 printf("enter the string : \n");
	 scanf("%[^\n]%c",str,&c);
	 printf("enter a char you want to remove : ");
	 scanf("%c",&ch);
	 //removeChar(str,ch);
	 len =strlen(str);
	 for(i=0;i<len;i++)
	 {
	     if(str[i] == ch)
	     {
	         for(j=i;j<len;j++)
	         {
	             str[j]=str[j+1];
	         }
	         len--;
	         i--;
	     }
	 }
	 printf("String after removing '%c': %s", ch, str);
	 //getch();
 } 
