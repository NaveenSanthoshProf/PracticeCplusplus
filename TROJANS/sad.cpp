#include

int *func2(int x, int y);

int (*func3)(int m, int n);

int *func2(int x, int y)

{

    int *z;

    z=x+y;

    return(z);

}

int main()

{

    int a,b,*c;

    a=10;

    b=20;

    func3=&func2;

    c=(*func3)(a,b);

    printf("%d",*c);

}
