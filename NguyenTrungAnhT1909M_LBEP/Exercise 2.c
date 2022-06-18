#include<stdio.h>

#include<string.h>

#define max 100

char lowerCase(char s[])

{

                                             int i;

                                             for(i=0;i<strlen(s);i++)

                                             {

                                                if(s[i]>='A' && s[i]<='Z')

                                                {

                                                            s[i]=s[i]+32;

                                                }          

                                             }

                                             printf("Upper Case: %s",s);

}

int main()

{

                                             char s[max];

                                             printf("Enter string: ");

                                             gets(s);

 

                                             lowerCase(s);

}
