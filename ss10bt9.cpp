#include<stdio.h>
int main(){
    int hang,cot;
    printf("moi ban nhap so hang: ");
    scanf("%d",&hang);
    printf("moi ban nhap so cot: ");
    scanf("%d",&cot);
    int array[hang][cot];
    for(int i=0;i<hang;i++){
    	for(int j=0;j<cot;j++){
		printf("moi ban nhap hang %d cot %d la: ",i+1,j+1);
		scanf("%d",&array[i][j]);
		}
	}
	for(int i=0;i<hang-1;i++){
		for(int j=i+1;j<cot;j++){
			if(array[i][i]>array[j][j]){
				int temp=array[i][i];
				array[i][i]=array[j][j];
				array[j][j]=temp;
			}
		}
	}
	for(int i=0;i<hang;i++){
		for(int j=0;j<cot;j++){
			printf("%d ",array[i][j]);
		}
		printf("\n");
	}
	
}
