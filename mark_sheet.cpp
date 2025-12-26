	#include<iostream>//header file
	#include<string>
	using namespace std;
	int main()//main function
	{
		int oops=80, dsa=78, os=76,cn=90, al=89,se=90,t_marks=100, rollno;
		int Total_marks=600;
     string name,dep,grade, position;
		 
		cout<<"Enter your Name:";
		getline(cin,name);//get fullname
		cout<<"Enter your Deparment:";
		getline(cin,dep);//get deparment name
		cout<<"Enter your RollNO:";
		cin>>rollno;//get rollno
		if(rollno!=123)//condtion if my input is equl to my rollno then run code else not show
		{
			cout<<"Wrong Enter RollNO,try again:";
		}
		else
		{
		
		int marks=oops+dsa+os+cn+al+se;
	   float percentage= (float)marks/600*100;
		if(percentage>=90 && percentage<=100 )
		{
			grade="A+";
			position="class topper";
		}
		else if(percentage>=80 && percentage<=89){
		grade="A";
		position="1st division";
		}
		else if(percentage>=70 && percentage<=79)
		{
			grade="B";
			position="2nd division";
		}
		else if(percentage>=60 && percentage<=69)
		{
			grade="C";
			position="pass";
		}
		
		else if(percentage>=50 && percentage<=59)
		{
			grade="D";
			position="pass";
		}
		else if(percentage>=40 && percentage<=49)
		{
			grade="E";
			position="pass";	
		}
		else{
			grade="F";
				position="fail";
		}	
		cout<<"	======>Student Marksheet:<========"<<endl;
		cout<<"	NAME:"<<name<<endl;
		cout<<"	RollNO:"<<rollno<<endl;
		cout<<"	Deparment:"<<dep<<endl;
	   cout<<"	Subjects:"<<"\tobt.Marks"<<"\tTotal-Marks:"<<endl;
	   cout<<"	---------"<<"\t---------"<<"\t------------"<<endl;
		cout<<"	OOPS:"<<"\t "<<"\t"<<oops<<"\t"<<"\t"<<t_marks<<endl;
		cout<<"	DSA:"<<"\t "<<"\t"<<dsa<<"\t"<<"\t"<<t_marks<<endl;
		cout<<"	SE:"<<"\t "<<"\t"<<se<<"\t"<<"\t"<<t_marks<<endl;
		cout<<"	Al:"<<"\t "<<"\t"<<al<<"\t"<<"\t"<<t_marks<<endl;
		cout<<"	OS:"<<"\t "<<"\t"<<os<<"\t"<<"\t"<<t_marks<<endl;
		cout<<"	CN:"<<"\t "<<"\t"<<cn<<"\t"<<"\t"<<t_marks<<endl;
		cout<<"	---------------------------------"<<endl;
		cout<<"	Total_marks:"<<"\t"<<Total_marks<<endl;
		cout<<"	Obt_marks:"<<"\t"<<marks<<endl;
		cout<<"	Grade:"<<"\t"<<grade<<endl;
		cout<<"	percentage:"<<"\t"<<percentage<<"%"<<endl;
		cout<<"	Position:"<<"\t"<<position<<endl;
		cout<<"	=======<>===<>=====<>==========="<<endl;
   }
       
		return 0;
	}
