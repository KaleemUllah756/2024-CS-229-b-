//Task 1
#include <iostream>
#include<windows.h>
using namespace std;
void gotoxy(int, int);

main(){
 system("cls");
gotoxy(50,50);
  cout<< "KALEEM";
 

}
void gotoxy(int x, int y)
{
 COORD coordinates;
coordinates.X = x;
 coordinates.Y = y;
SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);

}

//Task 2
#include <iostream>
#include<windows.h>
using namespace std;
void gotoxy(int,int);
void printH();
void printS();
void printSa();
void printAa();
void printA();
void printN();
main(){
system ("cls");
 
 printH();
 printAa();
 printS();
 printSa();
 printA();
 printN();

}
void gotoxy(int x, int y)
{
 COORD coordinates;
coordinates.X = x;
 coordinates.Y = y;
SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);

}
void printH(){
gotoxy(0,1);
cout<<"H"<<endl;
}
void printA(){
gotoxy(0,2);
cout<<"A"<<endl;
}
void printSa(){
gotoxy(0,3);
cout<<"S"<<endl;
}
void printS(){
gotoxy(0,4);
cout<<"S"<<endl;
}
void printAa(){
gotoxy(0,5);
cout<<"A"<<endl;
}
void printN(){
gotoxy(0,6);
cout<<"N"<<endl;
}

//Task 3

#include <iostream>
#include<windows.h>
using namespace std; 
void gotoxy(int, int);
void printmaze();
void player(int x, int y);
 main()
{
    int x=1, y=1;
   system("cls");
     printmaze();
     while(true)
{
player(x,y);
y = y+1;
if(y== 5){
    y=1;

}
}
}
void player(int x, int y){
gotoxy(x,y);
cout<< "P";
Sleep(100);
gotoxy(x,y);
cout<< " ";
}
void printmaze()
{
cout<< "##################"<<endl;
cout<< "#                #"<<endl;
cout<< "#                #"<<endl;
cout<< "#                #"<<endl;
cout<< "#                #"<<endl;
cout<< "#                #"<<endl;
cout<< "##################"<<endl;

}
void gotoxy(int x, int y)
{
 COORD coordinates;
coordinates.X = x;
 coordinates.Y = y;
SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);

}

//Task 4
#include <iostream>
#include<windows.h>
using namespace std;
void printMenu();
void calculateAggregrate(string name,float matricmarks , float intermarks, float ecatmarks);
void compareMarks(string namestd1, int ecatmarksstd1, string namestd2, int ecatmarksstd2);
main(){
int choice;
printMenu();
cin>>choice;
switch(choice){
case 1:{
string name;
float matricmarks,intermarks,ecatmarks;
cout<<"Enter your name:"<<endl;
cin>>name;
cout<<"Enter your matric marks:"<<endl;
cin>>matricmarks;
cout<<"Enter your inter marks:"<<endl;
cin>>intermarks;
cout<<"Enter your ecat marks:"<<endl;
cin>>ecatmarks;
calculateAggregrate(name,matricmarks,intermarks,ecatmarks);
break;
}

case 2:{
string namestd1,namestd2;
float ecatmarksstd1,ecatmarksstd2;
cout<<"Enter the first student name:"<<endl;
cin>>namestd1;
cout<<"Enter first student ecat masks:"<<endl;
cin>>ecatmarksstd1;
cout<<"Enter the second student name:"<<endl;
cin>>namestd2;
cout<<"Enter the second student ecat marks:"<<endl;
cin>>ecatmarksstd2;

compareMarks(namestd1,ecatmarksstd1,namestd2,ecatmarksstd2);
break;
}

}

}
void printMenu(){
cout<<"      UNIVERSITY MANAGEMENT SYSTEM     "<<endl;
cout<<"======================================="<<endl;
cout<<"1. Calculate Aggregrate:"<<endl;
cout<<"2. Compare ecat marks:"<<endl;

}

void calculateAggregrate(string name,float matricmarks,float intermarks,float ecatmarks){
float matric_percent,inter_percent,e_percent,aggregrate;

matric_percent=(matricmarks/1100)*100*0.10;
inter_percent=(intermarks/550)*100*0.50;
e_percent=(ecatmarks/400)*100*0.40;
aggregrate=matric_percent+inter_percent+e_percent;
cout<<aggregrate<<endl;

}
 void compareMarks(string namestd1, int ecatmarksstd1, string namestd2, int ecatmarksstd2){

if(ecatmarksstd1>ecatmarksstd2){
cout<<namestd1<<"Will get the first rollno."<<endl;
}
if(ecatmarksstd2>ecatmarksstd1){
cout<<namestd2<<" Will get the first rollno."<<endl;
}

}

//Task 5
#include <iostream>
#include <windows.h>
using namespace std;
void compare(int num1, int num2);
main(){
int num1,num2;
cout<<"Enter the first number:"<<endl;
cin>>num1;
cout<<"Enter the second number:"<<endl;
cin>>num2;
  compare(num1,num2);
}
void compare(int num1, int num2){
  if(num1==num2){
 cout<<"TRUE"<<endl;
}
  if(num1!=num2){
   cout<<"False"<<endl;

}


}
 //Task 6
#include <iostream>
#include<windows.h>
using namespace std;
void reverse(string userinput);
main(){
string userinput;
cout<<"Enter 'True' or 'False':"<<endl;
cin>>userinput;
reverse(userinput);


}
void reverse(string userinput){
if(userinput=="true"){
cout<<"False"<<endl;
}
if(userinput=="false"){
cout<<"True"<<endl;
}



}
//Task 7
#include <iostream>
#include <windows.h>
using namespace std;
void discount(string name, float price1, float price2, float price3 ,float price4, float price5, float price6);
main(){
string name;
float price1,price2,price3,price4,price5,price6;
cout<<"Enter the country name:"<<endl;
cin>>name;
cout<<"Enter the ticket price in dollars:"<<endl;
cin>>price1;
discount(name,price1,price2,price3,price4,price5,price6);

}void discount(string name, float price1, float price2, float price3 ,float price4, float price5, float price6){
price2=price1-(price1/20);
if(name=="pakistan"){
cout<<"Final ticket price in dollars:"<<price2<<endl;
}
price3=price1-(price1/10);
if(name=="ireland"){
cout<<"Final ticket price in dollars:"<<price3<<endl;
}
price4=price1-(price1/5);
if(name=="india"){
cout<<"Final ticket price in dollars:"<<price4<<endl;
}
price5=price1-(price1*(0.30));
if(name=="england"){
cout<<"Final ticket price in dollars:"<<price5<<endl;
}
price6=price1-(price1*(0.45));
if(name=="canada"){
cout<<"Final ticket price in dollars:"<<price6<<endl;
}
}
//Task 8
#include <iostream>
#include<windows.h>
using namespace std;
void checkSpeed(int speed);
main(){
int speed;
cout<<"Speed:"<<endl;
cin>>speed;
checkSpeed(speed);

}
void checkSpeed(int speed){
if(speed>101){
cout<<"Halt..... You will be challenged!!!"<<endl;
}
if(speed<101){
cout<<"Perfect! You are going good"<<endl;

}

}
//Task 9
#include <iostream>
#include<windows.h>
using namespace std;
void dice(int a, int b);
main(){
int a,b;
cout<<"Enter your position:"<<endl;
cin>>a;
cout<<"Enter your friend position:"<<endl;
cin>>b;
dice(a,b);


}
void dice(int a, int b){
if((b-a)<=6){
cout<<"True"<<endl;

}
if((b-a)>6){
cout<<"False"<<endl;
}

}
//Task 10
#include <iostream>
#include<windows.h>
using namespace std;
void time(int h,int m);
main(){
int h,m;
cout<<"Enter the time in hours:"<<endl;
cin>>h;
cout<<"Enter the time in minutes:"<<endl;
cin>>m;
time(h,m);

}
void time(int h,int m){
if((h*60)>m){
cout<<h<<endl;

}
if((h*60)<m){
cout<<m<<endl;
}

}
//Task 11
#include <iostream>
#include<windows.h>
using namespace std;
void flowerShop(int redRose, int whiteRose, int tulip);
main(){
int redRose,whiteRose,tulip;
cout<<"Enter the number of red roses:"<<endl;
cin>>redRose;
cout<<"Enter the number of white roses:"<<endl;
cin>>whiteRose;
cout<<"Enter the numbers of tulips:"<<endl;
cin>>tulip;
 flowerShop(redRose,whiteRose,tulip); 
}
void flowerShop(int redRose, int whiteRose,int tulip){
float r_price,w_price,t_price,total_price,dis_price;
r_price=redRose*2.00;
w_price=whiteRose*4.10;
t_price=tulip*2.50;
total_price=(r_price+w_price+t_price);
dis_price=total_price-(total_price/5);
cout<<"Original price:"<<total_price<<endl;
if(total_price>200){
cout<<"Price after discount:"<<dis_price<<endl;

}


}
//Task 12
             #include <iostream>
using namespace std;
void pet(int holidays);
main(){
int holidays;
cout<<"Holidays:"<<endl;
cin>>holidays;
pet(holidays);

}
void pet(int holidays){
int working_days,time_games,difference,time_h,time_hm,total_time;
working_days=365-20;
time_games=(working_days*63+holidays*127);
difference=30000-time_games;
time_h=(difference/60);
time_hm=difference%60;

if(time_games>30000){
cout<<"Tom sleeps well "<<time_h<<" hours and "<<time_hm<<" minutes for play."<<endl;
}
if(time_games<30000){
cout<<"Tom will ran away "<<time_h<<" hours and "<<time_hm<<" minutes for play."<<endl;  

}


}
//Task 13
#include <iostream>
using namespace std;
void tissueroll(int people, int tp);
main(){
int people,tp;
cout<<"Number of people in the household:"<<endl;
cin>>people;
cout<<"Number of rolls of TP:"<<endl;
cin>>tp;
tissueroll(people,tp);

}
void tissueroll(int people, int tp){
int total_sheets,sheets_use,days;
total_sheets=tp*500;
sheets_use=people*57;
days=total_sheets/sheets_use;
if(days<14){
cout<<"Your TP will only last "<<days<<" days ,buy more!"<<endl;
}
if(days>14){
cout<<"Your TP will last "<<days<<" days, no need to panic!"<<endl;


}



}
//Example
#include <iostream>
#include<windows.h>
using namespace std;

void gotoxy(int x, int y)
{
 COORD coordinates;
coordinates.X = x;
 coordinates.Y = y;
SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);

}
 int main()
{
system("cls");
cout<< "Test";
 gotoxy(15,15);
cout<< " My name is Kaleem";
 return 0;


}













