#include <stdio.h>
//#include <conio.h>

int Linear_Search(int*, int, int);

int main() {

    int i,n,item, Array[100], position;
    printf("Enter the array length:");
    scanf("%d",&n);

    for (i = 0; i < n; i++){
        scanf("%d",&Array[i]);}


    printf("Enter the item\n");
    scanf("%d",&item);

     position = Linear_Search(Array,n, item);

     if(position == -1)
        printf("%d not found!\n",item);
   else
        printf("%d found at index:%d\n",item,position);

    return 0;
}
int Linear_Search(int *arr, int n, int key) {
    int id;
    for ( id= 0; id < n; id++) {
        if (*(arr+id)== key) {
            return id;
        }
    }
    return -1;
}

