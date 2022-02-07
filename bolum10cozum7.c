/*bolum 10 soru 7
author: https://github.com/ugrkaya
*/




int main(int argc, char *argv[])
{
	int dizi[3][3]={{3,5,6},{4,2,3},{4,8,7}};
	int i,j;
	i = j = 0;
	for(i=0; i<3; i++){
		for(j=0; j<3; j++){
			printf("[%d][%d] = %d\n",i,j,dizi[i][j]);
		}
	}
	printf("\nProgram sonlandi.");

	return 0;
}
	
