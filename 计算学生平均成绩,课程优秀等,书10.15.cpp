# include<stdio.h>

void avstud(float*pascore,float*paver);
void avcour1(char(*pcourse)[10],float *pscore);
void tcourfail(char course[5][10],int num[],float *pscore,float *paver);
void goodstu(char course[5][10],int num[],float*pscore,float*paver);

int main()
{
	int i,j,*pnum,num[4];
	float score[4][5],*pscore,aver[4],*paver;
	char course[5][10],(*pcourse)[10];//����ָ��pcourse 
	printf("input course: \n");
	pcourse=course;//ָ���һ���γ��� 
	for(i=0;i<5;i++){
		scanf("%s",course[i]);
	}//����γ� 
	printf("input No. and scores \n");
	printf("No.");
	for(i=0;i<5;i++){
		printf(",%s",course[i]);
	}
	printf("\n");
	//������λ��,�������������ָ��,���Ҷ���γ���,Ҫ������ѧ�źͰ�˳�������ɼ�
	pnum=&num[0];
	paver=&aver[0];
	pscore=&score[0][0];//������ָ��ŵ��������ʼλ�� 
	for(i=0;i<4;i++){
		scanf("%d",pnum+i);
		for(j=0;j<5;j++){
			scanf("%f",pscore+5*i+j);
		}
	}//����ѧ�źͳɼ� 
	/* ���� 
	printf("%f",score[1][3]);
	printf("%d",num[1]);
	*/	
	avstud(pscore,paver);
	avcour1(pcourse,pscore);
	tcourfail(pcourse,pnum,pscore,paver);
	goodstu(pcourse,pnum,pscore,paver);
	//�����ĸ�����,���������� 
	return 0;
}

void avstud(float*pscore,float*paver)
{
	float sum,ave;
	for(int i=0;i<4;i++){
		sum=0.0;
		for(int j=0;j<5;j++){
			sum+=*(pscore+5*i+j);//�����ܺ� 
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
		}//�������жϼ����ɼ�û�м��� 
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
			}//�������ж��Ƿ���������90�� 
		}
		if(cnt==5||*(paver+i)>=90){
			printf("student number:%d",num[i]);
			printf("average= %2.f \n its score:\n",*(paver+i));//���ѧ�ź�ƽ���ɼ� 
			for(int k=0;k<5;k++){
				printf("%.2f ",*(pscore+5*i+k));
			}//������ѧ������ɼ� 
		}
		printf("\n"); 
	}	 
}
