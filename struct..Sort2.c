#include<stdio.h>
struct cse
{
    char name[20];
    int id;
    double cgpa;
};
void output(struct cse student[])
{
    int i;
    for(i=0;i<3;i++){
        printf("%d %s %0.2lf\n",student[i].id,student[i].name,student[i].cgpa);
    }
}
void namesort(struct cse student[])
{
    int i,j;
    struct cse temp;
    for(i=0;i<3-1;i++){
        for(j=i+1;j<3;j++){
            if(student[i].id>student[j].id){
                strcpy(temp.name,student[i].name);
                temp.id=student[i].id;
                temp.cgpa=student[i].cgpa;

                strcpy(student[i].name,student[j].name);
                student[i].id=student[j].id;
                student[i].cgpa=student[j].cgpa;

                strcpy(student[j].name,temp.name);
                student[j].id=temp.id;
                student[j].cgpa=temp.cgpa;
            }
        }
    }
}
void input(struct cse student[])
{
    int i;
    for(i=0;i<3;i++){
        scanf("%s%d%lf",student[i].name,&student[i].id,&student[i].cgpa);
    }
}
int main ()
{
    struct cse student[10];
    input(student);
    namesort(student);
    output(student);
    return 0;
}
