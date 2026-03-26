#include<stdio.h>
int main(){
    int a , pos , temp;

    printf("Enter elements to be stored in array: \n");
    scanf("%d",&a);

    int array[a];
    for(int i=0; i<a;i++){
        printf("Enter elements %d: ",i);
        scanf("%d",&array[i]);
    }
    
    scanf("%d %d", &pos, &temp);

    for (int i = a; i >= pos; i--) {
        array[i] = array[i - 1];
    }

    array[pos - 1] = temp;

    for (int i = 0; i <= a; i++) {
        printf("%d", array[i]);
        if (i < a) printf(" ");
    }
    printf("\n");
    return 0;
}