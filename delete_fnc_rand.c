
#include <stdio.h>
#include<stdlib.h>
#include<time.h>

void delete(int arr[],int n,int loc){
    for(int i=loc; i<n-1; i++){
        arr[i] = arr[i+1];
    }
}

int main(){
   int arr[50];
   int n,loc;

   printf("Enter Number of values you want :");
   scanf("%d", &n);
    
   srand(time(NULL));
   for(int i=0; i<n; i++){
      arr[i] = rand();
      printf("%d\n",arr[i]);
   }

   printf("Enter index for deleting the value : ");
   scanf("%d", &loc);
   if(loc>=n || loc<0){
    printf("Invalid Location !!");
    return 0;
   }

//    for(int i=loc; i<n-1; i++){
//         arr[i] = arr[i+1];
//    }

   for(int i=0; i<n-1; i++){
    printf("%d ",arr[i]);
   }

   
    return 0;
}
