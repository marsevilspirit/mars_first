#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Student {
    char *name;
    int age;
};

void initializeStudent(struct Student *student, const char *name, int age) {
    student->name = (char *)malloc(strlen(name) + 1);
    strcpy(student->name, name);
    student->age = age;
}

void copy(struct Student *s1, const struct Student *s2) {
    strcpy(s1->name, s2->name);
    s1->age = s2->age;
}

int main(void) {
    struct Student s1, s2;
    initializeStudent(&s1, "Tom", 18);
    initializeStudent(&s2, "Jerry", 28);
    copy(&s1, &s2);
    printf("s1 的姓名: %s 年龄: %d\n", s1.name, s1.age);
    printf("s2 的姓名: %s 年龄: %d\n", s2.name, s2.age);
    free(s1.name);
    free(s2.name);
    s1.name = NULL;
    s2.name = NULL;
    return 0;
}