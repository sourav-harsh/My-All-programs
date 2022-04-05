 #include<stdio.h>
 int main()
 {
     int temp;

     printf("Enter Temperature:\n ");
     scanf("%d",&temp);

     switch( temp / 10 )
     {

     case 10:
     case 5:
         printf("Its Very Hot\n");
         break;

     case 4:
         printf("Its Hot\n");
         break;
         

     case 2:
         printf("Cold weather\n");
         break;

     case 1:
         printf("Very Cold weather\n");
         break;

     default:
         printf("Freezing weather\n");
         break;

     }

     return 0;
 } 
