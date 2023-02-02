#include<stdio.h>


int main(){


 
  

  int a[5];
  int b ;

  printf("Enter the 5 integer from the user's\n");
  scanf("%d", &b);
  for(int i = 0; i<b;i++){
    scanf("%d",&a[i]);
  }

 printf("After given the numbers\n");
for(int i = 0; i<b;i++){
    printf("%d\n",a[i]);
  }




    return 0;
}