#include <stdio.h>

struct User
{
    char name[20];
    char date[50];
    int mobile;
};

struct N
{
    int f;
    int s;
    int r;

} n;

int main()
{
    /*
    struct User u1;

    //problem solve-2
    gets(u1.name);
    gets(u1.date);
    scanf("%d", &u1.mobile);

    printf("Name: %s\nDOB: %s\nMobile: %d\n", u1.name, u1.date, u1.mobile);

    //problem solve-2
    scanf("%d %d", &multi1.first, &multi1.sec);
    multi1.res = multi1.first * multi1.sec;

    printf("Product of the above tow integet: %d\n", multi1.res);
    */
    // problem -3

    scanf("%d %d", &n.f, &n.s);

    int sum = n.f + n.s;
    printf("Sum: %d\n", sum);

    int diff = n.f - n.s;
    printf("Difference: %d\n", diff);

    int product = n.f * n.s;
    printf("product: %d\n", product);
    return 0;
}
