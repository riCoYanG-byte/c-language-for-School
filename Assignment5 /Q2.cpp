#include<stdio.h>

double calcAvg(int* testvals,int size){
	int i;
	double avg=0.0;
	for(i=0;i<size;i++){
		avg+=testvals[i];
	}
	avg=avg/size;
	return avg;
}

double variance(int* testvals,int size,double avg){
	int i;
	double var=0.0;
	for(i=0;i<size;i++){
		var+=(testvals[i]-avg)*(testvals[i]-avg);
	}
	var=var/size;
	return var;
}

int main(){
	int testvals[]={89,95,72,83,99,54,86,75,92,73,79,75,82,73};
	double avg=0;
	double var=0;
	avg=calcAvg(testvals,14);
	var=variance(testvals,14,avg);
	printf("%.3lf , %.3lf",avg,var);
}

