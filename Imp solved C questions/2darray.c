

#include<stdio.h>
int main(){
   /* 2D array declaration*/
   int disp[3][30];
   /*Counter variables for the loop*/
   int i, j,m,n;
printf("Enter the number of teacher \n");
scanf("%d", &m);
printf("Enter the number of students \n");
scanf("%d", &n);
   for(i=0; i<m; i++) {
      for(j=0;j<n;j++) {
         printf("Enter the numbers[%d][%d]:", i, j);
         scanf("%d", &disp[i][j]);
      }
   }
   //Displaying array elements
   printf("Two Dimensional array elements:\n");
   for(i=0; i<m; i++) {
      for(j=0;j<n;j++) {
         printf("%d ", disp[i][j]);
         if(j==2){
            printf("\n");
         }
      }
   }
   return 0;
}
