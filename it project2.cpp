#include<iostream>
#include<iomanip>
#include<fstream>
#include<ctype.h>
using namespace std;
class patient
{   int rno;
    int d;
    int m;
    int y;
    char name[40];
    int age;
    char gender;
    public: 
	
    void input ()
    {   cout<<endl;
        cout<<":-------------------------------:"<<endl;
        cout<<"enter registration number  ";
		cin>>rno;
		cout<<" enter today's date(dd/mm/yyyy)  ";
        cin>>d>>m>>y;
        cout<<"enter name of the patient  ";
        fflush(stdin);gets(name);
        cout<<"enter age of the patient  ";
        cin>>age;
        cout<<"enter gender of the patient(M/F)  ";
        cin>>gender;
        cout<<":------------------------------:"<<endl;
        cout<<endl;
    }
    void generate()
	{   
	    cout<<endl;
        cout<<setw(100)<<"------------------------------------------------------------------"<<endl;
        cout<<setw(100)<<"|               COMMUNITY HEALTH CENTER(CHC)                     |"<<endl;
        cout<<setw(100)<<"|                         OPD SLIP                               |"<<endl;
        cout<<setw(100)<<"|----------------------------------------------------------------|"<<endl;
        cout<<setw(100)<<"|                   Patient's Information                        |"<<endl;
        cout<<setw(100)<<"|----------------------------------------------------------------|"<<endl;
		cout<<setw(52)<< "| Registration no:"<<rno<<"        Date"<<d<<"/"<<m<<"/"<<y<<"    "<<endl;
		cout<<setw(100)<<"|                                                                |"<<endl;
        cout<<setw(41)<< "| Name:"<<name<<"         Age:"<<age<<"         Gender:"<<gender<<endl;
        cout<<setw(100)<<"|----------------------------------------------------------------|"<<endl;
        cout<<setw(100)<<"| Date       |        Symptoms and Prescription                  |"<<endl;
        cout<<setw(100)<<"|----------------------------------------------------------------|"<<endl;
        cout<<setw(100)<<"|            |                                                   |"<<endl;
        cout<<setw(100)<<"|            |                                                   |"<<endl;
        cout<<setw(100)<<"|            |                                                   |"<<endl;
        cout<<setw(100)<<"|            |                                                   |"<<endl;
        cout<<setw(100)<<"|            |                                                   |"<<endl;
        cout<<setw(100)<<"|            |                                                   |"<<endl;
        cout<<setw(100)<<"|            |                                                   |"<<endl;
        cout<<setw(100)<<"|            |                                                   |"<<endl;
        cout<<setw(100)<<"|            |                                                   |"<<endl;
        cout<<setw(100)<<"|            |                                                   |"<<endl;
        cout<<setw(100)<<"|            |                                                   |"<<endl;
        cout<<setw(100)<<"|            |                                                   |"<<endl;
        cout<<setw(100)<<"|            |                                                   |"<<endl;
        cout<<setw(100)<<"|            |                                                   |"<<endl;
        cout<<setw(100)<<"|            |                                                   |"<<endl;
        cout<<setw(100)<<"|            |                                                   |"<<endl;
        cout<<setw(100)<<"|            |                                                   |"<<endl;
        cout<<setw(100)<<"|            |                                                   |"<<endl;
        cout<<setw(100)<<"|            |                                                   |"<<endl;
        cout<<setw(100)<<"|            |                                                   |"<<endl;
        cout<<setw(100)<<"|            |                                                   |"<<endl;
        cout<<setw(100)<<"|            |                                                   |"<<endl;
        cout<<setw(100)<<"|            |                                                   |"<<endl;
        cout<<setw(100)<<"|----------------------------------------------------------------|"<<endl;
        cout<<setw(100)<<"|                                                                |"<<endl;
        cout<<setw(100)<<"|         NOTE:This slip can be used for 15 days                 |"<<endl;
        cout<<setw(100)<<"|                                                                |"<<endl;
        cout<<setw(100)<<"------------------------------------------------------------------"<<endl;
        cout<<endl;
    }
};
int main()
{
    char ch;
    ofstream fout;
    fout.open("PATIENT-RECORD.txt",ios::app);
    cout<<setw(100)<<":----------------------------------:"<<endl;
    cout<<setw(100)<<":           WELCOME                :"<<endl;
    cout<<setw(100)<<":             TO                   :"<<endl;
    cout<<setw(100)<<":   COMMUNITY HEALTH CENTER        :"<<endl;
    cout<<setw(100)<<":----------------------------------:"<<endl;
    patient p;
    for(int i=0;i<100;i++)
	{
	cout<<endl;	
	cout<<":-------------------------------------------:"<<endl;
    cout<<": Give the following details of the patient :"<<endl;
    cout<<":-------------------------------------------:"<<endl;
    cout<<endl;
        p.input();
        p.generate();
        fout.write((char*)&p,sizeof(p));
        fout<<endl;
        cout<<":------------------------------:"<<endl;
        cout<<": Do you want to continue(Y/N) :"<<endl;
        cout<<":------------------------------:      ";
        cin>>ch;
        if(ch=='N'||ch=='n')
		{   
		    cout<<endl;
		    cout<<":-------------------:"<<endl;
            cout<<": Registration Done :"<<endl;
            cout<<":-------------------:"<<endl;
			exit(1);
        }
        
    }
    fout.close();
    return 0;

}