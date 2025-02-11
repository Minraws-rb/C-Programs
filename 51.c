#include <stdio.h>

void swap(int *a,int *b){  
    int temp=*a; 
    *a=*b;  
    *b=temp; 
}

void swapArithmetic(int *a,int *b){  
    *a=*a+*b;
    *b=*a-*b;
    *a=*a-*b;
}

void swapXOR(int *a,int *b){  
    *a=*a^*b;
    *b=*a^*b;
    *a=*a^*b;
}

void swapPointers(int **a,int **b){  
    int *temp=*a;
    *a=*b;
    *b=temp;
}

int main(){  
    int x=10,y=20;
    
    printf("Before:x=%d,y=%d\n",x,y);
    swap(&x,&y);
    printf("After temp var:x=%d,y=%d\n",x,y);

    swapArithmetic(&x,&y);
    printf("After arithmetic:x=%d,y=%d\n",x,y);

    swapXOR(&x,&y);
    printf("After XOR:x=%d,y=%d\n",x,y);

    int *px=&x,*py=&y;
    swapPointers(&px,&py);
    printf("After pointer swap:x=%d,y=%d\n",*px,*py);

    return 0;
}
