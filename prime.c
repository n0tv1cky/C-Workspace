// #include<stdio.h>

// int Prime(int m) {
//     int isPrime = 1;

//     if(m==0||m==1||m<0) {
//         isPrime = 0;
//     } else {
//         for(int i = 2; i <= m/2; i++) {
//             if(m%i==0) {
//                 isPrime = 0;
//                 break;
//             }
//         }
//     }

//     return isPrime;
// }
// void main() {
//     int n;
//     printf("\nEnter the number to be checked: ");
//     scanf("%d", &n);

//     int ans = Prime(n);

//     if(ans==1) {
//         printf("\nThe given number is a Prime Number");
//     } else {
//         printf("\nThe given number is not a Prime Number");
//     }
// }

#include<stdio.h>
int isprime(int num)
{
    int i;
    if(num==0||num==1)
        return 0;
    for (i=2; i<=num-1; i++)
    {
    if(num%i==0)
        return 0;
    }
return 1;
}

void main ()
{
int num, flag=0;
    printf("\n Enter the number:");
    scanf("%d", &num);
    if(isprime(num)) {
        flag=1;
        printf("\n %d is a prime number \n",num);
    } else {
 printf("\n %d is not a prime number \n",num);
 }
}
