#include <stdio.h>

int main(){
    char x = 1;
    int y = 1;
    long z = 1;

    printf("x address hex:%p\n", &x);
    printf("x address decimal:%ld\n", &x);
    printf("y address hex:%p\n", &y);
    printf("y address decimal:%ld\n", &y);
    printf("z address hex:%p\n", &z);
    printf("z address decimal:%ld\n", &z);

    // There is a difference of one between the char and int addresses.
    // This is because char takes up one byte.
    // As such, there is a difference of 4 between the int and long addresses.

    int *xp =&x;
    int *yp =&y;
    int *zp =&z;

    printf("\nxpointer :%p\n",xp);
    printf("ypointer :%p\n",yp);
    printf("zpointer :%p\n\n",zp);

    *xp = 2;
    *yp = 2;
    *zp = 2;

    printf("modified x: %hi\n",x);
    printf("modified y: %d\n",y);
    printf("modified z: %ld\n\n",z);

    unsigned int u = 421421;
    int *iup = &u;
    char *cup = &u;

    printf("iup: %p iup points to: %d\n",iup,*iup);
    printf("cup: %p cup points to: %d\n\n",cup,*cup);

    printf("decimal u: %u   hex u:%x\n\n",u,u);
    
    printf("Bytes in u decimal:\n");
    int i = 0;
    for(i; i<4;i++){
        printf("%hhu\n",*(cup+i));
    }
    printf("\nBytes in u hex:\n");

    for(i=0; i<4; i++){
        printf("%hhx\n",*(cup+i));
    }


    printf("\nIncrementing each byte and effects:\n");
    for (i=0; i<4;i++)
    {
        *(cup + i)+=1;
        printf("decimal u: %u   hex u:%x\n",u,u);
    }

    printf("\nBytes in u decimal:\n");
    for(i=0; i<4;i++){
        printf("%hhu\n",*(cup+i));
    }
    printf("\nBytes in u hex:\n");

    for(i=0; i<4; i++){
        printf("%hhx\n",*(cup+i));
    }

    printf("\nIncrementing each byte and effects:\n");
    for (i=0; i<4;i++)
    {
        *(cup + i)+=16;
        printf("decimal u: %u   hex u:%x\n",u,u);
    }

    printf("\nBytes in u decimal:\n");
    for(i=0; i<4;i++){
        printf("%hhu\n",*(cup+i));
    }
    printf("\nBytes in u hex:\n");

    for(i=0; i<4; i++){
        printf("%hhx\n",*(cup+i));
    }

//First byte increases the number by n. n being the increment
//Second byte increases it by 256n.
//Third byte increases it by 256^2 * n.
//Fourth byte increases it by 256^3 * n.
//A byte represents 256 different values. So I guess it has something to do with that? Not too sure.

}
