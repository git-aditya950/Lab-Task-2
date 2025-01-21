#include<stdio.h>
#include<stdlib.h>

struct Employee{
    char name[20];
    int age;
};
int main(){
    int n;
    struct Employee *employees;
    printf("Enter number of employees: ");
    scanf("%d",&n);
    employees=(struct Employee *)malloc(n*sizeof(struct Employee));
    for(int i=0;i<n;i++){
        printf("Enter name and age of Employee %d: ",i+1);
        scanf("%s %d",employees[i].name,&employees[i].age);
    }
    printf("\nEmployee Information:\n");
    for(int i=0;i<n;i++){
        printf("Employee %d: Name = %s, Age = %d\n",i+1,employees[i].name,employees[i].age);
    }
    free(employees);
    return 0;
}