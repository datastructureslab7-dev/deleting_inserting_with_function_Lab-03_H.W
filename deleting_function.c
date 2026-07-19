#include <stdio.h>

int delete(int n,int arr[n],int loc){
    for(int i=loc; i<n-1; i++){
        arr[i]= arr[i+1];
    }

}
int main(){
   int n,loc;
   printf("Enter Number of elements :");
   scanf("%d", &n);

   int arr[n];
   printf("Enter values :");
   for(int i=0; i<n; i++){
    scanf("%d", &arr[i]);
   }

   printf("Enter index number for deleting value :");
   scanf("%d", &loc);

//    for(int i=loc; i<n-1; i++){
//         arr[i] = arr[i+1];
//    }

   delete(n,arr,loc);

   for(int i=0; i<n-1; i++){
    printf("%d ",arr[i]);
   }


    return 0;
}