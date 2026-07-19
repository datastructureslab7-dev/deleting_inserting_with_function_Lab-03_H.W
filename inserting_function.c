#include <stdio.h>

void insert(int n,int arr[n+1], int loc){
    for(int i=n; i>loc; i--){
        arr[i] = arr[i-1];
    }
    return;
}
int main(){
   int n;
   printf("How many values you want to input : ");
   scanf("%d", &n);

   int arr[n+1];

    printf("Enter elements : ");
   for(int i=0; i<n; i++){
      scanf("%d", &arr[i]);
   }

   int loc; 
   printf("Enter Location : ");
   scanf("%d", &loc);
    if(loc>n){
        printf("Input valid Location");
        return 0;
    }
    
   int item; 
   printf("Enter the item you want to input : ");
   scanf("%d", &item);

//    for(int i=n; i>=loc; i--){
//         arr[i] = arr[i-1];
//    }

    insert(n,arr,loc);

   arr[loc] = item;


   for(int i=0; i<=n; i++){
     printf("%d ",arr[i]);
   }


    return 0;
}