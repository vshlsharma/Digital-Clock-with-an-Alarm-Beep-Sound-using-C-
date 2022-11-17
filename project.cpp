#include<iostream>
#include<conio.h>
#include <windows.h>
#include<stdlib.h>
using namespace std;
main(){
   int h=0,s=0,m=0;
   cout<<"Enter time in HH:MM:SS format -"<<endl;
   cin>>h>>m>>s;
   // it is for setup a alarm 
   int h1=0,m1=0,s1=0;
   cout<<"Set an alarm in hh:mm:ss"<<endl;
   cout<<"Set hour -"; 
   cin>>h1;
   cout<<"Set minute -";
   cin>>m1;
   cout<<"Set second -";
   cin>>s1;
   if(h<24 && m<60 && s<60 ){
         
   start:
   for(h;h<24;h++){
    for(m;m<60;m++){
        for(s;s<60;s++){
           // for clearing the screen 
           system("cls");
           cout<<h<<" : "<<m<<" : "<<s;
           // for checkin that time is AM or PM 
           if(h<12){
            cout<<" AM "<<endl;
           }
           else{
            cout<<" PM "<<endl;
           }
           // for the alarm sound 
           if(h==h1&&m==m1&&s==s1){
            cout<<endl;
            cout<<"Your Time is up"<<endl;
              Beep(500,1000);
              Beep(500,1000);
              Beep(500,1000);
              Beep(500,1000);
              Beep(500,1000);
              Beep(500,1000);
              Beep(500,1000);
              Beep(500,1000);
              cin.get();
              return 0;
           }
           //this will keep stop the loop for 1 second 
           for(int i=0;i<99999999;i++){
            i++;
            i--;
           }
     }
     s=0;
    }
    m=0;
   }
   h=0;
   // this will never stop the loop 
   goto start;
   }
   else{
       cout<<"Enter correct time format in HH:MM:SS"<<endl;
   }
}
// this s=0 ,m=0,h=0 mean second chalti hi rhegi 