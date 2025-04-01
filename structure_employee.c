#include<stdio.h>
struct employee{
	char ep_id[50];
	char ep_name[50];
	float salary;	
};

int main(){
	int num;
	printf("Enter the no: of Employee:");
	scanf("%d",&num);
	struct employee ep[num];
	for(int i=0;i<num;i++){
		printf("Enter the Employee ID:-");
		scanf("%s",ep[i].ep_id);
		printf("Enter the Employee Name:-");
		scanf("%s",ep[i].ep_name);
		printf("Enter the salary of the Employee:-");
		scanf("%f",&ep[i].salary);
		printf("\n");
	}
	for(int i=0;i<num;i++){
		printf("Employee ID:\t %s\n",ep[i].ep_id);
		printf("Employee Name:\t %s\n",ep[i].ep_name);
		printf("Salary of the Employee:\t %.2f\n",ep[i].salary);
	}
	return 0;
}
