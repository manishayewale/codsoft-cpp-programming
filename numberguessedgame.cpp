#include<iostream>
#include<cstdlib>
using namespace std;
int main()
{
	string name;
	char input;
	int inputuser;
	int score;
	cout<<"Enter your Name          :";
	getline(cin,name);
	cout<<endl;
	do
	{
		srand(0);
		int variable= rand()%10  +1   ;
		cout<<"Enter any number in between range 1 to 10            :";
		cin>>inputuser;
		cout<<endl;
		if(inputuser==variable)
		{
			cout <<" Congratulation.......... !\n                        You guessed the correct number "<<endl;
			score++;
		}
		else
		{
			cout<<"   Sorry..... ,\n                                     You guessed wrong number Try again  "<<endl;
		}
		cout <<"\n Would you like to try again y/n                    :";
		cin>>input;
		cout<<endl;
		cout<<"**************************************************************************************"<<endl<<endl;
		
		
	} 
	while(input!='n');
	
	cout<<"Your score is.............:"<<score<<endl<<endl;
	
	cout<<"\n................................Game Exit..............................."<<endl;
}
	
