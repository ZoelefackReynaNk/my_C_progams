#include <stdio.h>

int main(){
	char* in;
	char* days = "MTWTF";
	char* time_periods[] = {"08-10", "10-12", "12-14", "14-16"};
	//char* periods[5][4];
	int count = 0, count2;
	/*
	for(int i = 0; i < 5; i++){
		for(int j = 0; j < 4; j++){
			printf("What subject do you have on %s, at %c: ", time_periods[j], days[i]);
			scanf("%s", &in);
			periods[i][j] = in;
			//periods[i][j][0] = in[0];
			//periods[i][j][1] = in[1];
			//periods[i][j][2] = in[2];
		}
	}
	*/
	
	//	Auto-fillin $periods
	char* m = "Mat";
	char* e = "Eng";
	char* f = "Fre";
	char* g = "Geo";
	char* c = "Com";
	char* p = "Phy";
	char* b = "Bio";
	char* h = "His";
	
	char* periods[5][4] = {
		{m, f, e, g},
		{f, e, g, m},
		{e, g, m, f},
		{g, m, f, e},
		{p, h, b, c}
	};
	// Auto-filling end
	
	printf(" \t");
	while(count < 4){
		printf("%s\t\t", time_periods[count++]);
	}
	
	count = -1;
	count2 = 4;
	for(int i = 0; i < 5; i++){
		for(int j = 0; j < 4; j++){
			if(count2 == 4){
				count++;
				count2 = 0;	
				printf("\n");
				printf("%c\t", days[count]);
			}
			printf("%s\t\t", periods[i][j]);
			count2++;
		}
	}
	
	printf("\n\n");
	system("pause");
	return 0;
}

