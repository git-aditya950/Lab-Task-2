#include<stdio.h>
struct Car{
    int carID;
    char model[50];
    float RatePerDay;
};
int main(){
    struct Car cars[3];
    int days;
    float totalCost = 0;
    for (int i = 0; i < 3; i++) {
        printf("Enter the Car ID, Model, and Rental Rate per Day for car %d: ", i + 1);
        scanf("%d %s %f",&cars[i].carID,cars[i].model,&cars[i].RatePerDay);
    }
    printf("Enter the number of days to rent the cars: ");
    scanf("%d", &days);
    for(int i=0;i<3;i++){
        totalCost+=cars[i].RatePerDay*days;
    }
    printf("\nCar Rental Information:\n");
    for(int i=0;i<3;i++){
        printf("Car ID: %d, Model: %s, Rate per Day: %.2f\n", cars[i].carID, cars[i].model, cars[i].RatePerDay);
    }
    printf("Total Rental Cost for %d days: %.2f\n",days,totalCost);
    return 0;
}