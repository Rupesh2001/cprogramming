#include<stdio.h>
struct date{
	int year;
	int month;
	int day;
			struct time{
				int hour;
				int minute;
				int second;
						}s;
			}p;
int main()
{
printf("enter year month and days");
scanf("%d%d%d",&p.year,&p.month,&p.day);
printf("enter hour minute and second");
scanf("%4d%4d%4d",&p.s.hour,&p.s.minute,&p.s.second);	
printf("year=%d month=%d days=%d\n",p.year,p.month,p.day);
printf("hour=%4d minute=%4d second=%4d",p.s.hour,p.s.minute,p.s.second);
}
