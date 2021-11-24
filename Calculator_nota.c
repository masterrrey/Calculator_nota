#include <stdio.h>
//Nota 2 se acorda pentru acumularea a 2 puncte - 14% din N
//Nota 3 se acorda pentru acumularea a 15% - 24% din N
//Nota 4 se acorda pentru acumularea a 25% - 32% din N
//Nota 5 se acorda pentru acumularea a 33% - 50% din N
//Nota 6 se acorda pentru acumularea a 51% - 65% din N
//Nota 7 se acorda pentru acumularea a 66% - 75% din N
//Nota 8 se acorda pentru acumularea a 76% - 85% din N
//Nota 9 se acorda pentru acumularea a 86% - 95% din N
//Nota 10 se acorda pentru acumularea a 96% - 100% din N

int main()
{
	float punct_total=0;
	float punct_cumulat=0;
	float punct_cumulat_next=0;
	int i = 1;

	printf("Introduceti va rog nr. total de puncte ce pot fi acumulate!\n");
	scanf("%f", &punct_total);
	printf("Introduceti va rog nr. de puncte acumulate de elev!\n");
	scanf("%f", &punct_cumulat);

	//nota 2
	if((punct_cumulat > 0) & (punct_cumulat <= (punct_total*0.14)))
	{
		float maxim = punct_total * 0.14;
		printf("Nota elevului este: 2\n");
		printf("Intervalul de puncte pentru nota 2 este intre 0 si %.2f", maxim);
	}
	//nota 3
	else if((punct_cumulat >= (punct_total*0.15)) & (punct_cumulat <= (punct_total*0.24)))
	{
		float minim = punct_total * 0.15;
		float maxim = punct_total * 0.24;
		printf("Nota elevului este: 3\n");
		printf("Intervalul de puncte pentru nota 3 este intre %.2f si %.2f", minim, maxim);
	}
	//nota 4
	else if((punct_cumulat >= (punct_total*0.25)) & (punct_cumulat <= (punct_total*0.32)))
	{
		float minim = punct_total * 0.25;
		float maxim = punct_total * 0.32;
		printf("Nota elevului este: 4\n");
		printf("Intervalul de puncte pentru nota 4 este intre %.2f si %.2f", minim, maxim);
	}
	//nota 5
	else if((punct_cumulat >= (punct_total*0.33)) & (punct_cumulat <= (punct_total*0.50)))
	{
		float minim = punct_total * 0.33;
		float maxim = punct_total * 0.50;
		printf("Nota elevului este: 5\n");
		printf("Intervalul de puncte pentru nota 5 este intre %.2f si %.2f", minim, maxim);
	}
	//nota 6
	else if((punct_cumulat >= (punct_total*0.51)) & (punct_cumulat <= (punct_total*0.65)))
	{
		float minim = punct_total * 0.51;
		float maxim = punct_total * 0.65;
		printf("Nota elevului este: 6\n");
		printf("Intervalul de puncte pentru nota 6 este intre %.2f si %.2f", minim, maxim);;
	}
	//nota 7
	else if((punct_cumulat >= (punct_total*0.66)) & (punct_cumulat <= (punct_total*0.75)))
	{
		float minim = punct_total * 0.66;
		float maxim = punct_total * 0.75;
		printf("Nota elevului este: 7\n");
		printf("Intervalul de puncte pentru nota 7 este intre %.2f si %.2f", minim, maxim);
	}
	//nota 8
	else if((punct_cumulat >= (punct_total*0.76)) & (punct_cumulat <= (punct_total*0.85)))
	{
		float minim = punct_total * 0.76;
		float maxim = punct_total * 0.85;
		printf("Nota elevului este: 8\n");
		printf("Intervalul de puncte pentru nota 8 este intre %.2f si %.2f", minim, maxim);
	}
	//nota 9
	else if((punct_cumulat >= (punct_total*0.86)) & (punct_cumulat <= (punct_total*0.95)))
	{
		float minim = punct_total * 0.86;
		float maxim = punct_total * 0.95;
		printf("Nota elevului este: 9\n");
		printf("Intervalul de puncte pentru nota 9 este intre %.2f si %.2f", minim, maxim);
	}
	//nota 10
	else if((punct_cumulat >= (punct_total*0.96)) & (punct_cumulat <= (punct_total*1)))
	{
		float minim = punct_total * 0.96;
		float maxim = punct_total * 1;
		printf("Nota elevului este: 10\n");
		printf("Intervalul de puncte pentru nota 10 este intre %.2f si %.2f", minim, maxim);;
	}
	//punctaj invalid
	else
	{
		printf("\nIntroduceti va rog un numar de puncte valid! \nNumarul de puncte introdus este mai mare decat numarul de puncte totale!\n\n");
	}

	while( i = 1 )
	{
		printf("\n\n\nIntroduceti va rog nr. de puncte acumulate de urmatorul elev!\n");
		scanf("%f", &punct_cumulat_next);

		//nota 2
		if((punct_cumulat_next > 0) & (punct_cumulat_next <= (punct_total*0.14)))
		{
			float maxim = punct_total * 0.14;
			printf("Nota elevului este: 2\n");
			printf("Intervalul de puncte pentru nota 2 este intre 0 si %.2f", maxim);
		}
		//nota 3
		else if((punct_cumulat_next >= (punct_total*0.15)) & (punct_cumulat_next <= (punct_total*0.24)))
		{
			float minim = punct_total * 0.15;
			float maxim = punct_total * 0.24;
			printf("Nota elevului este: 3\n");
			printf("Intervalul de puncte pentru nota 3 este intre %.2f si %.2f", minim, maxim);
		}
		//nota 4
		else if((punct_cumulat_next >= (punct_total*0.25)) & (punct_cumulat_next <= (punct_total*0.32)))
		{
			float minim = punct_total * 0.25;
			float maxim = punct_total * 0.32;
			printf("Nota elevului este: 4\n");
			printf("Intervalul de puncte pentru nota 4 este intre %.2f si %.2f", minim, maxim);
		}
		//nota 5
		else if((punct_cumulat_next >= (punct_total*0.33)) & (punct_cumulat_next <= (punct_total*0.50)))
		{
			float minim = punct_total * 0.33;
			float maxim = punct_total * 0.50;
			printf("Nota elevului este: 5\n");
			printf("Intervalul de puncte pentru nota 5 este intre %.2f si %.2f", minim, maxim);
		}
		//nota 6
		else if((punct_cumulat_next >= (punct_total*0.51)) & (punct_cumulat_next <= (punct_total*0.65)))
		{
			float minim = punct_total * 0.51;
			float maxim = punct_total * 0.65;
			printf("Nota elevului este: 6\n");
			printf("Intervalul de puncte pentru nota 6 este intre %.2f si %.2f", minim, maxim);;
		}
		//nota 7
		else if((punct_cumulat_next >= (punct_total*0.66)) & (punct_cumulat_next <= (punct_total*0.75)))
		{
			float minim = punct_total * 0.66;
			float maxim = punct_total * 0.75;
			printf("Nota elevului este: 7\n");
			printf("Intervalul de puncte pentru nota 7 este intre %.2f si %.2f", minim, maxim);
		}
		//nota 8
		else if((punct_cumulat_next >= (punct_total*0.76)) & (punct_cumulat_next <= (punct_total*0.85)))
		{
			float minim = punct_total * 0.76;
			float maxim = punct_total * 0.85;
			printf("Nota elevului este: 8\n");
			printf("Intervalul de puncte pentru nota 8 este intre %.2f si %.2f", minim, maxim);
		}
		//nota 9
		else if((punct_cumulat_next >= (punct_total*0.86)) & (punct_cumulat_next <= (punct_total*0.95)))
		{
			float minim = punct_total * 0.86;
			float maxim = punct_total * 0.95;
			printf("Nota elevului este: 9\n");
			printf("Intervalul de puncte pentru nota 9 este intre %.2f si %.2f", minim, maxim);
		}
		//nota 10
		else if((punct_cumulat_next >= (punct_total*0.96)) & (punct_cumulat_next <= (punct_total*1)))
		{
			float minim = punct_total * 0.96;
			float maxim = punct_total * 1;
			printf("Nota elevului este: 10\n");
			printf("Intervalul de puncte pentru nota 10 este intre %.2f si %.2f", minim, maxim);;
		}
		//punctaj invalid
		else
		{
			printf("\nIntroduceti va rog un numar de puncte valid! \nNumarul de puncte introdus este mai mare decat numarul de puncte totale!\n\n");
		}
	}

	return 0;
}
