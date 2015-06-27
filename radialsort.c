// ���f�B�A���\�[�g:0�ȏ�MAX������10�̃f�[�^���\�[�g����
#include <stdio.h>
#define N 10	//�v�f��
#define MAX 1000

void swap(int *p, int *q){
	int tmp;
	tmp = *p;
	*p = *q;
	*q = tmp;
}

int main(void) {
	// your code goes here
	int array[N];
	int tmp;
	int i, j;
	int swapped;	// ����bool���g���Ȃ��񂾂�N�\��
	int denominator=1;
	for(i=0;i<N;i++)
		scanf("%d", &array[i]);

	printf("before:");
	for(i=0;i<N;i++)
		printf("%d ", array[i]);
	printf("\n");

	while(denominator<MAX){
		for(j=N-1;j>0;j--){
			swapped=0;
			for(i=0;i<j;i++){
				if((array[i]/denominator)%10>(array[i+1]/denominator)%10){
					swap( &array[i], &array[i+1]);
					swapped=1;
				}
			}
			if(!swapped) break;
		}
		for(i=0;i<N;i++)
			printf("%d ", array[i]);
		printf("\n");
		denominator *= 10;
	}

	printf("\n");
	return 0;
}
