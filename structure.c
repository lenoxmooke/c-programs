//C structures
#include <stdio.h>
#include <string.h>
struct student{
    char name[20];
    char reg_no[20];
    char email[30];
    int ID ;
    float marks;
    char phone_no [10];

}student1,student2;
int main(){
    strcpy (student1.name, "lenox mooke");
    strcpy (student1.reg_no, "BCS-O5-0014/2024");
    strcpy (student1.email, "lenoxmooke12@gmail.com");
    student1.ID = 1234567;
    strcpy (student1.phone_no ,"0740025240");
    student1.marks = 80.5;

    printf("Name: %s\n",student1.name);
    printf("Reg_no: %s\n",student1.reg_no);
    printf("Email: %s\n",student1.email);
    printf("ID: %d\n",student1.ID);
    printf("Phone_no: %s\n",student1.phone_no);
    printf("Marks: %f\n",student1.marks);


return 0;
}
