int huajian(int *c,int *d)
{
	int i=0;
	int e=*c;
	int f=*d;
	do{
		i=e/f;
		if ((e%i == 0)&&(f%i == 0)){
			e/=i;
			f/=i;
			continue;
		}else{
			break;
		}
		
	}while (1);
	*c=e;
	*d=f;
}
