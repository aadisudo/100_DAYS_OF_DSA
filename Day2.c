#include<stdio.h>
int main(){
     int a , pos;

    printf("Enter elements to be stored in array: \n");
    scanf("%d",&a);

    int array[a];
    for(int i=0; i<a;i++){
        printf("Enter elements %d: ",i);
        scanf("%d",&array[i]);
    }
    
    scanf("%d", &pos);
    
    // Shift elements left
    for (int i = pos - 1; i < a - 1; i++) {
        array[i] = array[i + 1];
    }
    
    for (int i = 0; i < a - 1; i++) {
        printf("%d", array[i]);
        if (i < a - 2) printf(" ");
    }
    printf("\n");
    
    return 0;
}
