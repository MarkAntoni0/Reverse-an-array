#include <stdio.h>

int main(int argc, const char * argv[]) {
    int myArray[5] = {1,2,3,4,5};
    int newArray[5];
    
    for(int i=0, j=4;i<5; i++,j--){
        newArray[j] = myArray[i];
    }
    for (int i=0; i<5; i++) {
        printf("%d ",newArray[i]);
    }
    return 0;
}
