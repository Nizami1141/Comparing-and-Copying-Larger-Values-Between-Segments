#include<stdio.h>

int main() {
    int src1[] = {4,6,3,78,47,49,1,89,23,12,0};
    int src2[] = {90,2,5,24,81,56,2,73,14,15,1};
    int src3[11]; 

    for (int i = 0; i < 11; i++) {
        if (src1[i] > src2[i]) {  
            src3[i] = src1[i];    
        } 
        else {
            src3[i] = src2[i];    
        }
    }

    for (int i = 0; i < 11; i++) {
        printf("%d ", src3[i]);
    }

    return 0;
}
