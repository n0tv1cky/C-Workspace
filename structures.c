#include<stdio.h>

struct student {
    char name[10];
    int rollNo, testMarks[3];
}stud[20];

void main() {
    int i, n, roll, a, msum = 0, grt = -10000;
    printf("\nEnter the number of students: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++) {
        printf("\nEnter the name of student number %d: ", i+1);
        scanf("%s", stud[i].name);
        printf("\nEnter the roll number student number %d: ", i+1);
        scanf("%d", &stud[i].rollNo);
        printf("\nEnter the 3 test marks of student number %d: ", i+1);
        scanf("%d %d %d", &stud[i].testMarks[0], &stud[i].testMarks[1], &stud[i].testMarks[2]);
    }

    printf("\nEnter the roll number of the student whose details are required: ");
    scanf("%d", &roll);

    for(i = 0; i < n; i++) {
        if(stud[i].rollNo==roll) {
            a = i;
            break;
        }
    }
    
    for(i = 0; i < 3; i++) {
        if(stud[a].testMarks[i]>grt) {
            grt = stud[a].testMarks[i];
        }
    }

    printf("\nThe name of the student is %s", stud[a].name);
    printf("\nThe roll number of the student is %d", stud[a].rollNo);
    printf("\nThe three test marks of the student are %d %d %d, average marks is %d and highest marks is %d", 
    stud[a].testMarks[0], stud[a].testMarks[1], stud[a].testMarks[2], (stud[a].testMarks[0]+stud[a].testMarks[1]+stud[a].testMarks[2])/3, grt);
}