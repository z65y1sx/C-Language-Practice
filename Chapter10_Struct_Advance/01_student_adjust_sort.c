#include <stdio.h>
struct student{
	int id;
	char name[20];
	int score;
};

void adjustScore(struct student *p,int n){
	int i;
	for(i = 0;i < n;i++){
		if(p[i].score < 60){
			p[i].score = p[i].score + 5;
		}
		if(p[i].score > 90){
			p[i].score = p[i].score - 5;
		}
	}
}

void sortStudent(struct student *p,int n){
	int i,j;
	struct student t;
	
	for(i = 0;i < n-1;i++)
		for(j = 0;j < n-1-i;j++){
			if(p[j].score < p[j+1].score){
				t = p[j];
				p[j] = p[j+1];
				p[j+1] = t;
			}
		}
}

int main(){
	struct student stu[5];
	struct student *p;
	p = stu;
	int i;
	
	for(i = 0;i < 5;i++){
		printf("请输入学号，姓名和成绩：");
		scanf("%d %s %d",&p[i].id,p[i].name,&p[i].score);
	}
	
	adjustScore(p,5);
	sortStudent(p,5);
	
	for(i = 0;i < 5;i++){
		printf("%d %s %d\n",p[i].id,p[i].name,p[i].score);
	}
	
	return 0;
}
