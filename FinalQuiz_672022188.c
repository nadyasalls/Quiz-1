#include <stdio.h>
#include <conio.h>
#include <windows.h>

void gotoxy(int x, int y)
{
    COORD coord;
    coord.X = x;
    coord.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}
void setColor(unsigned short color)
{
    HANDLE hCon = GetStdHandle(STD_OUTPUT_HANDLE);

    SetConsoleTextAttribute(hCon, color);
}


main(){
    int input,y=1;
    char pil;

    system("cls");
    do{
    if(y==0){
         y++;
         continue;
    }
        if(y==5){
            y--;
            continue;
        }
    gotoxy(0,2);
    printf("   ");
    setColor(11);
    for(int a=0;a<33;a++){printf("=");}
    printf("\n   |           M E N U             |\n   ");
    for(int a=0;a<33;a++){printf("=");}
    //printf("\n   |                               |\n");
    printf("\n   |         1. Level 1            |\n");
    printf("   |         2. Level 2            |\n");
    printf("   |         3. Level 3            |\n");
    printf("   |         4. Exit               |\n");
    printf("   |                               |\n   ");
    setColor(11);
    for(int a=0;a<33;a++){printf("=");}
    gotoxy(8,4+y);printf("-->>"); //gotoxy(28,5+y);printf("<<");
            pil=getch();
            switch(pil){
            case 72:
                y--;
                break;
            case 80:
                y++;
                break;
            default:
                break;
    }
    }while((int)pil!=13);
    input=y;
    system("cls");
    switch (input){
    case 1:{
        int input;
    printf("Menu 1\nmasukan angka : ");
    scanf("%d",&input);
        for (int i=0;i<=input;i++){
            for(int z=i;z<=i*2;z++){
                printf("%d ",z);
            }
            printf("\n");
        }
        break;
    }
    case 2: {
           system("cls");
        int masukan;
        printf("Masukkan angka : ");
        scanf("%d", &masukan);
        for(int i=1; i<=masukan; i++){
        for(int j=1; j<=i; j++){
            printf ("%d ", i*j);

        }
        printf("\n");
    }
        break;
    }
    case 3: {
        system("cls");
    int isi, batas, bil, temp, temp2, bataskiri, tgh, seg1, seg2, seg3, seg4, spasi1,spasi2;
        printf("Masukan Bilangan: ");
        scanf("%d",&bil);
        isi=bil-1;
        temp=isi;
        temp2=isi;
    for (batas=1;batas<=isi;batas++){
        //SEGITIGA KIRI ATAS//
        for (spasi1=isi;spasi1>=batas;spasi1--)
            printf("%s"," ");
            for (seg1=1;seg1<=batas;seg1++)
                printf("%d",seg1);
        //SEGITIGA KANAN ATAS//
                for (seg2=batas-1;seg2>=1;seg2--)
                    printf("%d",seg2);
                    printf("\n");
    }
        //TENGAH//
    for(bataskiri=1;bataskiri<=bil;bataskiri++)
        printf("%d",bataskiri);
            for(tgh=bil-1;tgh>=1;tgh--)
                printf("%d",tgh);
                    printf("\n");
    for (batas=1;batas<=isi;batas++){
        //SEGITIGA KIRI BAWAH//
    for (spasi2=1;spasi2<=batas;spasi2++)
        printf("%s"," ");
            for (seg3=1;seg3<=temp;seg3++)
                    printf("%d",seg3);temp=temp-1;
        //SEGITIGA KANAN BAWAH//
    for (seg4=temp2-1;seg4>=1;seg4--)
        printf("%d",seg4);temp2=temp2-1;
            printf("\n");
    }
    break;
    }
    case 4: {
        printf("T E R I M A K A S I H ! ! !"); system("pause > null"); exit(0);
    }
    default : break;

}
system("pause > null");
system("pause");
goto*main();
}
