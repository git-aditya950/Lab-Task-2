#include<stdio.h>
struct Student{
    char name[50];
    int age;
    float totalMarks;
};
int main(){
    struct Student students[2];
    float averageMarks=0;
    for(int i=0;i<2;i++) {
        printf("Enter the name, age, and total marks of student %d: ", i+1);
        scanf("%s %d %f", students[i].name, &students[i].age, &students[i].totalMarks);
        averageMarks += students[i].totalMarks;
    }
    printf("\nStudent Information:\n");
    for(int i=0;i<2;i++) {
        printf("Name: %s, Age: %d, Total Marks: %.2f\n", students[i].name, students[i].age, students[i].totalMarks);
    }
    averageMarks /= 2;
    printf("Average Total Marks: %.2f\n", averageMarks);
    return 0;
}