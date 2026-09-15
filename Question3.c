/*#include <stdio.h>
int main(){
    int m1,m2,m3,m4,m5,total;
    float avg;
    printf("Enter 5 Subject Marks : ");
    scanf("%d %d %d %d %d",&m1,&m2,&m3,&m4,&m5);
    total = m1+m2+m3+m4+m5;
    avg = total/5;

    if(avg >= 80 && m1 >=33 && m2 >=33 && m3 >=33 && m4 >=33 && m5 >=33 ){
        printf("Your Grade Is Distinction");

    }else{
        printf("Fail-Subject Deficiency")
    }

    return 0;
}*/

#include <stdio.h>

int main() {
    int m1, m2, m3, m4, m5;
    float avg, total;

    printf("Enter 5 Subject Marks: ");
    scanf("%d %d %d %d %d", &m1, &m2, &m3, &m4, &m5);

    total = m1 + m2 + m3 + m4 + m5;
    avg = total / 5;

    if (avg >= 80 && m1 >= 33 && m2 >= 33 && m3 >= 33 && m4 >= 33 && m5 >= 33) {
        printf("Your Grade Is Distinction");
    }
    else if (avg >= 60 && avg <= 79 && m1 >= 33 && m2 >= 33 && m3 >= 33 && m4 >= 33 && m5 >= 33) {
        printf("Your Grade Is Pass");
    }
    else if (avg < 60 && m1 >= 33 && m2 >= 33 && m3 >= 33 && m4 >= 33 && m5 >= 33) {
        printf("Your Grade Is Fail");
    }
    else {
        printf("Fail-Subject Deficiency");
    }

    return 0;
}