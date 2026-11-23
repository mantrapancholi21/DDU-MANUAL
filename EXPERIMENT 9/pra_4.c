#include <stdio.h>

struct Item {
    char name[50];
    float price;
    int quantity;
};

void update(struct Item *i, float p, int q) {
    i->price = p;
    i->quantity = q;
}

int main() {
    struct Item item;
    float newPrice;
    int newQuantity;

    printf("Enter item name: ");
    scanf(" %49[^\n]", item.name);

    printf("Enter item price: ");
    scanf("%f", &item.price);

    printf("Enter item quantity: ");
    scanf("%d", &item.quantity);

    printf("\nEnter updated price: ");
    scanf("%f", &newPrice);

    printf("Enter updated quantity: ");
    scanf("%d", &newQuantity);

    update(&item, newPrice, newQuantity);

    printf("\nUpdated Item Details:\n");
    printf("Name: %s\n", item.name);
    printf("Price: %.2f\n", item.price);
    printf("Quantity: %d\n", item.quantity);

    return 0;
}
