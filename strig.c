HW 7 APRIL STRING CLASS 
// code for the checking the numbr of a character in the string or length of string 
#include<stdio.h>
/* #include<string.h> we are not use the string.h library because we are built up our string in built code so we not 
need of to include the string.h library 
*/

int mystrlen(char *p);// forward declaration of the my strlen function
int mystrlen(char *p)
{
    int count;
    count =0;
    while(*p!='\0')
    {
        count ++;
        p++;

    }
    return count;
}
int main()
{
    #define MAX 10
   char s[MAX]="want";
   printf("number of character in the string is %d\n",mystrlen(s));
}

// CODE 2  CODE FOR mystrcpy 

#include<stdio.h>
void mystrcpy(char *destination,char *source );// forward declaration for the function mystrcpy
void mystrcpy(char *destination, char *source)
{
    while(*source!='\0')
    {
        *destination=*source;
        source++;
        destination++;
    }
    *destination='\0';
    printf("destination string is %s\n",destination);
    // null character is assign to the destination string
}
int main()
{
    printf("copy the string in the destination array \n");
    char destination[20];
    char source[]="yaswant";
    mystrcpy(destination,source);
    // your mistake in this code is your code is work properly but you are not print the destination string
   // printf("destination string is %s\n",destination);
}

// code 3 implemetation of the code strrev by own 
#include<stdio.h>
#include<string.h>
void strrev(char *str,int n);// forward declaration of the code 
void strrev(char *str,int n)
{
    int i;
    char name[n];
    for(i=n-1;i>=0;i--)
    {
        name[n-1-i]=str[i];
    }
    name[n]='\0';
    printf("%s",name);
}
int main()
{
    int length=strlen("yashwant");
    strrev("yashwant",length);
}


// code 4 implemetation of the code strcat 
#include<stdio.h>
void strcat(char *destination,char *source);// forward decleration of he code strcat
void strcat(char *destination,char *source)
{
    while(*destination!='/0')
    {
        destination++;
       while(*source!='/0')
       {
          destination=*s;
          source++;
          destination++;
       }
       *destination='/0';
       printf("%s",destination);

    }
}
int main(){
    char destination[100]="yashwant";
    char source[100]="kumar";
    strcat(destination,source);
    
}



