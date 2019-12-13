
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
	char correct_ans[20];
	int score;
	int counter;
	int false_ones;
	public:
	file()
	{
		strcpy(Question_Statment,"No Statement");
		strcpy(option1,"No Option");
		strcpy(option2,"No Option");
		strcpy(option3,"No Option");
		strcpy(option4,"No Option");
		strcpy(correct_ans,"No Answer");
		Ques_no=1;
		score=0;
		counter=1;
		false_ones=0;
	}
	void input();
	void Disp();
	void write_file();
	void read_File();
	int Question_ans();
	void Score_Card();
	char *ans_ret()
	{
		return correct_ans;
	}
};

	file f;
//Globla Object//
void file::Score_Card()
{
	int Q=Question_ans();
	if(Q==0)
	{
		score=score+4;
		counter++;
		cout<<"Correct Answer"<<endl;
		getch();
	}
	if(Q!=0)
	{
		false_ones++;
			cout<<"Wrong Answer"<<endl;
			getch();
	}
	system("cls");
	system("color 2");
	cout<<"\n\n\t\t\tYour Score is :              "<<score<<endl;
	cout<<"\n\t\t\tYour Correct Answers Are :   "<<counter<<endl;
	cout<<"\n\t\t\tYour Wrong Answers Are:      "<<false_ones<<endl;
	
	
}
	int file::Question_ans()
	{
	Ques_no++;
	int count=0;
	char ans[5];
	ifstream fin;
	fin.open("Questions.DAT",ios::in);
	if(!fin)
		cout<<"\t\t\tDataBase Error"<<endl;
	else
	{
		fin.seekg(0,ios::beg);
	//	;
		cout<<"\nType Your Answer (A,B,C,D) : ";
	cin.getline(ans,4);
		while(fin)
		{
		

		fin.read((char*) &f,sizeof(file));
		if(!fin.eof())
		{
		
		if(strcmp(ans,correct_ans)==0)
		return 0;	
		}
		}
		return 1;
	fin.close();
}

}
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
		cout<<"Enter The Correct Option:";
		cin.getline(correct_ans,19);
	//	counts++;
		//cin>>counts;

	}
	void file::Disp()
	{
		system("cls");
		cout<<"\n\t\t\t\tYour Question"<<endl;
		cout<<"\n\n\tQUESTION "<<Ques_no<<":"<<Question_Statment<<endl;
		cout<<"\n\tA : "<<option1<<endl;
		cout<<"\n\tB : "<<option2<<endl;
		cout<<"\n\tC : "<<option3<<endl;
		cout<<"\n\tD : "<<option4<<endl;
		//cout<<"\n\tCorrect One: "<<correct_ans<<endl;
		cout<<"\t\t\t\t\t\t\t\t  ------------"<<endl;
		cout<<"\t\t\t\t\t\t\t\t      NEXT    "<<endl;
		cout<<"\t\t\t\t\t\t\t\t  ------------"<<endl;
			Ques_no++;
	}
	void file::write_file()
	{
		fstream fout;
		int count=0;
		fout.open("Questions.DAT",ios::app|ios::in|ios::binary);
		if(Ques_no==0)
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
fout.close();
	}
	void file::read_File()
	{

		fstream fout;
		fout.open("Questions.DAT",ios::in|ios::binary);
		fout.seekp(0);
		while(fout.read((char*) this,sizeof(*this)))
		{
				system("cls");
				Disp();
				Question_ans();
					getch();

		}
		fout.close();
	}
int main()
{
//	f.input();
//f.write_file();
//	f.Disp();
//	getch();
//	f.Disp();
//	getch();
//	f.Disp();
//getch();
//	f.Disp();
f.read_File();
f.Score_Card();
//f.Question_ans();
	return 0;
}
