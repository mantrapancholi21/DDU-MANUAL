#include <stdio.h>

struct Student {
    int id;
    char name[50];
    int m1, m2, m3, total;
};

int main() {
    struct Student s[10], max;
    int i;

    for (i = 0; i < 10; i++) {
        printf("\nEnter details of student %d:\n", i + 1);

        printf("Enter ID: ");
        scanf("%d", &s[i].id);

        printf("Enter Name: ");
        scanf(" %49[^\n]", s[i].name);

        printf("Enter marks of three subjects: ");
        scanf("%d%d%d", &s[i].m1, &s[i].m2, &s[i].m3);

        s[i].total = s[i].m1 + s[i].m2 + s[i].m3;
    }

    max = s[0];

    printf("\nID\tName\t\tSub1\tSub2\tSub3\tTotal\n");

    for (i = 0; i < 10; i++) {
        printf("%d\t%-15s\t%d\t%d\t%d\t%d\n",
        s[i].id, s[i].name, s[i].m1, s[i].m2,
        s[i].m3, s[i].total);

        if (s[i].total > max.total) {
            max = s[i];
        }
    }

    printf("\nStudent with Highest Total Marks:\n");
    printf("ID: %d\n", max.id);
    printf("Name: %s\n", max.name);
    printf("Total Marks: %d\n", max.total);

    return 0;
}
