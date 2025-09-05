//Q23: Write a program to calculate a library fine based on late days.

#include <stdio.h>

int main(){

    int n,fine;
    printf("Enter no of late days: ");
    scanf("%d",&n);

    if (n<=7){
        fine = n*2;
        printf("Fine is %d Rupees\n",fine);
    }else if(n<=14){
        fine = n*4;
        printf("Fine is %d Rupees\n",fine);
    }else if(n<=30){
        fine = n*6;
        printf("Fine is %d Rupees\n",fine);
    }else{
        printf("Membership Cancelled\n");
    }

    return 0;
}
