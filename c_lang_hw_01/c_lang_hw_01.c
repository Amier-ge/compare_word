#include<stdio.h>
#include<string.h>

void compareWord(char *A, char *B);

int main() {

	char A[80] = "a bc def hijk lm op"; 
	char B[80] = "kae d dop abc de d";

	compareWord(A, B);

	return 0;
}

void compareWord(char *A, char *B){

	int i = 0, j = 0;
	int comp_num, blank_count = 1;
	int index_A = 0, index_B = 0;
	char comp_A[50] = {0};
	char comp_B[50] = {0};

	printf("비교할 단어의 순서를 입력하세요 : ");
	scanf("%d", &comp_num);

	//A
	if(comp_num != 1){
		while( *(A+i) ){

			if( *(A+i) == ' ') blank_count++;
			i++;

			if(blank_count == comp_num) {
				index_A = i;
				break;
			}
			
		}

		for(i = index_A ; (*(A+i) != ' ') && (*(A+i) != '\0') ; i++) {
			*(comp_A + j) = *(A+i);
			j++;
		}

	}

	else for(i = 0 ; *(A+i) != ' ' ; i++) *(comp_A + i) = *(A+i);

	//B
	i = 0, j = 0,blank_count = 1;
	if(comp_num != 1){
		while( *(B+i) ){

			if( *(B+i) == ' ') blank_count++;
			i++;

			if(blank_count == comp_num) {
				index_B = i;
				break;
			}

		}

		for(i = index_B ; (*(B+i) != ' ') && (*(B+i) != '\0') ; i++) {
			*(comp_B + j) = *(B+i);
			j++;
		}

	}

	else for(i = 0 ; *(B+i) != ' ' ; i++) *(comp_B + i) = *(B+i);

	if( strcmp(comp_A, comp_B) > 0) puts(comp_B);
	else if( strcmp(comp_A, comp_B) < 0) puts(comp_A);
	else printf("같은 단어 입니다.\n");

}