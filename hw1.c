#include <stdio.h>
#include <stdlib.h>

void scan_massive(const int *arr, size_t size){
    for(size_t i = 0; i < size; i++){
        scanf("%d", &arr[i]);
    }
}

int print_massive(const int *arr, size_t size, const char* name){
    for(size_t i = 0; i < size; i++){
        printf("MY LOVELY %s[%d] = %d\n", name, i, arr[i]);
    }
    printf("\n");
}

int main (){
    int array_size = 5;
    int penis = 0;
    const char* message = "done for me penis with size =";

    scanf("%d", &penis);

    printf("называл себя фивтовский бог, а по факту %.2fздолиз и \"ЛОХ\" \n", 3.14);

    printf("%%f %s %f\n" 
           "%%d %s %d\n"
           "%%ld %s %ld\n"
           "%%x %s %x\n", 
           message, (float)penis, 
           message, penis, 
           message, (long)penis, 
           message, penis); 

    if(true) {
        printf("ARTEN LOH\n");
    }
    printf("VANIN LOH\n");

    
    int *arr = (int *)calloc(penis, sizeof(int));
    int a[array_size]; //int * a 

    scan_massive(arr, penis);
    scan_massive(a, array_size);

    print_massive(a, array_size, "a");
    print_massive(arr, penis, "arr");

    //TODO : print_massive(arr, size_arr);
    printf("\nэто массив a =%p\n", &a);
    printf("pointer a = %p\n", &a[0]);


    return 0; 
}