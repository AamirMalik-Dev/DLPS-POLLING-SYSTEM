#include <iostream>
#include <string>
#include <fstream>

using namespace std;

int stack[200], n=200, top=-1,loc;
string cand[]={ "Rana Marwat", "Shafqat Cheema", "Mr. Amjad" };

//-------VOTER's PART-------

void push(int val)
{
   if(top>=n-1)
   {
	   cout<<"     ******** STACK IS FULL!!! ******** "<<endl;
	   cout<<" ******* NO MORE ENTRIES POSSIBLE!!! ******* "<<endl;
   }
   else
   {
      top++;
      stack[top]=val;
   }
}

//------------ Displaying Voter's ---------

void peek()
{
   if(top>=0)
   {
	   cout<<" ALL VOTER'S ARE: "<<endl;
	   int min_index=0;
	   for(int i= 0; i< n-1; i++)
	   {
		   min_index = i;
		   for(int j= i+1; j< n; j++)
		   {
			   if(stack[j]< stack[min_index])  //ascending order sorting
			   {
				   int temp= stack[min_index];
				   stack[min_index]= stack[j];
				   stack[j]= temp;
			   }
		   }
	   }
	   int i;
	   for (i=0; i<n; i++)
	   {
		   cout<<" "<<stack[i]<<" "<<endl;
	   }
	   cout<< endl;
   }
   else
   {
	   cout<<"     ******** STACK IS EMPTY!!! ******** "<<endl;
   }
}

//-------CANDIDATE'S PART-------

void peek2()
{
	if(cand!=0)
	{
		cout<<" ALL CANDIDATE'S ARE: "<<endl;
		cout<<endl;
		for(int i=0; i<sizeof(cand)/sizeof(*cand); i++)
		{
			if(i==0)
			{
				cout<<" CANDIDATE NO: "<<i+1<<"   FROM PTI IS    "<<cand[i]<<endl;
			}
			else if(i==1)
			{
				cout<<" CANDIDATE NO: "<<i+1<<"   FROM PML-N IS   "<<cand[i]<<endl;
			}
			else
			{
				cout<<" CANDIDATE NO: "<<i+1<<"   FROM PPP IS    "<<cand[i]<<endl;
				cout<<endl;
			}
		}
   }
	else
	{
		cout<<"     ******** STACK IS EMPTY!!! ******** "<<endl;
	}
}

//-------PARTICIPANT'S PART-------
void peek3()
{
	cout<<endl;
	cout<<" TOATAL NO. OF VOTER'S IS: \t|\t TOTAL NO. OF CANDIDATE'S IS: "<<endl;
	cout<<" \t\t 200 \t\t|\t\t\t 3 "<<endl;
	cout<<endl;
}

//-------MAIN PART-------

int main()
{
	int i, j, ID;
	bool Id_exist=0;
	int ch=0, check1=0, val=0, check2=0, idn=0, val1=0, key=0, pass=0;
	int si = sizeof(stack)/sizeof(stack[0]);
	cout<<endl;

	do
	{
again1:
			cout<<"		 -----------~~~~~~---------- "<<endl;
			cout<<"		---------~ [ DLPS ] ~-------- "<<endl;
			cout<<"		 -----------~~~~~~---------- "<<endl;
			cout<<"		 --- PROVE YOUR IDENTITY!--- "<<endl;
			cout<<"		 PRESS 1 IF YOU ARE ADMIN "<<endl;
			cout<<"		 PRESS 2 IF YOU ARE A VOTER "<<endl;
			cout<<"		 PRESS 0 TO EXIT [ DLPS ] "<<endl;
			cout<<"		 -----------~~~~~----------- "<<endl;
			cin>>idn;
			
			//--------ADMIN'S PANEL--------

			if(idn==1)
			{
				do
				{
					rep1:
					cout<<" IF YOU ARE UNABLE TO ENTER CORRECT KEY\n PLEASE PRESS 0 TO EXIT "<<endl;
					cout<<" ENTER YOUR ADMIN KEY:\t ";cin>>key;
					if(key==55448910)
					{
						do
						{
							rep2:
							cout<<endl;
							cout<<"		      *----------~ [ DLPS ] ~----------*"<<endl;
							cout<<"		    *---------- WELCOME ADMIN! ----------* "<<endl;
							cout<<"		*---------- MUHAMMAD AAMIR SHABBIR ----------* "<<endl;
							cout<<"			  *----------~~~~~---------* "<<endl;
							cout<<"			PRESS 1 TO CHECK TOTAL NO. VOTER'S "<<endl;
							cout<<"			PRESS 2 TO CHECK TOTAL NO. CANDIDATE'S "<<endl;
							cout<<"			PRESS 3 TO CHECK TOTAL NO. PARTICIPANT'S "<<endl;
							cout<<"			PRESS 4 TO GO TO RESULTS PANEL "<<endl;
							cout<<"			PRESS 0 TO EXIT ADMIN PANEL "<<endl;
							cout<<"			  *----------~~~~~---------* "<<endl;
							cout<<" ";cin>>check1;
							if(check1==1)
							{
								cout<<endl;
								cout<<" DISPLAYING TOTAL NO. OF VOTER'S! "<<endl;
								peek();
								cout<<endl;
							}
							else if(check1==2)
							{
								cout<<endl;
								cout<<" DISPLAYING TOTAL NO. OF CANDIDATE'S! "<<endl;
								peek2();
								cout<<endl;
							}
							else if(check1==3)
							{
								cout<<endl;
								cout<<" DISPLAYING TOTAL NO. OF PARTICIPANT'S! "<<endl;
								peek3();
								cout<<endl;
							}
							else if(check1==4)
							{
								cout<<"		      *----------~ [ DLPS ] ~----------*"<<endl;
								cout<<"		       *---------- WELCOME! ----------* "<<endl;
								cout<<"	  *---------- TO DISTRICT LEVEL POLLING SYSTEM ----------* "<<endl;
								cout<<"		    *---------- RESULT'S PANEL ----------* "<<endl;
								cout<<"			  *----------~~~~~---------* "<<endl;
								fstream file;
								char res;
								cout<<"\n PRESS Y TO SEE RESULTS\n PRESS N TO IF YOU DON'T. ";
								cout<<" ";cin>>res;
								int pti,pmln,ppp;
								if(res=='y'|| res=='Y')
								{
									file.open("PTI.txt",ios::in);
									file>>pti;
									file.close();
									file.open("PMLN.txt",ios::in);
									file>>pmln;
									file.close();
									file.open("PPP.txt",ios::in);
									file>>ppp;
									file.close();
									cout<<"\n NUMBER OF VOTES CASTED TO EACH PARTY "<<endl<<endl;
									cout<<" PTI = "<<pti<<endl;
									cout<<" PMLN = "<<pmln<<endl;
									cout<<" PPP = "<<ppp<<endl;
								}
								else
								{
									cout<<" EXITING REUSLT'S PANEL "<<endl;
									cout<<endl;
								}
								cout<<endl;
							}
							else if(check1==0)
							{
								cout<<endl;
								cout<<" EXITING ADMIN PANEL! "<<endl;
								cout<<endl;
								break;
							}
							else
							{
								cout<<" INVALID ENTERY! TRY AGAIN! "<<endl;
								goto rep2;
							}
						}while(true);
					}
					else if(key==0)
					{
						cout<<" EXITING ADMIN PANEL LOGIN! "<<endl;
						break;
					}
					else
					{
						cout<<" INVALID ADMIN KEY! TRY AGAIN! "<<endl;
						goto rep1;
					}
				}while(true);
			}

			//--------VOTER'S PANEL--------

			else if(idn==2)
			{
				do
				{
					rep3:
					cout<<"\n IF YOU ARE UNABLE TO ENTER CORRECT PASS\n PLEASE PRESS 0 TO EXIT! "<<endl;
					cout<<" ENTER YOUR VOTER'S PASS: "<<endl;
					cout<<" ";cin>>pass;
					push(pass);

					if(pass>0 && pass<=200)
					{
						int countv=0;
						do
						{
							rep4:
							cout<<endl;
							cout<<"		    *----------~ [ DLPS ] ~----------*"<<endl;
							cout<<"		  *---------- WELCOME VOTER! ----------* "<<endl;
							cout<<"	*---------- TO DISTRICT LEVEL POLLING SYSTEM ----------* "<<endl;
							cout<<"			*----------~~~~~---------* "<<endl;
							cout<<"			PRESS 1 TO CAST YOUR VOTE! "<<endl;
							cout<<"			PRESS 0 TO EXIT VOTER'S PANEL "<<endl;
							cout<<"			*----------~~~~~---------* "<<endl;
							cout<<" ";cin>>check2;
							if(check2==1)
							{
								if(countv>0)
								{
									cout<<" YOU CAN VOTE ONLY ONCE! "<<endl;
									goto ter;
								}
								//--------- [ fstream part (file handling part) ] -----------
								//ID must be 4 digit number starting from 5555 ending at 5755
								fstream file;
								file.open("IDs.txt",ios::in);
								again:
								cout<<"\n ENTER YOUR ID : ";
								cin>>ID;
								int arr[200];
								for( i=0;i<200;i++)
								file>>arr[i];
								file.close();
								for( j=0;j<i;j++)
								{
									if(ID==arr[j])
									{
										arr[j]=0;
										Id_exist=1;
									}
								}
								file.open("IDs.txt",ios::out);
								for(i=0;i<200;i++)
								file<<arr[i]<<endl;
		
								if(Id_exist==0)
								{
									cout<<endl;
									cout<<" YOUR ID DIDN'T MATCH. TRY AGAIN "<<endl;
									cout<<endl;
									goto again;
								}
								file.close();
								int c=0,party;
								do
								{
									c++;
									cout<<"\n CHOOSE A PARTY TO CAST VOTE \n\n";
									peek2();
									cout<<" ";cin>>party;
								}while((party<1 || party>3));
								int count;
								if(party==1)
								{
									file.open("PTI.txt",ios::in);
									file>>count;
									count++;
									file.close();
									file.open("PTI.txt",ios::out);
									file<<count;
									file.close();
								}
								else if(party==2)
								{
									file.open("PMLN.txt",ios::in);
									file>>count;
									count++;
									file.close();
									file.open("PMLN.txt",ios::out);
									file<<count;
									file.close();
								}
								else if(party==3)
								{
									file.open("PPP.txt",ios::in);
									file>>count;
									count++;
									file.close();
									file.open("PPP.txt",ios::out);
									file<<count;
									file.close();
								}
								cout<<"\n YOUR VOTE HAS BEEN CASTED SUCCESFULLY :) "<<endl;
								char res;
								countv++;
								cout<<"\n PRESS Y TO SEE RESULTS\n PRESS N TO IF YOU DON'T. ";
								cout<<" ";cin>>res;
								int pti,pmln,ppp;
								if(res=='y'|| res=='Y')
								{
									file.open("PTI.txt",ios::in);
									file>>pti;
									file.close();
									file.open("PMLN.txt",ios::in);
									file>>pmln;
									file.close();
									file.open("PPP.txt",ios::in);
									file>>ppp;
									file.close();
									cout<<"\n NUMBER OF VOTES CASTED TO EACH PARTY "<<endl<<endl;
									cout<<" PTI = "<<pti<<endl;
									cout<<" PMLN = "<<pmln<<endl;
									cout<<" PPP = "<<ppp<<endl;
								}
								else
								{
									cout<<" THANK YOU FOR YOUR VOTE "<<endl;
									cout<<endl;
									goto rep4;
								}

								//--------------------
								cout<<endl;
							}
							else if(check2==0)
							{
								ter:
								cout<<endl;
								cout<<" EXITING VOTER'S PANEL!!! "<<endl;
								cout<<endl;
								break;
							}
							else
							{
								cout<<" INVALID ENTERY! TRY AGAIN! "<<endl;
								cout<<endl;
								goto rep4;
							}
						}while(true);
					}
					else if(pass==0)
					{
						cout<<endl;
						cout<<" EXITING VOTER'S LOGIN PANEL!!! "<<endl;
						cout<<endl;
						break;
					}
					else
					{
						cout<<" PASS DIDN'T MATCH! TRY AGAIN! "<<endl;
						goto rep3;
					}
				}while(true);
			}
			else if(idn==0)
			{
				cout<<endl;
				cout<<" EXITING [ DLPS ] LOGIN PANEL! "<<endl;
				cout<<endl;
				break;
			}
			else
			{
				cout<<" INVALID ENTERY! TRY AGAIN! "<<endl;
				goto again1;
			}
	}while(true);
	
	cout<<endl;
	cout<<" PROGRAM TERMINATED!!! "<<endl;
	cout<<endl;

	system("pause");
	return 0;
}