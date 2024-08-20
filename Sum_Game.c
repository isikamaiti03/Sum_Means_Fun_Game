//game of Sum 
#include<stdio.h>
#include<time.h>
#include<stdlib.h>
int main()
{
	printf("\n\t\t\tGAME OF SUM\t\t\t\n");
	int ch,num1,num2,sum,num3,score=0,total_score,start_stop;
	srand(time(0));
	do
	{
	printf("\nEnter 1-> Beginer Level\nEnter 2-> Medium Level\nEnter 3->Pro Level\n");
	printf("Enter your choice:\n");
	scanf("%d",&ch);
	switch(ch)
	{
		case 1:num1=rand()%500+1;
			   num2=rand()%500+1;
			   break;
		case 2:num1=rand()%50000+501;
			   num2=rand()%50000+501;
			   break;
		case 3:num1=rand()%500000+50001;
			   num2=rand()%500000+50001;
			   break;
	}
	sum=num1+num2;
	printf("\n\t\t\t%d\n",num1);
	printf("\t\t +\t\t\t\n");
	printf("\t\t\t%d\n",num2);
	printf("\t\t_______________\n");
	printf("\t\t\t");
	scanf("%d",&num3);
	if(num3==sum)
	{
		printf("\tAns.Correct\n");
		score=score+5;
	}
	else
	{
		printf("\tAns.Wrong\n");
		score=score-5;
	}
	printf("Do you want to continue this Game? Yes(1) or No(0)\n");
	scanf("%d",&start_stop);
	}while(start_stop==1);
	total_score=score;
	printf("\n\tYour Score is: %d",total_score);
	return 0;
}
