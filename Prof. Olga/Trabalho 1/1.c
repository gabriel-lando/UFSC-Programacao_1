#include <stdio.h>

int main(){
    const int arraySize = 10;
    int i, a[arraySize], b[arraySize];

    for ( i = 0; i < arraySize; i++ )
        b[i] = i;

    for ( i = arraySize -1; i >=0; i-- )
    {
        if (i%2 == 0)
            a[i] = b[i]++;
        else
            a[i] = ++b[i];
    }

    for ( i = 0; i < arraySize; i++ )
        printf("%d\n", a[i]);
    
}
