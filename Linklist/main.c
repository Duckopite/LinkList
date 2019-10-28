#include <main.h>
typedef struct
{
    char name[30];
    int* age;
    int* pointAve;
} listClass;
void inputInfoStudent(listClass *student)
{
    student = (listClass *) malloc(sizeof(listClass));
    printf("Nhap ten hoc sinh : ");
    scanf("%s", student->name);
    printf("Nhap tuoi : ");
    scanf("%d", student->age);
    printf("Nhap diem trung binh : ");
    scanf("%d", student->pointAve);
}

void printInfoStudent(listClass *student)
{

    inputInfoStudent(student);
}
void AddStudent(listClass *student)
{
    student = (listClass*) realloc(student, sizeof(listClass));
    inputInfoStudent(student);
}
int main()
{
    listClass *student;
    int Select = 0u;
    switch(Select)
    {
        case PRINT_LIST:

    }

}
