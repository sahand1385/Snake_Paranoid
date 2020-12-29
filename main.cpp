///Made By Sahand Sabet => https://github.com/sahand1385
#include <iostream>
#include <graphics.h>
#include <stdlib.h>
using namespace std;
///Made By Sahand Sabet => https://github.com/sahand1385
void printC(){
     system("cls");
     int CREDIT_NUMS=50;
     char* creditln1=new char[CREDIT_NUMS];
     creditln1="\n\tSa-Sa Game\n\t version:1.0.6\n\t  Made by: Sahand Sabet\n\t   Website: Sa-Sa.ir    \n\t    Github: github.com/sahand1385   \n\t     ______________________________";
     for(int i=0;i<strlen( creditln1);i++)
     {
             cout<<creditln1[i];
             delay(20);
     }
     cout<<"\n\t       ";
     system("pause");
}
///Made By Sahand Sabet => https://github.com/sahand1385
int tavan(int a , int b){
    int func=1;
    for(int i=0;i<b;i++){
        func*=a;
    }
    return func;
}
///Made By Sahand Sabet => https://github.com/sahand1385
void hadaf(int a, int b){
    setcolor(15);
    circle(a,b,8);
    circle(a,b,6);
    circle(a,b,4);
}
///Made By Sahand Sabet => https://github.com/sahand1385
void unhadaf(int a, int b){
    setcolor(0);
    circle(a,b,8);
    circle(a,b,6);
    circle(a,b,4);
}
///Made By Sahand Sabet => https://github.com/sahand1385
void meno(){
    cout<<"\t******************************************\n";
    cout<<"\t****     What do you want to do ?      ***\n";
    cout<<"\t****                                   ***\n";
    cout<<"\t**** 1- Snake Game                     ***\n";
    cout<<"\t**** 2- ParaNoid Game                  ***\n";
    cout<<"\t**** 3- Help                           ***\n";
    cout<<"\t**** 4- Creator                        ***\n";
    cout<<"\t******************************************\n";
    cout<<"\t**** Enter the number : ";
}
///Made By Sahand Sabet => https://github.com/sahand1385
int main(){
    system("color B1");
    int sedai=7;
    char seda=sedai;
    while(1){
        ///Made By Sahand Sabet => https://github.com/sahand1385
        meno();
        int mainmenu;
        cin>>mainmenu;
        if(mainmenu==1){
            initwindow(800,600);
            settextstyle(3,4,4);
            outtextxy(560,400,"Click Here & Press Space");
            getch();
            int bakht=0;
            for(int i=0;i<10;i+=2){
                int x[30]={200,180,160,140,120},y[30]={200,200,200,200,200},a=20,b=0;
                int tool=4 , color=-1 ,ch2;
                char ch=' ';
                ///Made By Sahand Sabet => https://github.com/sahand1385
                int max = 500 , min = 100 ,ii=280;
                int xd=400,yd=400,fd=1,cl=14;
                setfillstyle(3,14);
                bar(280,290,500,310);
                setcolor(14);
                settextstyle(3,4,6);
                if(i==2)
                    outtextxy(560,400,"You are in level 2");
                if(i==4)
                    outtextxy(560,400,"You are in level 3");
                if(i==6)
                    outtextxy(560,400,"You are in level 4");
                if(i==8)
                    outtextxy(560,400,"You are in level 5");
                    ///Made By Sahand Sabet => https://github.com/sahand1385
                while(ii<=500){
                    setcolor(10);
                    circle(ii,300,10);
                    ii++;
                    delay(10);
                }
                setfillstyle(1,0);
                bar(100,260,580,500);
                while(1){
                    hadaf(xd,yd);
                    setcolor(11);
                    rectangle(49,49,710,510);
                    rectangle(39,39,720,520);
                    rectangle(29,29,730,530);
                    rectangle(19,19,740,540);
                    setfillstyle(3,11);
                    setcolor(15);
                    ///Made By Sahand Sabet => https://github.com/sahand1385
                    for(int i=0;i<=tool;i++){
                        circle(x[i],y[i],10);
                        setfillstyle(1,cl);
                        floodfill(x[i]-1,y[i],15);
                    }
                    ///Made By Sahand Sabet => https://github.com/sahand1385
                    delay(100);
                    unhadaf(xd,yd);
                    rectangle(49,49,710,510);
                    ///Made By Sahand Sabet => https://github.com/sahand1385
                    if( (x[0]==xd)&&(y[0]==yd) ){
                        cout<<seda;
                        cl+=color;
                        tool++;
                        xd=((rand() % (max - min)) + min);
                        xd-=xd%20;
                        yd=((rand() % (max - min)) + min);
                        yd-=yd%20;
                    }
                    if(cl==0){
                        cl++;
                        color=1;
                    }
                    if(cl==15){
                        cl--;
                        color=-1;
                    }
                    setcolor(0);
                    for(int i=0;i<=tool;i++){
                        setfillstyle(1,0);
                        floodfill(x[i]-1,y[i],15);
                        circle(x[i],y[i],10);
                    }
                    ///Made By Sahand Sabet => https://github.com/sahand1385
                    if(kbhit())
                        ch=getch();
                    ch2=ch;
                    if((ch2==77)&&(a==0)){
                        a=20;
                        b=0;
                    }
                    if((ch2==75)&&(a==0)){
                        a=-20;
                        b=0;
                    }
                    if((ch2==72)&&(b==0)){
                        a=0;
                        b=-20;
                    }
                    if((ch2==80)&&(b==0)){
                        a=0;
                        b=20;
                    }
                    ch=' ';
                    ///Made By Sahand Sabet => https://github.com/sahand1385
                    for(int i=tool-1;i>=0;i--){
                        x[i+1]=x[i];
                        y[i+1]=y[i];
                    }
                    x[0]+=a;
                    y[0]+=b;
                    if(x[0]<60){
                        cout<<seda;
                        bakht++;
                        x[0]=700;
                    }
                    if(x[0]>700){
                        cout<<seda;
                        bakht++;
                        x[0]=60;
                    }
                    if(y[0]<60){
                        cout<<seda;
                        bakht++;
                        y[0]=500;
                    }
                    if(y[0]>500){
                        cout<<seda;
                        bakht++;
                        y[0]=60;
                    }
                    if(tool>=10+i)
                        break;
                    if(bakht>5){
                        system("cls");
                        cout<<"\n\t***************(You Lose!!!!)*************\n";
                        i+=10;
                        closegraph();
                        break;
                    }
                }
            }
            ///Made By Sahand Sabet => https://github.com/sahand1385
            if(bakht<6){
                closegraph();
                system("cls");
                cout<<"\n\t***************(You Won !!!!)*************\n";
            }
        }
        else if(mainmenu==2){
            initwindow(800,600);
            settextstyle(3,4,4);
            outtextxy(560,400,"Click Here & Press Space");
            getch();
            ///Made By Sahand Sabet => https://github.com/sahand1385
            int cy1=250,cx1=380,cy2=250,cx2=420,cy3=220,cx3=400,win=0;
            rectangle(30,30,760,577);
            setfillstyle(3,14);
            floodfill(1,1,15);
            setfillstyle(3,14);
            bar(300,290,500,310);
            int x=100 , ii=300;
            int xt=rand()%(250-150+1)+150, yt=rand()%(200-150+1)+150 ;
            int a=10, b=10;
            char ch;
            delay(1000);
            ///Made By Sahand Sabet => https://github.com/sahand1385
            while(ii<=500){
                setcolor(10);
                circle(ii,300,10);
                ii++;
                delay(10);
            }
            ///Made By Sahand Sabet => https://github.com/sahand1385
            setfillstyle(1,0);
            bar(200,260,580,500);
            setcolor(15);
            while(1){
                ///Made By Sahand Sabet => https://github.com/sahand1385
                setcolor(13);
                circle(cx1,cy1,15);
                circle(cx2,cy2,15);
                ///Made By Sahand Sabet => https://github.com/sahand1385
                circle(cx3,cy3,15);
                setfillstyle(1,12);
                ///Made By Sahand Sabet => https://github.com/sahand1385
                floodfill(cx1-1,cy1-1,13);
                floodfill(cx2-1,cy2-1,13);
                floodfill(cx3-1,cy3-1,13);
                setcolor(15);
                circle(xt,yt,10);
                setfillstyle(1,9);
                floodfill(xt-1,yt-1,15);
                if(xt>730){
                    a=-a;
                }
                ///Made By Sahand Sabet => https://github.com/sahand1385
                if(yt<60){
                    b=10;
                }
                if(xt<60){
                    a=-a;
                }
                ///Made By Sahand Sabet => https://github.com/sahand1385
                setfillstyle(2,13);
                bar(x,550,x+80,570);
                delay(100);
                setcolor(13);
                circle(cx1,cy1,15);
                circle(cx2,cy2,15);
                circle(cx3,cy3,15);
                ///Made By Sahand Sabet => https://github.com/sahand1385
                if(tavan(xt-cx1,2)+ tavan(yt-cy1,2)<=1500){
                    win++;
                    cx1+=1000;
                    a=-a;
                    b=-b;
                }
                ///Made By Sahand Sabet => https://github.com/sahand1385
                if(tavan(xt-cx2,2)+ tavan(yt-cy2,2)<=1500){
                    win++;
                    cx2+=1000;
                    a=-a;
                    b=-b;
                }
                if(tavan(xt-cx3,2)+ tavan(yt-cy3,2)<=1500){
                    win++;
                    cx3+=1000;
                    a=-a;
                    b=-b;
                }
                ///Made By Sahand Sabet => https://github.com/sahand1385
                if(win>=3){
                    closegraph();
                    system("cls");
                    cout<<"\n\t***************(You Won !!!!)*************\n";
                    break;
                }
                ///Made By Sahand Sabet => https://github.com/sahand1385
                setcolor(0);
                circle(xt,yt,10);
                setfillstyle(1,0);
                floodfill(xt-1,yt-1,15);
                setfillstyle(2,0);
                bar(x,550,x+80,570);
                xt+=a;
                yt+=b;
                ///Made By Sahand Sabet => https://github.com/sahand1385
                if( kbhit() )
                    ch=getch();
                if(ch=='d')
                    x+=20;
                if(ch=='a')
                    x-=20;
                if(x<=31)
                    x=31;
                if(x+80>=750)
                    x=680;
                ch=' ';
                if(yt>520){
                    ///Made By Sahand Sabet => https://github.com/sahand1385
                    if(xt<x+20 && xt>x-10){
                        cout<<seda;
                        b=-10;
                        if(a<0)
                            a=-20;
                        if(a>0)
                            a=20;
                    }
                    else if(xt<x+60 && xt>x+20){
                        cout<<seda;
                        b=-10;
                        if(a<0)
                            a=-10;
                        if(a>0)
                            a=10;
                    }
                    else if(xt<x+90 && xt>x+60){
                        cout<<seda;
                        b=-10;
                        if(a<0)
                            a=-20;
                        if(a>0)
                            a=20;
                    }
                    else if(xt<x-10 or xt>x+100) {
                        closegraph();
                        system("cls");
                        cout<<"\n\t***************(You Lose!!!!)*************\n";
                        break;
                    }
                }
            }
        }
        ///Made By Sahand Sabet => https://github.com/sahand1385
        else if(mainmenu==4){
            printC();
            system("cls");
        }
        ///Made By Sahand Sabet => https://github.com/sahand1385
        else if(mainmenu==3){
            cout<<"\n\tIn Snake game , you should eat the food & move by arrows.Whatch out!you         cant use walls very much!\n";
            cout<<"\n\tIn Paranoid game , you should chatch the ball by a&d.\n\n\t";
            system("pause");
            system("cls");
        }
    }
    return 0;
}
///Made By Sahand Sabet => https://github.com/sahand1385
