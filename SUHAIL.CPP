//#################HEDERFILES ARE USED IN PROJECT#################
#include<stdlib.h>
#include<conio.h>
#include<iostream.h>
#include<iomanip.h>
#include<fstream.h>
#include<dos.h>
#include<stdio.h>
class banking
{
//###########WELCOME TO MY PROJECT##############
long int number,pass,account_number,mobile_number;
char name[20],sir_name[20],mother_name[20],father_name[20],type,username[20],address[30],country[30],altu[200];
   int pan_card,adhar_number,balance,withdraw,deposite;
public:
	void create_account();	//function to get data from user
	void show_account();	//function to show data on screen
	void modify();   //function to get new data from user
       void dep(int);	//function to accept amount and add to balance amount
	void draw(int);	//function to accept amount and subtract from balance amount
	void report();
	void pro();
	void put();
	void show();       //function to deposite amount
	void khan();     //function to show sound
	void wow();	//function to show creativity
	int retacno();	//function to return account number
	int retdeposit();
	char rettype();
       };
	      // ###INPUTTING OF ACCOUNT CREATE######
void banking:: create_account()

{
 textattr((4)+'q');
	cprintf("\nEnter The account No. =>");
	cin>>account_number;
	cprintf("\n\nEnter The Name of The account Holder => ");
	cin>>name;
	cprintf("\n Enter the Father Name =>");
	cin>>father_name;
	cprintf("\n Enter the Mother Name=>");
	cin>>mother_name;
	cprintf("\n Enter the Mobile Number=>");
	cin>>mobile_number;
	cprintf("\nEnter The Amount=> ");
	cin>>balance;
textcolor(GREEN);
cprintf("\nACCOUNT CREATED SUCCESSFULLY");
cout<<endl;
textcolor(LIGHTRED+BLINK);
cprintf("\nENTER THE KEY FOR ANOTHER CHOICE");
cin>>altu;
}
   void banking::show_account()
	      {
		 textbackground(LIGHTBLUE);
	      textattr((4)+'z');
cprintf(" NAME\t=");
cout<<name;
cout<<endl<<endl;
textattr((4)+'z');
cprintf("MOTHER_NAME\t=>");
textattr((4)+'z');
cout<<mother_name;
cout<<endl<<endl;
textattr((4)+'z');
cprintf("FATHER NAME=>");
textattr((4)+'z');
cout<<father_name;
cout<<endl<<endl;
cprintf("MOBILE NUMBER=>");
textattr((4)+'z');
cout<<mobile_number;
cout<<endl<<endl;
textattr((4)+'z');
cprintf("ACCOUNT NUMBER=>");
textattr((4)+'z');
cout<<account_number;
cout<<endl<<endl;
textattr((4)+'z');
cprintf("BALANCE=>");
	cout<<balance;
	cout<<endl<<endl;
textcolor( BLINK+LIGHTRED);
cout<<endl;
cprintf("\nENTER ANY KEY FOR ANOTHER CHOICE");
	       }
//###CREATIVIVTY#####

void banking::wow()
{
		   clrscr();
textattr((4)+'p'+BLINK);
//cout<<"\t\t\t\t\t\t\t\t\t\t\t\t\t";
cprintf("~~~~~~~~~~~~~~~~~~||$$_____BANKING MANAGEMENT SYSTEM______$$||~~~~~~~~~~~~~~~~~~");
textattr((4)+'m'+BLINK);
cout<<endl;//<<"\t\t\t\t\t\t\t\t\t\t\t\t\t";
cprintf("~~~~~~~~~~~~~~~~~~||$$_____WELCOME TO SAIFI BANK______$$||~~~~~~~~~~~~~~~~~~~~~~");
cout<<endl;
textattr((4)+'q'+BLINK);
//cout<<"\t\t\t\t\t\t\t\t\t\t\t\t\t
cprintf("~~~~~~~~~~~~~~~~~~||$$______MADE BY SUHAIL SAIFI $$||~~~~~~~~~~~~~~~~~~~~~~~~~~~");
}
void banking:: modify()
     {
  clrscr();
  int mobile_number;
  textattr((4)+'q');
     cprintf("\nThe account No=>");
     textattr((4)+'q');
      cout<<account_number;
	cprintf("\nEnter the Name of The account Holder=> ");
	gets(name);
	cprintf("\n Enter Mother_name=> ");
	cin>>mother_name;
	cprintf("\n Enter Father Name=>");
	cin>>father_name;
}

void banking:: report()
{
cout<<"\n\n";
cout<<account_number<<setw(20)<<name<<setw(25)<<balance<<setw(25)<<father_name<<endl;
}
char banking:: rettype()
{
	return type;
}

void  banking::pro()
{
 textattr((4)+'p');

		cout<<endl<<endl;
		cprintf("01. NEW ACCOUNT");
					cout<<endl<<endl;
		cprintf("02. DEPOSIT AMOUNT");
					cout<<endl<<endl;
		cprintf("03. WITHDRAW AMOUNT");
					cout<<endl<<endl;
		cprintf("04. ACCOUNT ENQUIRY");
					cout<<endl<<endl;
		cprintf("05. ALL ACCOUNT HOLDER LIST");
					cout<<endl<<endl;
		cprintf("06. CLOSE AN ACCOUNT");
					cout<<endl<<endl;
		cprintf("07. MODIFY AN ACCOUNT");
			 cout<<endl<<endl;
		cprintf("08.EXIT");
		   cout<<endl<<endl;

		   }
		   void banking:: put()
{
textbackground(LIGHTGREEN);
cout<<endl<<endl;;
textattr((4)+'n');
cprintf("Enter the amount to be withdraw=>");
cin>>withdraw;
if(balance>=withdraw)
{
balance=balance-withdraw;
textcolor(GREEN);
cprintf("\nCash Withdrawn Successfully");
cout<<endl<<endl;
textattr((4)+'q');
cprintf(" Current BALANCE=>");
cout<<balance;
textcolor(LIGHTRED+BLINK);
cout<<endl<<endl;
cprintf("$$||_____ENTER ANY KEY FOR ANOTHER CHOICE______$$||");
cin>>altu;
}
else
{
textcolor(RED);
cout<<endl<<endl;
textattr((4)+'q');
cprintf("WITHDRAW IS NOT SUCCESSFULL");
cout<<endl<<endl;
cprintf("CURRENT BALANCE=>");
cout<<balance;
textcolor(LIGHTRED+BLINK);
cout<<endl<<endl;
cprintf("ENTER THE ANY KEY FOR ANOTHER CHOICE");
cin>>altu;
}
}
//####DEPOSIT METHOD#######
void  banking::show()
{
textbackground(CYAN);
 textbackground(9);
cout<<endl;
textattr((4)+'n');
cprintf("Enter the amount to be deposite\t=>");
cin>>deposite;
if(balance>=deposite||balance<=deposite)
{
balance=balance+deposite;
textattr((4)+'q');
cprintf("\nAmount Deposite Successfully");
cout<<endl<<endl;
cprintf( "current balance=>");
cout<<balance;

	    textcolor(LIGHTRED+BLINK);
	    cout<<endl<<endl;
cprintf("ENTER THE ANY KEY FOR ANOTHER CHOICE ");
cin>>altu;
}
}


int  banking::retacno()
{
	return account_number;
}
int  banking::retdeposit()
{
	return balance;
}
//#################  NEW CREATIVITY  ####################
void banking:: khan()
{
char ch='y';
 clrscr();
 textbackground(GREEN );
 textbackground(WHITE);
 cprintf("if your wish to listen different press anykey");
 cout<<endl<<endl;
 cprintf( "    press x to programme--------------");
 while(ch!='x')
 {
 ch=getch();
	sound(10*random(50)) ;
 delay(75);
 nosound();
}
}

//********************FRONT PAGE OF PROJECT*******************
/*void saifi()
{

	 textbackground(BLACK);
char a[20];
char signature[20];
textbackground(random(10));
textcolor(YELLOW);//#######COLOUR PURPLE###########
cout<<endl<<endl<<"\t\t";
cout<<"All India Senior Secondary Board Examination";
textcolor(WHITE);
cout<<endl<<endl<<"\t\t\t";
cprintf("BAAL BAARI PUBLIC SCHOOL");
 textcolor(CYAN);                        //########BLUE COLOUR########
 cout<<endl<<endl<<"\t\t\t";
cprintf("KADRABAD,MODINAGAR");
 textcolor(YELLOW);
     cout<<endl<<endl<<"\t\t\t";
cprintf("Affiliated to C.B.S.E");
	       textcolor(WHITE);
	  cout<<endl<<endl<<"\t\t\t";
cprintf("COMPUTER SCIENCE (C++) PROJECT REPORT");
	  textcolor(GREEN);
	  cout<<endl<<endl<<"\t\t\t";
cprintf("BANKING MANAGEMENT");
	  textcolor( YELLOW);
	      cout<<endl<<endl<<"\t\t\t";
cprintf("2019-2020");
	  textcolor(WHITE);
	  cout<<endl<<endl;
 cprintf(" Submitted to:");
 textcolor(WHITE);
 cout<<"\t\t\t\t\t\t\t";
 cprintf("Submitted by:");
	  textcolor(BROWN);
 cout<<endl<<endl;

 cprintf(" Mr.ANKIT CHOUDHARY");
	  textcolor(BROWN);
			  cout<<"\t\t\t\t\t\t";
			  cprintf("SUHAIL SAIFI");
	    cout<<endl<<endl;
	     textcolor(WHITE);
 cprintf("(C++ Teacher)");
	     textcolor(YELLOW);
	     cout<<"\t\t\t\t\t\t\t\t";
			 textcolor(WHITE);
			 cprintf("X11-A");
		      cout<<endl<<endl;
				textcolor(YELLOW);
cprintf("Roll No");
cout<<"\t\t\t\t\t\t\t\t";
cprintf("signature");
 cin>>signature;
 }*/
				     void write_account();	//function to write record in binary file
void display_sp(int);	//function to display account details given by user
void modify_account(int);	//function to modify record of file
void delete_account(int);	//function to delete record of file
void display_all();		//function to display all account details
void deposit_withdraw(int, int); // function to desposit/withdraw amount for given account


///#############THE MAIN OF THE PROJECT#####################
void main()
	  {
	   clrscr(); //#########CALLING THE CLASS BY MAKING AN OBJECT#############
	   int n;

	  // ############### MAIN DECLERATION#########################
banking obj;
//saifi();
obj.khan();
textbackground(LIGHTGREEN);
char x;
do
{
clrscr();

	   textbackground(LIGHTGREEN);
obj.wow();
textbackground(LIGHTGREEN);
obj.pro();
cin>>x;
textbackground(CYAN);
	  clrscr();
switch(x)
{

	case '1':
			write_account();
			getch();
			break;
		case  '2':
		textattr((4)+'q');
			cprintf("\n\nEnter The account No. : ");
			 cin>>n;
		    deposit_withdraw(n, 1);
			break;
		case '3':
			textattr((4)+'q');
			cprintf("\n\nEnter The account No. : ");
			 cin>>n;
			deposit_withdraw(n, 2);
			break;
		case '4':
			textattr((4)+'q');
			cprintf("\n\nEnter The account No. : ");
			 cin>>n;
		display_sp(n);
			break;
		case '5':
		display_all();
			break;
		case '6':
			textattr((4)+'q');
			cprintf("\n\nEnter The account No. : ");
			 cin>>n;
		       delete_account(n);
			break;
		 case '7':
			textattr((4)+'q');
			cprintf("\n\nEnter The account No. : ");
			 cin>>n;
		      modify_account(n);
			break;

			case '8':
			textattr((4)+'p'+BLINK);
			cprintf("\n\nThanks for using Bank management system");
			break;
		}
	      }while(x!='8');
	      getch();
		     }


//***************************************************************
//    	function to write in file
//****************************************************************

void write_account()
{
	banking ac;
	ofstream outFile;
	outFile.open("banking.dat",ios::binary|ios::app);
	ac.create_account();
	outFile.write((char *) &ac, sizeof(banking));
	outFile.close();
	getch();

}

//***************************************************************
//    	function to read specific record from file
//****************************************************************

void display_sp(int n)
{
	banking ac;
	int flag=0;
	ifstream inFile;
    inFile.open("banking.dat",ios::binary|ios::in|ios::app);
	if(!inFile)
	{
		cout<<"File could not be open !! Press any Key...";
		return;
	}


    while(inFile.read((char *) &ac, sizeof(banking)))
	{
		if(ac.retacno()==n)
		{
			textattr((4)+'q');
			cout<<endl;
	cprintf("\nBALANCE DETAILS\n");
		textattr((4)+'q');
			ac.show_account();
			flag=1;
		}
	}

	if(flag==0)
	{
	cout<<endl;
	textattr(RED+BLINK);
		cprintf("Record not found");
		}
		getch();
			inFile.close();
	 }


//***************************************************************
//    	function to modify record of file
//****************************************************************


void modify_account(int n)
{
	int found=0;
	banking ac;
	fstream File;
    File.open("banking.dat",ios::binary|ios::in|ios::out);
	if(!File)
	{
		cout<<"File could not be open !! Press any Key...";
		return;
	}
    while(File.read((char *) &ac, sizeof(banking)) && found==0)
	{
		if(ac.retacno()==n)
		{


			ac.show_account();
			textattr((4)+'q');
			textbackground(WHITE);
			cprintf("\n\nEnter The New Details of account") ;
			cout<<endl;
			textbackground(CYAN);
			ac.modify();
			int pos=(-1)*sizeof(banking);
			File.seekp(pos,ios::cur);
		    File.write((char *) &ac, sizeof(banking));
		    cprintf("\n\n Record Updated");
		    found=1;
		  }
	}
	if(found==0)
	{
	textattr(RED+'q');
		cprintf("\n\nRecord not found ");
	}
	File.close();
		getch();
}

//***************************************************************
//    	function to delete record of file
//****************************************************************


void delete_account(int n)
{
	banking ac;
	ifstream inFile;
	ofstream outFile;
	inFile.open("banking.dat",ios::binary);
	if(!inFile)
	{
		cout<<"File could not be open !! Press any Key...";
		return;
	}
	outFile.open("Temp.dat",ios::binary|ios::in|ios::out);
	inFile.seekg(0,ios::beg);
	while(inFile.read((char *) &ac, sizeof(banking)))
	{
		if(ac.retacno()!=n)
		{
			outFile.write((char *) &ac, sizeof(banking));
		}
	}
    inFile.close();
	outFile.close();
	remove("banking.dat");
	rename("Temp.dat","banking.dat");
	textattr((4)+'q');
	cprintf("\n\nRecord Deleted ..");
       getch();
}

//***************************************************************
//    	function to display all accounts deposit list
//****************************************************************

void display_all()
{
		banking ac;
	ifstream inFile;
	inFile.open("banking.dat",ios::binary|ios::in|ios::app);
	if(!inFile)
	{
		cout<<"File could not be open !! Press any Key...";
		return;
	}
	textattr((0)+'p');
	cout<<endl<<endl;
	cprintf("$$||-------------ACCOUNT HOLDER LIST ----------------------------------$$||");
	cout<<endl;
	cprintf("===========================================================================");
	cout<<endl;
	cprintf("A/c no.              NAME                    Balance            Father.Name");
	cout<<endl;
	cprintf("============================================================================");
	while(inFile.read((char *) &ac, sizeof(	banking)))
	{
		ac.report();

	}
	inFile.close();
	getch();
}

//***************************************************************
//    	function to store deposit and withdraw amounts
//****************************************************************


    void deposit_withdraw(int n, int option)
{
	int amt;
	int found=0,withdraw,balance;
	banking ac;
	fstream File;
    File.open("banking.dat", ios::binary|ios::in|ios::out);
	if(!File)
	{
		cout<<"File could not be open !! Press any Key...";
		return;
	}
    while(File.read((char *) &ac, sizeof(banking)) && found==0)
	{
		if(ac.retacno()==n)
		{
			ac.show_account();
			if(option==1)
			{
				 ac.show();
			}
		    if(option==2)
			{
				ac.put();
      }
			int pos=(-1)* sizeof(ac);
			File.seekp(pos,ios::cur);
			File.write((char *) &ac, sizeof(banking));
			cprintf("\n\n Record Updated");
			found=1;
	       }
	 }

	if(found==0)
	{
		cprintf("\n\n Record Not Found ");
		}
		getch();
		 File.close();
}
