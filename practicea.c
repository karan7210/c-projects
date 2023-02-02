#include<stdio.h>


int main()  {

int a[10];  

// int b;

// printf("enter the arrays value of b =");
// scanf("%d",&b);

for (int i=0;i<5;i++)
{    printf("Enter the value of arrays =");
    scanf("%d",&a[i]);
}

printf("The value of array is\n");
for(int i = 0; i<5;i++){
    printf("%d\n",a[i]);
  }




    return 0;
}