# include<stdio.h>
struct date{
	int month;
	int day;
};

int main()
{
	struct date dates[]={{1,2},{2,3}};
	dates[1]={2,3};
	return 0;
}
