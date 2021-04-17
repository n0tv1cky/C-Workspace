#include<stdio.h>
#include<math.h>

void main() {
    float a, b, c, disc, root1, root2, root;

    printf("\nEnter the values of a, b and c: ");
    scanf("%f %f %f", &a, &b, &c);

    if(a==0) {
        root = -c/b;
        printf("\nThe linear root of the equation is %f", root);
    } else {
        disc = b*b - 4*a*c;

        if(disc>0) {
            root1 = (-b+sqrt(disc))/(2*a);
            root2 = (-b-sqrt(disc))/(2*a);
            printf("\nThe roots of the equation are %f and %f", root1, root2);
        } else if(disc<0) {
            printf("\nThe roots of the equation are imaginary");
        } else {
            root = -b/(2*a);
            printf("\nThe root of the equation is %f", root);
        }
    }
}