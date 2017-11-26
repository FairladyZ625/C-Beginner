# include<stdio.h>

struct time{
	int hour;
	int minutes;
	int seconds;
};

struct time updatetime(struct time p);

int main()
{
	struct time times[]={{11,59,59},{12,0,0},{1,29,59},{23,59,59},{19,12,27}
	};
	for(int i=0;i<5;i++){
		times[i]=updatetime(times[i]);
		printf("one second later=%d,%d,%d\n",times[i].hour ,times[i].minutes ,times[i].seconds );
	}
	return 0;
	
}

struct time updatetime(struct time p)
{
	++p.seconds;
	if (p.seconds==60){
		p.seconds=0;
		p.minutes++;
	}
	if (p.minutes == 60){
		p.minutes =0;
		p.hour ++;
	}
	if (p.hour==24)
		p.hour=0;	
	return p;	
}
