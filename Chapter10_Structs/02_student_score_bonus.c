#include <stdio.h>
struct student{
	int id;
	char name[20];
	int score;
};

void addBonus(struct student *p){
	if(p->score <= 60){
		p->score = p->score + 10;
	}else{
		p->score = p->score + 5;
	}
}

int main(){
	struct student s1,s2,s3;
	struct student *sp1 = &s1;
    struct student *sp2 = &s2;
    struct student *sp3 = &s3;
    
	printf("请输入学号，姓名和成绩：");
	scanf("%d %s %d",sp1->id,sp1->name,sp1->score);
	printf("请输入学号，姓名和成绩：");
	scanf("%d %s %d",sp2->id,sp2->name,sp2->score);
	printf("请输入学号，姓名和成绩：");
	scanf("%d %s %d",sp3->id,sp3->name,sp3->score);
	
	addBonus(sp1);
	addBonus(sp2);
	addBonus(sp3);
	
	printf("%d %s %d\n",sp1->id,sp1->name,sp1->score);
	printf("%d %s %d\n",sp2->id,sp2->name,sp2->score);
	printf("%d %s %d\n",sp3->id,sp3->name,sp3->score);
	
	return 0;
}
