// sample final exam

#include<stdio.h>
#define SIZE 2
#include<stdlib.h>

struct Room
{
	char roomName[20];
	float length;
	float width;
	float height;
	float area;
	float volume;	
};
void calcDimensions(float, float, float, float*, float*);
float calcSquarefootage(struct Room []);

int main()
{
	char address[81], city[50], state[25], zipCode[15],roomName[20];
	float length,width,height,total;
	struct Room house[SIZE];
	int i;
	
	FILE *fp;
	
	
	printf("Ahmed Aldhaheri");
	
	
	printf("\nWhats your street address ");
	gets(address);
	
	printf("\nPlease enter your city ");
	gets(city);
	
	printf("\nPlease enter your state ");
	gets(state);
	
	printf("\nPlease enter your zipcode ");
	gets(zipCode);
	
	for(i=0;i<SIZE;i++)
	{
		printf("\nPlease enter the name of your room ");
		getchar();
		gets(house[i].roomName);
	
		printf("\nPlease enter the length of your room ");
		scanf("%f",&house[i].length);
	
		printf("\nPlease enter the width of your room ");
		scanf("%f",&house[i].width);
	
		printf("\nPlease enter the height of your room ");
		scanf("%f",&house[i].height);
		
		calcDimensions(house[i].length,house[i].width,house[i].height,&house[i].area, &house[i].volume);
	}	
	
	total=calcSquarefootage(house);
	printf("\nYpur property address is:");
	printf("\n\t\t %s",address);
	printf("\n\t\t %s, %s %s",city,state,zipCode);
	printf("\n\nThe total square footage for this house is %.2f sq.ft",total);
	
	fp=fopen("houseDimensions.csv","w");
	if(fp==NULL)
	{
		printf("\nError-Could not write to file");
		exit(0);
	}
	
	for(i=0;i<SIZE;i++)
	{
	
		fprintf(fp,"%s,%f,%f,%f,%f,%f",house[i].roomName,house[i].length,house[i].width,house[i].height,house[i].area,house[i].volume);
	}
	printf("\nFile Created");
	
	fclose(fp);
	
	getchar();getchar();
	return 0;
}

void calcDimensions(float length, float width, float height, float *areaP, float *volumeP)
{
	//calculate the area and the colume of the room

	
	*areaP=length*width;
	*volumeP=length*width*height;
	
	
}

float calcSquarefootage(struct Room house[])
{
	int i;
	float total=0;
	
	for(i=0;i<SIZE;i++)
	{
		total +=house[i].area;
	}
	return total;
}
