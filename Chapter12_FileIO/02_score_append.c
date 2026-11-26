#include <stdio.h>

struct Student {
    char name[20];
    float score;
};

int main() {
    FILE *fp;
    struct Student stu[10]; 
    int i, count = 0;
    float sum = 0, avg;
    
    fp = fopen("scores.txt", "w");
    if (fp == NULL) return 1;
    
    for(i = 0; i < 5; i++) {
        printf("输入姓名和成绩：");
        scanf("%s %f", stu[i].name, &stu[i].score);
        fprintf(fp, "%s %f\n", stu[i].name, stu[i].score); 
    }
    fclose(fp);
    
    fp = fopen("scores.txt", "a"); 
    if (fp == NULL) return 1;
    
    for(i = 5; i < 8; i++) { 
        printf("输入追加的姓名和成绩：");
        scanf("%s %f", stu[i].name, &stu[i].score);
        fprintf(fp, "%s %f\n", stu[i].name, stu[i].score);
    }
    fclose(fp);
    
    fp = fopen("scores.txt", "r");
    if (fp == NULL) return 1;
    
    while (fscanf(fp, "%s %f", stu[count].name, &stu[count].score) == 2) {
        sum += stu[count].score;
        count++;
    }
    fclose(fp);
    
    avg = sum / count;
    
    printf("总人数：%d\n", count);
    printf("平均分：%.1f\n", avg);
     
    return 0;
}
