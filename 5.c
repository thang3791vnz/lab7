#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int cardnumber;
   int passcard;
   int sodu = 5000;
   char tieptuc[10];
   int luachon;
   int cashout;
   printf("\nVui long nhap So the : ");
   scanf("%d", &cardnumber);
   printf("\nVui long nhap Ma the : ");
   scanf("%d", &passcard);
   if(cardnumber == 6 && passcard == 1)
   {
     printf("\nDang nhap thanh cong ");
     do{
        
        printf("Nhap so de lua chon \n");
       printf("1. Rut tien \n2.Kiem tra so du \n");
       scanf("%d", &luachon);
       
       switch(luachon)
       {
           case 1:
            printf("\nNhap so tien muon rut ra :");
            scanf("%d", &cashout);
            if(sodu >= cashout)
            {
            sodu -= cashout;
            printf("Ban da rut thanh cong %d \n So du con lai la : %d", cashout,sodu);
            }
            else
            {
            printf("Tai khoan cua ban khong du de rut");    
            }
            break;
           case 2:
            printf("So du cua ban hien tai la : %d", sodu);
            break;
       }
        printf("\nBan co muon tiep tuc khong (y\n) ? \n");
        scanf("%s", &tieptuc);
       }
       while(tieptuc != 'y');
       {
           printf("Nguon: Photocopy\t!\t!");
       }
   }
	return 0;
}
