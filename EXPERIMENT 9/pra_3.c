#include <stdio.h>
#include <string.h>

struct Product {
    int id;
    char name[50];
    float price;
};

int main() {
    struct Product p[5], temp;
    int i, j;

    for (i = 0; i < 5; i++) {
        printf("\nEnter product details:\n");

        printf("Enter ID: ");
        scanf("%d", &p[i].id);

        printf("Enter Name: ");
        scanf(" %49[^\n]", p[i].name);

        printf("Enter Price: ");
        scanf("%f", &p[i].price);
    }

    for (i = 0; i < 5; i++) {
        for (j = i + 1; j < 5; j++) {
            if (strcmp(p[i].name, p[j].name) > 0) {
                temp = p[i];
                p[i] = p[j];
                p[j] = temp;
            }
        }
    }

    printf("\nProducts in Alphabetical Order:\n");
    printf("\nID\tName\t\tPrice\n");

    for (i = 0; i < 5; i++) {
        printf("%d\t%-15s\t%.2f\n",
        p[i].id, p[i].name, p[i].price);
    }

    return 0;
}
