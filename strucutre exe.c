#include <stdio.h>

struct Student {
    int roll;
    char name[50];
    float marks;
};

int main() {
    struct Student s1 = {1, "Swapnil", 95.5};
    printf("Roll: %d\nName: %s\nMarks: %.2f\n", s1.roll, s1.name, s1.marks);
    return 0;
}
