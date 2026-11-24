#include <stdio.h>
struct student {
    char name[20];
    int score;
};

void sortStudent(struct student stu[], int n) {
    int i, j;
    struct student t;
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - 1 - i; j++) {
            if (stu[j].score < stu[j + 1].score) {
                t = stu[j];
                stu[j] = stu[j + 1];
                stu[j + 1] = t;
            }
        }
    }
}

void checkStudent(struct student stu[], int count) {
    int i;
    if (count == 0) {
        printf("暂无学生信息。\n");
        return;
    }
    for (i = 0; i < count; i++) {
        printf("%s：%d\n", stu[i].name, stu[i].score);
    }
}

int addStudent(struct student stu[], int count, int max) {
    if (count >= max) {
        printf("人数达到上限。\n");
        return count;
    }
    printf("请输入姓名和成绩：");
    scanf("%s %d", stu[count].name, &stu[count].score);
    return count + 1;
}

int main() {
    int i;
    int count = 0; 
    struct student stu[5];

    while (1) {
        printf("\n1.查看学生\n2.添加学生\n3.排序\n4.退出\n请输入选择：");
        scanf("%d", &i); 

        if (i == 1) {
            checkStudent(stu, count); 
        } else if (i == 2) {
            count = addStudent(stu, count, 5);
        } else if (i == 3) {
            sortStudent(stu, count);
            printf("排序完成！\n");
        } else if (i == 4) {
            break;
        } else {
            printf("输入错误！\n");
        }
    }
    return 0;
}
