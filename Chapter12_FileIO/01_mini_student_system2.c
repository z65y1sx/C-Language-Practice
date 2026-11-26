#include <stdio.h>

struct student {
    char name[20];
    int score;
};

struct student stu[100];
int count = 0;

void saveToFile(){
	int i;
	FILE *fp = fopen("data.txt","w");
	if(fp == NULL){
		printf("保存失败\n");
		return;
	}
	for(i = 0;i < count;i++){
		fprintf(fp,"%s %d",stu[i].name,stu[i].score);
	}
	fclose(fp);
	printf("保存成功，已保存%d条信息\n",count);
}

void loadFromFile(){
	FILE *fp = fopen("data.txt","r");
	if(fp == NULL){
		printf("没有存档，从空开始\n");
		return;
	}
	count = 0;
	while(count < 100 && fscanf(fp,"%s %d",stu[count].name,&stu[count].score) == 2){
		count++;
	}
	fclose(fp);
}

void sortStudent() {
    int i, j;
    struct student t;
    for (i = 0; i < count - 1; i++) {
        for (j = 0; j < count - 1 - i; j++) {
            if (stu[j].score < stu[j + 1].score) {
                t = stu[j];
                stu[j] = stu[j + 1];
                stu[j + 1] = t;
            }
        }
    }
}

void checkStudent() {
    int i;
    if (count == 0) {
        printf("暂无学生信息。\n");
        return;
    }
    for (i = 0; i < count; i++) {
        printf("%s：%d\n", stu[i].name, stu[i].score);
    }
}

void addStudent() {
    if (count >= 100) {
        printf("人数达到上限。\n");
        return;
    }
    printf("请输入姓名和成绩：");
    scanf("%s %d", stu[count].name, &stu[count].score);
    count++;
}

int main() {
    int i;
    loadFromFile();
    while (1) {
        printf("\n1.查看学生\n2.添加并保存学生\n3.排序\n4.读取\n5.退出\n请输入选择：");
        scanf("%d", &i); 

        if (i == 1) {
            checkStudent(); 
        } else if (i == 2) {
            addStudent();
            saveToFile();
        } else if (i == 3) {
            sortStudent();
            printf("排序完成！\n");
        } else if (i == 4) {
            loadFromFile();
        } else if (i == 5){
        	break;
		}else {
            printf("输入错误！\n");
        }
    }
    return 0;
}
