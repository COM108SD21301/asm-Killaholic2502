#include <stdio.h>
#include <stdlib.h>
#include <math.h>


void Cn1(){
        float num,sd,cb2, nt = 0;


  printf("Mời nhập một số ngẫu nhiên: ");
  scanf("%f",&num);

    if (num == (int)num)
        {
            printf("Đây là số nguyên\n");
        }
        else{
            printf("Đây không phải là số nguyên\n");
            return;
        }


    if (num == 1)
        {
           printf("Đây là số nguyên tố\n");
            }
             else{
            for (int i = 1; i < num; i++)
                {
                    int num1 = (float) num;
                sd = num1%i;
                    if (sd == 0)
                    {
                       nt++; 
                    }
                }
                if(nt<=2)
                {printf("Đây là số nguyên tố\n");}
            else{
                printf("Đây không phải là số nguyên tố\n");
            }
            }
            
            cb2 = sqrt(num);

            
    if (cb2 == (int)cb2)
    {
        printf("Đây là số chính phương\n");
    }
    else{
        printf("Đây không phải số chính phương\n");
    }
    
             
 
}

void Cn2(){}

void Cn3(){}

void Cn4(){}

void Cn5(){}

void Cn6(){}


int main(){

    int choice;
    do
    {
   printf("-----------------------------------------\n");
   printf("|-------Mai Duy Anh ASM - BayTT---------|\n");
   printf("|---------------------------------------|\n");
   printf("|1. Chức năng tìm tính nguyên của một số|\n");
   printf("|2. Chức năng tìm UCLN và BCNN----------|\n");
   printf("|3. Chức năng tính tiền quán Karaoke----|\n");
   printf("|4. Chức năng tính tiền điện------------|\n");
   printf("|5. Chức năng vay tiền ngân hàng--------|\n");
   printf("|6. Comming soon ...--------------------|\n");
   printf("|0. Exit--------------------------------|\n");
   printf("-----------------------------------------\n");

   printf("Mời nhập số chương trình muốn chạy: ");
   scanf("%d",&choice);

   switch (choice)
   {
   case 1:
    Cn1();
    break;

    case 2:
    Cn2();
    break;

    case 3:
    Cn3();
    break;

    case 4:
    Cn4();
    break;

    case 5:
    Cn5();
    break;

    case 6:
    Cn6();
    break;

    case 0:
    printf("Tạm biệt");
    goto ketthuc;
   default:
   printf("Vui lòng nhập lại \n");
    break;
   }
} while (choice !=0);
    
                    
     ketthuc : return 0;           
}
    

