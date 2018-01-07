# include<stdio.h>

struct date {
	int month;
	int year;
	int day;
};

int numberofdays (struct date d);
int isleap (struct date f);

int main()
{
	struct date today,tomorrow;
	printf ("Enter today's date dd mm yyyy");
	scanf("%d %d %d",&today.day,&today.month ,&today.year );
	
	if (today.day != numberofdays(today)){
		today.day +=1;
	}else if(today.month ==12){
		today.year +=1;
		today.month =1;
		today.day  =1;
	}else{
		today.month +=1;
		today.day =1;
	}
	
	printf("明天的日期是%d年%d月%d日",today.year ,today.month ,today.day);
	
	return 0;
	
}

int numberofdays(struct date d)
{
	int month[]={31,28,31,30,31,30,31,31,30,31,30,31,};
	if (d.month==2 && isleap){
	 	d.day =29; 
	} else {
		d.day=month[d.month -1];
	}
	return d.day; 
}
int isleap(struct date f)
{
	int leap=0;
	int year=f.year ;
	if (year%4==0 && year%100!=0 || year%400==0){
		leap =1;
	}
	return leap;
	
}
