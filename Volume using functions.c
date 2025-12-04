#include<stdio.h>

void getdata(){
		int a,h;
		float volume;
	printf("\nBase : ");
	scanf("%d",&a);
	printf("\nHeight : ");
	scanf("%d",&h);
	volume =  calvol(a,h);
	printf("Volume is : %.2f",volume);

	}
	
int calvol(int x,int y){
int	vol;
vol=(x*x*y)/3.0;
return vol;
}

int main()
{

getdata();
	return 0;
}