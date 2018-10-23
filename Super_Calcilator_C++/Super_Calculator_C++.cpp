// Super_Calculator_C++.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <conio.h>
#include <stdio.h>
#include <string>
#include <iostream>
#include <cmath>

using namespace std;

//Global variables.....

int num1;
int num2;
int choi;
int count =0;
int count2=0;
int count3=0;
int count4=0;
int count5=0;
int count6=0;
int you;
int p;
int i;
int j;
int sum1,sum2,sum3,sum4,sum5;
double dv,sc;
int r;
int n;
int m;
int l=0;
int t;
int k;
char lenop[4] ={'+','+','+','\o'};
char lenop1[4]={'-','-','-','\o'};
char lenop2[4]={'*','*','*','\o'}; 
char lenop3[4]={'/','/','/','\o'};
char lenop4[4]={'%','%','%','\o'};
char lenop5[4]={'^','^','^','\o'};
char lenop6[5]={'-','*','+','/','\o'};
int res=0,res1;
string oper;


int  show_res(){
	if(you==1){
		 cout<<"sum of operation.."<<endl;
			 for(m=0;m<oper.length();m++){
				 cout<<num1<<endl;
			     cout<<"+"<<endl;
				 cout<<num2<<endl;
				 cout<<"-------"<<endl;
				 cout<<"="<<res<<endl;}
			 cout<<"sum of operation's results.."<<endl;
			 for(t=0;t<oper.length();t++){
				 cout<<res<<"\n+"<<endl;}
			    cout<<"-------"<<endl;
				cout<<"="<<res*oper.length()<<endl;
			 cout<<"Final result :"<<res*oper.length()<<endl;
	}else if(you==2){
		cout<<"Mul of operation.."<<endl;
			 for(m=0;m<oper.length();m++){ 
				 cout<<num1<<endl;
			     cout<<"*"<<endl;
				 cout<<num2<<endl;
				 cout<<"-------"<<endl;
				 cout<<"="<<res<<endl;}
			 cout<<"sum of operation's results.."<<endl;
			 for(t=0;t<oper.length();t++){
				 cout<<res<<"\n+"<<endl;}
			     cout<<"-------"<<endl;
				 cout<<"="<<res*oper.length()<<endl;
			     cout<<"Final result :"<<res*oper.length()<<endl;

	}else if(you==3){
		cout<<"Sub of operation.."<<endl;
			 for(m=0;m<oper.length();m++){
				 cout<<num1<<endl;
			     cout<<"-"<<endl;
				 cout<<num2<<endl;
				 cout<<"-------"<<endl;
				 cout<<"="<<res<<endl;}
			 cout<<"sum of operation's results.."<<endl;
			 for(t=0;t<oper.length();t++){
				 cout<<res<<"\n+"<<endl;}
			    cout<<"-------"<<endl;
				cout<<"="<<res*oper.length()<<endl;
			 cout<<"Final result :"<<res*oper.length()<<endl;

	}else if(you==4){
		cout<<"Dev of operation.."<<endl;
			 for(m=0;m<oper.length();m++){
				 cout<<num1<<endl;
			     cout<<"/"<<endl;
				 cout<<num2<<endl;
				 cout<<"-------"<<endl;
				 cout<<"="<<res<<endl;}
			 cout<<"sum of operation's results.."<<endl;
			 for(t=0;t<oper.length();t++){
				 cout<<res<<"\n+"<<endl;}
			    cout<<"-------"<<endl;
				cout<<"="<<res*oper.length()<<endl;
			 cout<<"Final result :"<<res*oper.length()<<endl;

	}else if(you==5){
		cout<<"Reminder of operation.."<<endl;
			 for(m=0;m<oper.length();m++){
				 cout<<num1<<endl;
			     cout<<"%"<<endl;
				 cout<<num2<<endl;
				 cout<<"-------"<<endl;
				 cout<<"="<<res<<endl;}
			 cout<<"sum of operation's results.."<<endl;
			 for(t=0;t<oper.length();t++){
				 cout<<res<<"\n+"<<endl;}
			    cout<<"-------"<<endl;
				cout<<"="<<res*oper.length()<<endl;
			 cout<<"Final result :"<<res*oper.length()<<endl;

	}else if(you==6){
		cout<<"power of operation.."<<endl;
			 for(m=0;m<oper.length();m++){
				 cout<<dv<<endl;
			     cout<<"^"<<endl;
				 cout<<sc<<endl;
				 cout<<"-------"<<endl;
				 cout<<"="<<res<<endl;}
			 cout<<"sum of operation's results.."<<endl;
			 for(t=0;t<oper.length();t++){
				 cout<<res<<"\n+"<<endl;}
			    cout<<"-------"<<endl;
				cout<<"="<<res*oper.length()<<endl;
			 cout<<"Final result :"<<res*oper.length()<<endl;

	}else if(you==7){
		cout<<"all operations...(_Do_its what the matter(Notice that)"<<endl;
			for(r=0;r<oper.length();r++){
			if(oper[r]=='/'){
				 cout<<num1<<endl;
			     cout<<"/"<<endl;
				 cout<<num2<<endl;
				 sum1=num1/num2;
				 cout<<"-------"<<endl;
				 cout<<"="<< sum1<<endl;
			}
			else if(oper[r]=='*'){
				 cout<<num1<<endl;
			     cout<<"*"<<endl;
				 cout<<num2<<endl;
				 cout<<"-------"<<endl;
				 sum2=num1*num2;
				 cout<<"="<<sum2<<endl;
			}
			else if(oper[r]=='-'){
				 cout<<num1<<endl;
			     cout<<"-"<<endl;
				 cout<<num2<<endl;
				 cout<<"-------"<<endl;
				 sum3=num1-num2;
				 cout<<"="<<sum3<<endl;
			}
			else if(oper[r]=='+'){
				 cout<<num1<<endl;
			     cout<<"+"<<endl;
				 cout<<num2<<endl;
				 cout<<"-------"<<endl;
				 sum4=num1+num2;
				 cout<<"="<<sum4<<endl;
			}else if(oper[r]=='^'){
				 cout<<num1<<endl;
			     cout<<"^"<<endl;
				 cout<<num2<<endl;
				 cout<<"-------"<<endl;
				 res1=pow((double)num1,(double)num2);
				 cout<<"="<<res1<<endl;
			}else if(oper[r]=='%'){
				 cout<<num1<<endl;
			     cout<<"%"<<endl;
				 cout<<num2<<endl;
				 cout<<"-------"<<endl;
				 sum5=num1%num2;
				 cout<<"="<<sum5<<endl;
			}
				 }
			
			 cout<<"sum of operation's results.."<<endl;
			 for(t=0;t<oper.length();t++){
				  if(oper[t]=='/'){
					  cout<<sum1<<"\n+"<<endl; }
				  else if(oper[t]=='*'){
					  cout<<sum2<<"\n+"<<endl; }
				  else if(oper[t]=='+'){
					  cout<<sum4<<"\n+"<<endl; }
				  else if(oper[t]=='-'){
					  cout<<sum3<<"\n+"<<endl; }
				  else if(oper[t]=='^'){
					  cout<<res1<<"\n+"<<endl; }
				  else if(oper[t]=='%'){
					  cout<<sum5<<"\n+"<<endl; }
			 }
			    cout<<"-------"<<endl;
				cout<<"="<<res<<endl;
			    cout<<"Final result :"<<res<<endl;
	}else {
		cout<<"wrrong!!"<<endl;
	}
return 0;
  
}
int _tmain(int argc, _TCHAR* argv[])
{

	cout<<"----welcome to SuperCalculator-----\n\nTHE BLENDER OF OPERATORS!!..!\n\n";

    cout<<"-> STARTING!\n";

	//cout<<"Please enter 5 primers number\n[a prime number is a number that return an exact_devision only on 1 or itself!]:"<<endl;
	//for(i=0;i<5;i++)
	   //cin>>choi;
       //if(choi % 3==0){
	   //cout<<"Wrrong!!"<<endl; 
	  //}else {
		//cout<<"great!..the numbers you have entered is primes.."<<endl;

		cout<<"\nPlease enter tow numbers and than enter an operation\n which you want to apply on them with times that it will repeating \nlike[+++++]-its 5 times now will repeat...!"<<endl;
		cout<<"1-[+]  2-[*]\n"
			  "3-[-]  4-[/]\n"
			  "5-[%]  6-[^]\n"
		      "7-[all operations]"<<endl;
		cin>>you;
		if(you==1){
		cout<<"enter first integer:"<<endl;
		cin>>num1; 
		cout<<"enter second intger:"<<endl;
		cin>>num2;
		
		cout<<"enter count of operator like[+++++]:"<<endl;
		cin>>oper;
		///int coun;
		/*for(i=0;i<5;i++){
		coun=1;
		coun++;}*/

		//for(j=0;j<oper.length();j++){

			 for(j=0;j<3;j++)
			 for(r=0;r<oper.length();r++)
			 if(oper[r]==lenop[j])
			//for(i=0;i<oper.length();i++)
			 res=num1+num2;
		     cout<<"her's result of your operation ..its apply of "<<oper.length()<<" times..!"<<endl;
			 cout<<res*oper.length()<<endl;
			 cout<<"click [1] to see the steps!!"<<endl;
			 cin>>k;
			 if(k==1){
			
				  show_res();	  
			 
			 }
		     }else if(you==2){

	         cout<<"enter first integer:"<<endl;
		     cin>>num1;
		     cout<<"enter second intger:"<<endl;
		     cin>>num2;
		
		     cout<<"enter count of operator like[+++++]:"<<endl;
			 cin>>oper;
			 for(j=0;j<3;j++)
			 for(r=0;r<oper.length();r++)
			 if(oper[r]==lenop2[j])

			 res=num1*num2;
		     cout<<"her's result of your operation ..its apply of "<<oper.length()<<" times..!"<<endl;
			 cout<<res*oper.length()<<endl;
			 cout<<"click [1] to see the steps!!"<<endl;
			 cin>>k;
			 if(k==1){
			
				  show_res();	  
			 
			 }
		}else if(you==3){

	cout<<"enter first integer:"<<endl;
		cin>>num1;
		cout<<"enter second intger:"<<endl;
		cin>>num2;
		
		cout<<"enter count of operator like[+++++]:"<<endl;
			cin>>oper;
			for(j=0;j<3;j++)
			for(r=0;r<oper.length();r++)
			if(oper[r]==lenop1[j])

			 res=num1-num2;
		     cout<<"her's result of your operation ..its apply of "<<oper.length()<<" times..!"<<endl;
			 cout<<res*oper.length()<<endl;
			 cout<<"click [1] to see the steps!!"<<endl;
			 cin>>k;
			 if(k==1){
			
				  show_res();	  
			 
			 }
		}else if(you==4){

	    cout<<"enter first integer:"<<endl;
		cin>>num1;
		cout<<"enter second intger:"<<endl;
		cin>>num2;
		
		cout<<"enter count of operator like[++++++]:"<<endl;
			cin>>oper;
			for(j=0;j<3;j++)
			for(r=0;r<oper.length();r++)
			if(oper[r]==lenop3[j])
  
			res=num1/num2;
		    cout<<"her's result of your operation ..its apply of "<<oper.length()<<" times..!"<<endl;
			cout<<res*oper.length()<<endl;
			cout<<"click [1] to see the steps!!"<<endl;
			cin>>k;
			if(k==1){
			
				  show_res();	  
			 }
		}
		else if(you==5){

	        cout<<"enter first integer:"<<endl;
		    cin>>num1;
		    cout<<"enter second intger:"<<endl;
		    cin>>num2;
		
		    cout<<"enter count of operator like[+++++]:"<<endl;
			cin>>oper;
			for(j=0;j<3;j++)
			for(r=0;r<oper.length();r++)
			if(oper[r]==lenop4[j])

			 res=num1%num2;
		     cout<<"her's result of your operation ..its apply of "<<oper.length()<<" times..!"<<endl;
			 cout<<res*oper.length()<<endl;
			 cout<<"click [1] to see the steps!!"<<endl;
			 cin>>k;
			 if(k==1){
			
				  show_res();	  
			 }
		}else if(you==7){

	    cout<<"enter first integer:"<<endl;
		cin>>num1;
		cout<<"enter second integer:"<<endl;
		cin>>num2;
		
		    cout<<"enter count of operator like[+++++]:"<<endl;
			cin>>oper;
			//for(j=0;j<5;j++)
			for(r=0;r<oper.length();r++)
			if(oper[r]=='/')
			    count++;
				sum1=(num1/num2)*count;
			//for(j=0;j<5;j++)
			for(r=0;r<oper.length();r++)
			 if(oper[r]=='*')    
				count2++;
				sum2=(num1*num2)*count2;
			//for(j=0;j<5;j++)
			for(r=0;r<oper.length();r++)
			if(oper[r]=='-')
				count3++;
				sum3=(num1-num2)*count3;
			//for(j=0;j<5;j++)
			for(r=0;r<oper.length();r++)
			if(oper[r]=='+')
				count4++;
				sum4=(num1+num2)*count4;
			//for(j=0;j<5;j++)
			for(r=0;r<oper.length();r++)
			if(oper[r]=='^')
				count5++;
				res1=pow((double)num1,(double)num2)*count5;
			//for(j=0;j<5;j++)
			for(r=0;r<oper.length();r++)
			if(oper[r]=='%')
				count6++;
				sum5=(num1%num2)*count6;
		     cout<<"her's result of your operation ..its apply of "<<oper.length()<<" times..!"<<endl;
			 res=sum1+sum2+sum3+sum4+res1+sum5;
			 cout<<res<<endl;
			 //cout<<count<<endl;
			 cout<<"click [1] to see the steps!!"<<endl;
			 cin>>k;
			 if(k==1){
			
				  show_res();	  
			 }
		}else if(you==6){

	    cout<<"enter first integer:"<<endl;
		cin>>dv;
		cout<<"enter second intger:"<<endl;
		cin>>sc;
		cout<<"enter count of operator like[+++++]:"<<endl;
			cin>>oper;
			for(j=0;j<3;j++)
			for(r=0;r<oper.length();r++)
			if(oper[r]==lenop5[j])

			 res=pow(dv,sc);
		     cout<<"her's result of your operation ..its apply of "<<oper.length()<<" times..!"<<endl;
			 cout<<res*oper.length()<<endl;
			 cout<<"click [1] to see the steps!!"<<endl;
			 cin>>k;
			 if(k==1){
			
 				  show_res();	  
			 }
		}
		else {
			cout<<"Invalide input!!"<<endl;
		}
	 
	}
