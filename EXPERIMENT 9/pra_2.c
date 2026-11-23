#include <stdio.h>

struct Product {
    int id;
    char name[50];
    float price;
};

int main() {
    struct Product p[5];
    int i, search;

    for (i = 0; i < 5; i++) {
        printf("\nEnter product details:\n");

        printf("Enter ID: ");
        scanf("%d", &p[i].id);

        printf("Enter Name: ");
        scanf(" %49[^\n]", p[i].name);

        printf("Enter Price: ");
        scanf("%f", &p[i].price);
    }

    printf("\nEnter product ID to search: ");
    scanf("%d", &search);

    for (i = 0; i < 5; i++) {
        if (p[i].id == search) {
            printf("\nProduct Found\n");
            printf("Name: %s\n", p[i].name);
            printf("Price: %.2f\n", p[i].price);
            return 0;
        }
    }

    printf("\nProduct Not Found\n");

    return 0;
}
