#include <iostream>
#include <locale.h>
main(){
	setlocale(LC_ALL, "Portuguese");
	int cod,prec,x=1,maior=0,menor=999;
	for(x=1;x<=5;x++)
		{
		    printf("Digite o codigo do produto:");
			scanf("%d",&cod);
			printf("Digite o preco do produto");
			scanf("%d",&prec);
			if(prec>maior)
			{
				maior=prec;
			}
			if(prec<menor)
			{
				menor=prec;
			}
		}
		printf("\nmaior é: %d\n",maior);
		printf("\nmenor é:%d\n",menor);
}
