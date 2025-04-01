#include<stdio.h>
struct student{
	char st_id[50];
	char st_name[50];
	int mark[3];
	float average;	
};

int main(){
	int num, total;
	printf("Enter the no: of Employee:");
	scanf("%d",&num);
	struct student st[num];
	for(int i=0;i<num;i++){
		printf("Enter the Student ID:-");
		scanf("%s",st[i].st_id);
		printf("Enter the Student Name:-");
		scanf("%s",st[i].st_name);
		for (int j=0;j<3;j++){
			printf("Enter the Mark:-");
			scanf("%d",&st[i].mark[j]);
			total+=st[i].mark[j];
		}
		st[i].average=total/3;
		total=0;
		printf("\n");
	}
	for(int i=0;i<num;i++){
		printf("Student ID:\t %s\n",st[i].st_id);
		printf("Student Name:\t %s\n",st[i].st_name);
		printf("Average Mark:\t %.2f\n",st[i].average);
	}
	return 0;
}

amala look back
