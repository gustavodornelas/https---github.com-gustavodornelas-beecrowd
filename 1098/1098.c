#include <stdio.h>
#include <math.h>

int res (float n){

    if (n==0){
        return 0;
    }else{
        if (fmod(n,1)==0){
            return 0;
        }else{
            return 1;
        }
    }
}

int main (){

	int j;
	double i, sum;

	for (i=0; i<2; i+=0.2){

		for (j=1; j<=3; j++){

            sum=i+j;
            if (res(sum)==0 || sum==3){
                printf ("I=%.0lf J=%.0lf\n", i, sum);
            }else{
                printf ("I=%.1lf J=%.1lf\n", i, sum);
            }
		}
	}

	return 0;
}
