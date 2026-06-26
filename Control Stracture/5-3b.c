#include <stdio.h>

void main()
{
	int lang, service;
	// dynamic project with switch case//
	printf("<<SELECT YOUR LANGUAGE>>\n\n");
	printf("press 1 for english\n");
	printf("press 2 for hindi\n");
	printf("press 3 for gujrati\n");
	printf("ENTER YOUR CHOICE:");
	scanf("%d", &lang);
	printf("\n\n");

	switch (lang)
	{
	case 1:
		printf("YOU ARE SELECT ENGLISH LANGUAGE!!\n\n");
		printf("<<SELECT YOUR SERVICE>>\n\n");
		printf("press 1 for topup recharge\n");
		printf("press 2 for data addon recharge\n");
		printf("press 3 for special recharge\n");
		printf("ENTER YOUR CHOICE:");
		scanf("%d", &service);
		printf("\n\n");
		switch (service)
		{
		case 1:
			printf("TOP UP RECHARGE SUCCESSFULL\n\n");
			break;
		case 2:
			printf("DATA ADD ON RECHARGE SUCCESSFULL\n\n");
			break;
		case 3:
			printf("SPECIAL RECHARGE SUCCESSFULL\n\n");
		}
		break;

	case 2:
		printf("AAPNE HINDI BHASA KO CHUNA HAI!!\n\n");
		printf("<<PASNDIDA SEVAYE CHUNIYE>>\n\n");
		printf("top up recharge ke liye 1 dabaye\n");
		printf("data addon recharge ke liye 2 babaye\n");
		printf("special recharge ke liye 3 dabaye\n");
		printf("ENTER YOUR CHOICE:");
		scanf("%d", &service);

		printf("\n\n");

		switch (service)
		{
		case 1:
			printf("AAPKA TOPUP RECHARGE HO GYA HAI\n\n");
			break;
		case 2:
			printf("DATA ADD ON RECHARGE HO GYA HAI\n\n");
			break;
		case 3:
			printf("SPECIAL RECHARGE HO GYA HAI\n\n");
		}
		break;

	case 3:
		printf("TAME GUJARATI BHASA PASAND KAYRI CHE!!\n\n");
		printf("<<TAMARI SERVICE NE PASAND KARO>>\n\n");
		printf("top up recharge maate 1 dabavo\n");
		printf("data addon recharge maate 2 dabavo\n");
		printf("special recharge maate 3 dabavo\n");
		printf("ENTER YOUR CHOICE:");
		scanf("%d", &service);
		printf("\n\n");
		switch (service)
		{
		case 1:
			printf("TOP UP RECHARGE THAI GAYU CHE\n\n");
			break;
		case 2:
			printf("DATA ADD ON RECHARGE THAI GYU CHE\n\n");
			break;
		case 3:
			printf("SPECIAL RECHARGE THAI GYU CHE\n\n");
		}
		break;
	}
}