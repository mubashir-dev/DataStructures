#include"iostream"
#include"fstream"
#include"conio.h"
#include"string.h"
#include"iomanip"
using namespace std;
class file
{
	char Question_Statment[100];
	int Ques_no;
	char option1[20];
	char option2[20];
	char option3[20];
	char option4[20];
	static int counts;
	public:
	file()
	{
		strcpy(Question_Statment,"No Statement");
		strcpy(option1,"No Option");
		strcpy(option2,"No Option");
		strcpy(option3,"No Option");
		strcpy(option4,"No Option");
		Ques_no=0;
		counts=0;
	}
	void input();
	void Disp();
	void write_file();
	void read_File();
};
	void file::input()
	{
		cout<<"Enter The Question Statement:-"<<endl;
		cin.getline(Question_Statment,99);
		cin.ignore();
		cout<<"Enter The Option One  :";
		cin.getline(option1,19);
		cout<<"Enter The Option Two  :";
		cin.getline(option2,19);
//		cin.ignore();
		cout<<"Enter The Option Three :";
		cin.getline(option3,19);
		cout<<"Enter The Option Four  :";
		cin.getline(option4,19);
		counts++;
		//cin>>counts;

	}
	void file::Disp()
	{
		system("cls");
		cout<<"\t\t\tYOUR Question"<<endl;
		cout<<"\n\tQUESTION "<<counts<<":"<<Question_Statment<<endl;
		cout<<"\n\tA:-"<<option1<<endl;
		cout<<"\n\tB:-"<<option2<<endl;
		cout<<"\n\tC:-"<<option3<<endl;
		cout<<"\n\tD:-"<<option4<<endl;
		cout<<"\t\t\t\t\t\t\t\t  ------------"<<endl;
		cout<<"\t\t\t\t\t\t\t\t      NEXT    "<<endl;
		cout<<"\t\t\t\t\t\t\t\t  ------------"<<endl;	
	}
	void file::write_file()
	{
		fstream fout;
		int count=0;
		fout.open("Questions.txt",ios::app|ios::in);
		if(counts==0)
		{
			cout<<"Sorry Unable To Write To Files"<<endl;
		}
		else
		{
			fout.write((char*) this ,sizeof(*this));
			count++;
		}
			fout.close();
			if(count!=0)
			{
				system("cls");
				cout<<"Data Has been SuccessfullY Added To DataBase"<<endl;
				getch();
			}

	}
	void file::read_File()
	{
		fstream fout;
		fout.open("Questions.txt",ios::in);
		fout.seekp(0);
		while(!fout.eof())
		{
				system("cls");
				fout.read((char*) this,sizeof(*this));
				Disp();
				getch();
		}
		fout.close();
	}
int file::counts=0;
int main()
{
	file f;
//	f.input();
//	f.write_file();
//	f.Disp();
f.read_File();
	return 0;
}
