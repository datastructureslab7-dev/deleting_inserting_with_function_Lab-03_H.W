
#include <stdio.h>
#include<stdlib.h>
#include<time.h>

void insert(int arr[50], int n, int loc){
    for(int i=n; i>=loc; i--){
        arr[i] = arr[i-1];
    }
}

int main(){
   int arr[50];
   int n,loc,item;

   printf("Enter Number of values you want :");
   scanf("%d", &n);
    
   srand(time(NULL));
   for(int i=0; i<n; i++){
       arr[i] = rand();
       printf("%d\n", arr[i]);
   }

   printf("Enter Location :");
   scanf("%d", &loc);
   if(loc>n || loc<0){
    printf("Invalid Location!!");
    return 0;
   }
   printf("Enter the value you want to input :");
   scanf("%d", &item);

//    for(int i=n; i>=loc; i--){
//        arr[i] = arr[i-1];
//    }

    insert(arr,n,loc);

   arr[loc] = item;

   for(int i=0; i<=n; i++){
    printf("%d ",arr[i]);
   }


    return 0;
}
