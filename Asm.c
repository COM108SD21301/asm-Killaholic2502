#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int UCLN(int a, int b){
    if (a == 0) return b;
    if (b == 0) return a;

    while (b != 0) {
        int r = a % b;
        a = b;
        b = r;
    }
    return a;
}

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
            for (int i = 1; i <= num; i++)
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

void Cn2(){

    int x,y;
    printf("Mời nhập số x: ");
    scanf("%d",&x);
    printf("Mời nhập số y: ");
    scanf("%d",&y);



    printf("Ước chung lớn nhất của %d và %d: %d\n",x,y,UCLN(x,y));
    printf("Bội chung nhỏ nhất của %d và %d: %d\n",x,y,x*y/UCLN(x,y));


    // printf(" %d",a[0]);

    // printf("\n");
    //  for (int i = 1; i <= y; i++)
    // {
    //     if(x%i == 0){
    //         b[o1]= i;
    //         o1++;
    //         printf(" %d",b[o1]);
    //     }
    // }

    // for (int i = 0; i <= o; i++)
    //     {
    //     for (int j = 0; j <= o1; j++)
    //     {
    //         if (a[i] == b[j])
    //         {
    //             c[c1]= a[i];
    //             c1++;
    //         }
            
    //     }
        
    //     }

    //     for (int i = 0; i <=c1; i++)
    //     {
    //         printf(" %d",c[i]);
    //     }
        
    

    
}

void Cn3(){
    int gia = 50000,giovao,giora,tongbill = 0,giosudung;


    printf("Giờ vào: \n");
    scanf("%d",&giovao);
    printf("Giờ ra: \n");
    scanf("%d",&giora);
    giosudung = giora - giovao;

if(12<=giovao && giovao<=23){
    

    
    
    if (giosudung>3)
    {
        tongbill = 3*gia + (giosudung-3)*gia*0.7 ;
    }else{
        tongbill = giosudung*gia;
    }
    



    if (14<=giovao && giovao<=17)
    {
        tongbill = tongbill*0.9;
    }

    printf("Tổng bill là : %d\n",tongbill);
    }
    else{printf("Ngoài giờ hoạt động\n");}
}

void Cn4(){

int sudung,tien;

printf("Mời nhập số tiền điện đã sử dụng: \n");
scanf("%d",&sudung);




if (sudung>=401)
{
    printf("Bậc6");
    tien = sudung * 2927;
} else{
    if (sudung >= 301 && sudung <=400)
    {
        printf("Bậc 5");
        tien = sudung * 2834;
    } else
    {
        if (sudung >= 201 && sudung <=300)
        {
            printf("Bậc 4");
            tien = sudung * 2536;
        } else
        {
            if (sudung >= 101 && sudung <=200)
            {
                printf("Bậc 3");
                tien = sudung *2014;
            }else {
                if (sudung >= 50 && sudung <=100)
                {
                    printf("Bậc 2");
                    tien = sudung * 1734;
                } else{
                    if (sudung <50){
                    printf("Bậc 1");
                    tien = sudung *1678;
                    }
                }
                
            }
            
        }
        
        
    }
    
    
}

printf("\n Số tiền cần phải trả là : %d \n",tien);


}

void Cn5(){
    int vay;
    printf("Nhập số tiền muốn vay: \n");
    scanf("%d",&vay);

    int thang = vay /12 ;
    

    printf("Kỳ hạn --- Lãi phải trả ----- Gốc phải trả ----- Số tiền phải trả ----- Số tiền còn lại\n");
    for (int i = 1; i <=12; i++)
    {
        int lai = vay *0.05;
        int tienphaitra = thang + lai;
        vay = vay - thang;
    printf("  %d         %d              %d              %d               %d   \n",i,lai,thang,tienphaitra,vay);
    }
    
    
}

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
   printf("Press Enter to continue...");
   getchar();
    getchar();
} while (choice !=0);
    
                    
     ketthuc : return 0;           
}
    

