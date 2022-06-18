#include<conio.h>
#include<stdio.h>
int main(){
    int n;
    int sotachra;
    int s = 0;
    printf("Enter number: ");
    scanf("%d",&n);
    for(;n!=0;){
        sotachra = n % 10;
        s += sotachra;
        n /= 10;
    }    
    printf("Total digits: %d",s);
}
