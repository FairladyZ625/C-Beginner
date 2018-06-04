# include<stdio.h>

void avstud(float*pascore,float*paver);
void avcour1(char(*pcourse)[10],float *pscore);
void tcourfail(char course[5][10],int num[],float *pscore,float *paver);
void goodstu(char course[5][10],int num[],float*pscore,float*paver);

int main()
{
	int i,j,*pnum,num[4];
	float score[4][5],*pscore,aver[4],*paver;
	char course[5][10],(*pcourse)[10];//数组指针pcourse 
	printf("input course: \n");
	pcourse=course;//指向第一个课程名 
	for(i=0;i<5;i++){
		scanf("%s",course[i]);
	}//读入课程 
	printf("input No. and scores \n");
	printf("No.");
	for(i=0;i<5;i++){
		printf(",%s",course[i]);
	}
	printf("\n");
	//到这里位置,定义基本数组与指针,并且读入课程名,要求输入学号和按顺序的五个成绩
	pnum=&num[0];
	paver=&aver[0];
	pscore=&score[0][0];//将三个指针放到数组的起始位置 
	for(i=0;i<4;i++){
		scanf("%d",pnum+i);
		for(j=0;j<5;j++){
			scanf("%f",pscore+5*i+j);
		}
	}//读入学号和成绩 
	/* 测试 
	printf("%f",score[1][3]);
	printf("%d",num[1]);
	*/	
	avstud(pscore,paver);
	avcour1(pcourse,pscore);
	tcourfail(pcourse,pnum,pscore,paver);
	goodstu(pcourse,pnum,pscore,paver);
	//运行四个函数,主函数结束 
	return 0;
}

void avstud(float*pscore,float*paver)
{
	float sum,ave;
	for(int i=0;i<4;i++){
		sum=0.0;
		for(int j=0;j<5;j++){
			sum+=*(pscore+5*i+j);//计算总和 
		}
		ave=sum/5.0;
		*(paver+i)=ave;
	}
}

void avcour1(char(*pcourse)[10],float *pscore)
{
	float sum=0.0;
	float ave=0.0;
	for(int i=0;i<4;i++){
		sum+=*(pscore+i*5);
	}
	ave=sum/4.0;
	printf("course1:%s,average score:%.2f\n",*pcourse,ave);
}

void tcourfail(char course[5][10],int num[],float *pscore,float *paver)
{
	int label;
	for(int i=0;i<4;i++){
		label=0;
		for(int j=0;j<5;j++){
			if(*(pscore+i*5+j)<60.0){
				label++;
			}
		}//计数器判断几个成绩没有及格 
		if(label>=2){
			printf("Student %d fail two or above courses",num[i]);
		}
	}
}
void goodstu(char course[5][10],int num[],float*pscore,float*paver)
{
	printf("Goodstudent:/n");
	int cnt;
	for(int i=0;i<4;i++){
		cnt=0;
		for(int j=0;j<5;j++){
			if(*(pscore+5*i+j)>=85){
				cnt++;
			}//计数器判断是否两个大于90分 
		}
		if(cnt==5||*(paver+i)>=90){
			printf("student number:%d",num[i]);
			printf("average= %2.f \n its score:\n",*(paver+i));//输出学号和平均成绩 
			for(int k=0;k<5;k++){
				printf("%.2f ",*(pscore+5*i+k));
			}//输出这个学生五个成绩 
		}
		printf("\n"); 
	}	 
}
