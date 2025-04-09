/* PAYROLL GROUP ASSIGNMENT  
NAME OF GROUP MEMBERS                ID NO

1.SINTAYEHU TEKILU                 14D   2553
2.ZERIHUN      DALGA                14D    3114
3.SABONTU    AMAN                      
 
SUBMITED DATE                       SUBMITED TO 
22/9/2015                           INSTRUCTOR          
*/


//#include <string>
#include <iostream>
using namespace std;

void INSERT();
void SEARCH();
void DELETE();
void UPDATE();
void PAYROLL();
void menu();
int total =0;//OBTAIND EMPLOYYES
const int NE =300;
string name[NE], lastname[NE] , address[NE];
int age[NE],tel[NE],id[NE];
float GS[NE],pay[NE],tax[NE],De[NE];
float Whr[NE],Wday[NE],pen[NE],NetS[NE];
char choice,choice1,sex[NE];
int main()
{
	cout<<"\n\t Welcome to our program\n";
	cout<<"\n\t EMPLOYEES PAYROL SYSTEM\n ";
	cout<<"//-------------------------------------\n";
	cout<<"\n<#>. press I to INSERT\n";
	cout<<"\n<#>. press S to SEARCH\n";
	cout<<"\n<#>.press  D to DELETE\n";
	cout<<"\n<#>.press  U to UPDATE\n ";
	cout<<"\n<#>.press  P to PAYROLl CALCULATION\n";
	cout<<"\n<#>.Select your option---->";
	cin>>choice;
	cout<<"----------------------------\n";
	while(true)
	{
		switch(choice)
		{
			case 'I':      //THIS FUNCTION IS USED TO CALL THE MENU FUNCTION
			
			INSERT();
			break;
			case 'S':
			SEARCH();
			break;
			case'D':
			DELETE();
			break;
			case 'U':
			UPDATE();
			break;
			case 'P':
			PAYROLL();
			break;
				default :
				cout<<"invalid choice please try again";
				
				cout<<"-------------------------------\n";	
		}
	}
}
void menu()//THIS FUNCTION IS USEDTO CALL THE MENU FUNCTION
{
	cout<<"\n\n\t\t\t EMPLOY'S PAYROLL SYSTEM ";
	cout<<"\n press I to INSERT";
	cout<<"\n press S to SEARCH";
	cout<<"\n press D to DELETE";
	cout<<"\n press U to UPDATE";
	cout<<"\n press P to PAYROLL CALCULATION";
	cout<<"\n Select your option   ";
	cin>>choice;
	cout<<"---------------------------\n";	
}
void INSERT()//THIS FUNCTION IS USED TO INSERT THE EMPLOYYEES DATA
{
	int num;
	cout<<"\nHow many number of employee do you want to insert?";
	cin>>num;
	for(int i =1+total;i<=num+total; i++)
	{
		cout<<"\n Enter the employs data in the following way :\n";
		cout<<"\n\t The data of employ:"<<i;
		cout<<"\n\n\tName  :";
		cin>>name[NE];
		cout<<"n\n\tLast Name  :";
		cin>>lastname[i];
		cout<<"\n\tsex (F/M)  : ";
		cin>>sex[i];
		cout<<"\n\tAge  :";
		cin>>age[i];
		cout<<"\n\tIdentity number  :";
		cin>>id[i];
		cout<<"\n\tPhone number  :+251";
		cin>>tel[i];
		cout<<"\n\tAddress  :";
		cin>>address[i];
		cout<<"\n\tEnter working hours per day  :";
		cin>>Whr[i];
		cout<<"\n\tEnter working days per month  :";
		cin>>Wday[i];
		cout<<"\n\tEnter the pay per hours  :";
		cin>>pay[i];	
	}
	
	total =num+total;
	cout<<"--------------------------------------\n";
	menu();	
}
void SEARCH()//THIS FUNCTION IS TO WORK SEARCH DETAIL DATA FOR PARTICULAR EMPLOYYEE
{
	if(total == 0)
	{
		cout<<"\nplease insert data before you choose the SEARCH menu";
	}
	else
	{
		int num;
		cout<<"\nEnter the identity number of the employ that you want to search";
		cin>>num;
		for(int i =1; i<=total; i++)
		{
			 if(num ==id[i])
			{
				GS[i]=Whr[i]*Wday[i]*pay[i];
				pen[i]= GS[i]*0.1;
				if(GS[i]>0 && GS[i]<=600)
				{
					tax[i]=0;
				}
				else if(GS[i]>600 && GS[i]<=1650)
				{
					tax[i]=(GS[i]*0.1)-60;	
				}
				else if(GS[i]>1650 && GS[i]<=3200)
				{
					tax[i]=(GS[i]*0,15)-142.5;
				}
				else if(GS[i]>3200 && GS[i]<=5250)
				{
     		tax[i]=(GS[i]*0.2)-302.5;
			}
			else if(GS[i]>5250 &&GS[i]<=7800)
			{
				tax[i]=(GS[i]*0.25)-565;
			}
			else if(GS[i]>7800 && GS[i]<=10900)
			{
				tax[i]=(GS[i]*0.3)-955;	
			}
			else if(GS[i]>10900)
			{
				tax[i]=(GS[i]*0.35)-1500;
			}
			else
		{
			cout<<"\nInvalid gross salary please try again!!";
		}
		De[i]=tax[i]+pen[i];
		NetS[i]=GS[i]-De[i];
		cout<<"\nThe data of the employee"<<endl;
		cout<<"\nName -----------: "<<name[i];
		cout<<"\nLast name ------: "<<lastname[i];
		cout<<"\nAddress --------: "<<address[i];
		cout<<"\nSex     --------: "<<sex[i];
		cout<<"\nIdentity number--:"<<id[i];
		cout<<"\nAge -------------: "<<age[i];
		cout<<"\nGross salary ----:  "<<GS[i];
		cout<<"\nTax -------------: "<<tax[i];
		cout<<"\nNet salary ------: "<<NetS[i];
		cout<<"------------------------\n";
		
			}
		else
		{
			cout<<"\nYou enterd invalid employee's id";
			cout<<"------------------------------";
			}	
				
		}
	}
	menu();
}
void DELETE()//THIS FUNCTION IS TO WORK DELETE THE DATA
{
	if(total==0)
	{
		cout<<"\nPlease ensert data before you choose the DELETE menu\n";	
	}
	else
	{
		
		cout<<"\nPress 1 to delete all data";
		cout<<"\nPress 2 to delete specifc data";
		int num;
		cin>>num;
		if(num==1)
		{
			
			total=0;
			
				cout<<"\nAll data is deleted!!";
		}
		else if(num==2)
		{
		 int code;
			cout<<"\nEnter the identity number of the employee that you want to delete :";
			cin>>code;
			for(int i=1; i<=total;i++)
			{
			if(code==id[i])
			{
			name[i]=" ";
			lastname[i]=" ";
			id[i]=0;
			sex[i]=0;
			Whr[i]=0;
			Wday[i]=0;
			address[i]="  ";
			pay[i]=0;
			tel[i]=0;
			total--;
			cout<<"\nYour required record is deleted!\n";
			cout<<"---------------------------------\n";	
			}
		
			else if(code!=id[i])
			{
				cout<<"You enterd invalid id ";
			}
			
		}
		
		}
		
		else
		{
			cout<<"\nInvalid input";
			cout<<"--------------------------\n";
		}
	}
	menu();
}
void UPDATE()//this function is used to update the data.
{
	if(total==0)
	{
		cout<<"\nPlease insert data before you choose the UPDATE menu\n";
		cout<<"-----------------------------------------\n";		
	}
	else
	{
		string newname[NE], newlastname[NE],newaddress[NE];
		int newage[NE],newtel[NE],newid[NE];
		float newGS[NE],newpay[NE],newtax[NE],newDe[NE];
		float newWhr[NE],newWday[NE],newpen[NE],newNetS[NE];
		int code;
		char option, newsex[NE];
		cout<<"\nEnter the code of the employ you want to update";
		cin>>code;
		for(int i =1; i<=total; i++)
		{
			if(code!=id[i])
			{
				cout<<"your id is not correct\n";
			}
			else
			{
				cout<<"\nUpdate the data of employee"<<i;
				cout<<"\nWhat do you want to update?";
				cout<<"\nPress N to name.";
				cout<<"\nPress L to last name.";
				cout<<"\nPress A to age.";
				cout<<"\nPress S to sex.";
				cout<<"\nPress C to code.";
				cout<<"\nPress P to phone number.";
				cout<<"\nPress R to address.";
				cout<<"\nPress H to working hour per a day.";
				cout<<"\nPress D to working day per month.";
				cout<<"\nPress M to payment per day.";
				cout<<"\nEnter your choice";
				cin>>choice;
				cout<<"------------------------\n";
				option=choice;
				switch(option)
				{
					case 'N':
						cout<<"\nEnter new name   :";
						cin>>newname[i];
						name[i]=newname[i];
						break;
						case'L':
						  cout<<"\nEnter new lastname  :";
						  cin>>newlastname[i];
						  lastname[i]=newlastname[i];
						  break;
						case'A':
							cout<<"\nEnter new age   :";
							cin>>newage[i];
							age[i]=newage[i];
							break;
							case'S':
								cout<<"\nEnter new sex  :";
								cin>>newsex[i];
								sex[i]=newsex[i];
								break;
								case'C':
									cout<<"\nEnter new code  :";
									cin>>newid[i];
									id[i]=newid[i];
									break;
									case'P':
										cout<<"\nEnter new phone number   :";
										cin>>newtel[i];
										tel[i]=newtel[i];
										break;
										case'R':
											cout<<"\nEnter new address   :";
											cin>>newaddress[i];
											address[i]=newaddress[i];
											break;
											case'H':
												cout<<"\nEnter new working hour per day   :";
												cin>>newWhr[i];
												Whr[i]=newWhr[i];
												break;
												case'D':
													cout<<"\nEnter new working day per month   :";
													cin>>newWday[i];
													Wday[i]=newWday[i];
													break;
													case'M':
														cout<<"\nEnter new pament per hour  :";
														cin>>newpay[i];
														pay[i]=newpay[i];
														break;
														default:
															cout<<"\nInvalid option you enterd";
				}											break;	
				}
				
			
			}
		}
	menu();	
	}
void updatemenu()//THIS FUNCTION WORK WHEN THE UPDATE FUNCTION CALL AND THE FUNCTION DOES WHAT PART OF THE DATA WE WANTTO UPDATE
{
	cout<<"\nWhat do you want to update ?";
	cout<<"\nPress N to name";
	cout<<"\nPress L to last name";
	cout<<"\nPress A to age";
	cout<<"\nPress S to sex";
	cout<<"\nPress C to code";
	cout<<"\nPress P to phone numbr";
	cout<<"\nPress R to address";
	cout<<"\nPress G to gross salary";
	cout<<"\nSelect your choice";
	cin>>choice;
	cout<<"------------------------\n";
}
void PAYROLL()
{
	if(total==0)
	{
		cout<<"\nPlease ensert data before you chooose the PAYROLL menu";
	}
	else
	{
		int code;
			cout<<"\nEnter the code of the emoloyee which you want to calculate payroll:";
			cin>>code;
			for(int i=1; i<=total;i++)
			{
				if(code==id[i])
				{
					GS[i]=Whr[i]*Wday[i]*pay[i];
					pen[i]=GS[i]*0.1;
					if(GS[i]>0 && GS[i]<=600)
					{
						tax[i]=0;	
					}
					else if(GS[i]>600 && GS[i]<=1650)
					{
						tax[i]=(GS[i]*0.1)-60;
					}
					else if(GS[i]>1650 && GS[i]<=3200)
					{
						tax[i]=(GS[i]*0.15)-142.5;
					}
					else if(GS[i]>3200 && GS[i]<=5250)
					{
						tax[i]=(GS[i]*0.2)-302.5;
					}
					else if(GS[i]>5250 && GS[i]<=7800)
					{
						tax[i]=(GS[i]*0.25)-565;
					}
					else if(GS[i]>7800 && GS[i]<=10900)
					{
						tax[i]=(GS[i]*0.3)-955;
					}
					else if(GS[i]>10900)
					{
						tax[i]=(GS[i]*0.35)-1500;
					}
					else
					{
						cout<<"\nYou are in CREDIT!!";
					}
					De[i]=tax[i]+pen[i];
					
						cout<<"\n\nThe gross salary of the employee is :"
					<<GS[i];
					
					cout<<"\nThe employee's tax that dedicates from employee's gross salary is :"
					<<tax[i];
					cout<<"\n\nThe pension that dedicates from the employee's gross salary is :"
					<<pen[i];
					cout<<"\n\nThe total deduction of the employ is :"
					<<De[i];
					cout<<"\n\nThe net salary of the employee is :"
					<<GS[i]-De[i];	
				}
				else
				{
					cout<<"\nInvalid id number";
				}	
	}
		
}
cout<<"-----------------------------\n";
menu();
}










