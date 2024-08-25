/*
functions:
 create an account
 create an credit amount
 create an debit amount
 change passoword
 create an deposit amount
 


*/




#include<iostream>
#include<istream>
#include<fstream>
#include<stdlib.h>
#include<string>
#include<typeinfo>
#include<vector>
#include<iomanip>
using namespace std;

void other_details(long long int acc_no){
ofstream oFile;
ifstream iFile;
iFile.open("other_details.txt");
oFile.open("other_details.txt",ios::in|ios::app);
int age;
string  pan_no;
long long int month_income;
string edu_qualification;
string address;
cout<<"enter other details  \n";
cout<<"age   : ";
cin>>age;
cout<<"\npan_no  :";
cin>>pan_no;
cout<<"\n monthly income  : ";
cin>>month_income;
cout<<"\n educational qualification  :";
cin.ignore();
getline(cin,edu_qualification);
cout<<"\n address  :";
getline(cin,address);
string item;
long long int acc_line_val=0;
while(getline(iFile,item)){
	iFile>>item;
	acc_line_val++;
}
if(acc_line_val==0){
		
	oFile<<"--------------------";
	oFile<<"------";
	oFile<<"----------------";
	oFile<<"--------------------";
	oFile<<"------------------------------";
	oFile<<"------------------------------------------------\n";
	oFile<<"|    "<<  "acc_no"<<setfill(' ')<<setw(8)<<'|';

oFile<<" age"<<setfill(' ')<<setw(1)<<'|';
oFile<<"     pan_no"<<setfill(' ')<<setw(6)<<'|';
oFile<<"     month_income"<<setfill(' ')<<setw(3)<<'|';
oFile<<"     edu_qualification"<<setfill(' ')<<setw(8)<<'|';
oFile<<"      address"<<setfill(' ')<<setw(36)<<'|'<<endl;
oFile<<"--------------------";
	oFile<<"------";
	oFile<<"----------------";
	oFile<<"--------------------";
	oFile<<"------------------------------";
oFile<<"------------------------------------------------\n";
	
}
oFile<<'|'<<setfill('0')<<setw(10)<<acc_no<<setfill(' ')<<setw(8)<<'|';
oFile<<setfill(' ')<<setw(4)<<age<<'|';
oFile<<setfill(' ')<<setw(16)<<pan_no<<'|';
oFile<<setfill(' ')<<setw(19)<<month_income<<'|';
oFile<<setfill(' ')<<setw(29)<<edu_qualification<<'|';
oFile<<setfill(' ')<<setw(48)<<address<<'|'<<endl;

oFile<<"--------------------";
	oFile<<"------";
	oFile<<"----------------";
	oFile<<"--------------------";
	oFile<<"------------------------------";
	oFile<<"------------------------------------------------\n";
	oFile.close();
	
	cout<<"details added into the file successfully"<<endl;
}


void single_createAccount(){
string  name;
long long int Account_no;
string  phone_no;
string date_of_birth;
string adhaar;
double amount=0;
   ofstream outFile;
	ifstream inFile; 
	string item;
	int acc_count=0;
	inFile.open("account_details.txt");
	outFile.open("account_details.txt",ios::app);
	     
	 while(getline(inFile,item)){
			
			inFile >> item;
		    acc_count++;
		
	}
	
	     
if(acc_count==0){
		
		      //outFile<<"-----------------";
		     // outFile<<"-----------------";
		       outFile<<"---------------------------------------------------------------------------------------------------------------------";
  
		        outFile<<'\n';
			
	        outFile<<"| ACC.NO        "<<"|";
	      
	        outFile<<"  amount        "<<"|";
	        outFile<<'\n';
 outFile<<"---------------------------------------------------------------------------------------------------------------------";

		        // outFile<<"-----------------";
		      //outFile<<"-----------------";
		        outFile<<'\n';

		}
		

cout<<"enter the name:\t";
getline(cin,name);
outFile<<"|"<<setfill(' ')<<setw(31)<<name<< "|";

cout<<"\n enter the Adhaar_no:\t";
getline(cin,adhaar);
outFile<<setfill(' ')<<setw(19)<<adhaar<<"|";
cout<<"\n enter the phone_no:\t";
cin>> phone_no;
outFile<<setfill(' ')<<setw(14)<<phone_no<<"|";

cout<<"\n enter the Date of Birth:\t";
cin>>date_of_birth;
outFile<<setfill(' ')<<setw(10)<<date_of_birth<<"    |    ";
if(acc_count==0)
	Account_no=1;
else
 Account_no=((acc_count-3)/2)+1;
 
outFile<<"| "<<setfill('0')<<setw(12)<<Account_no<<" | ";

outFile<<setfill(' ')<<setw(17)<<" |"<<endl;

 outFile<<"---------------------------------------------------------------------------------------------------------------------";

            // outFile<<"-----------------";
		    //  outFile<<"-----------------"; 
		    outFile<<'\n';
   
   outFile.close();
   
	      inFile.close();
   
  // other_details(Account_no);
   cout<<"your account created successfully  and your acc number is"<<setfill('0')<<setw(10)<<Account_no<<endl;
   
   
}
void withdrawal(){
	 ifstream inFile;
	  ofstream outFile;
	 string item;
	 inFile.open("account_details.txt");
	 outFile.open("account_details.txt",ios::in|ios::ate);
       long long  account_no;
	long long int amount;
	cout<<"Enter account_number" <<'\t';
	cin>>account_no;
	cout<<"Enter amount:";
cin>>amount;
	int count_val=0;
		while(!inFile.eof()){
			inFile>>item;
			
		long long val=atoll(item.c_str());
		if(val ==account_no){
	       inFile>> item;
	     inFile>>item;
	  int val;
	
	  val=inFile.tellg();
	  cout<<val<<" ";
	
	  	//	val=inFile.tellg()-count_val-1;
	         long long val1=atoll(item.c_str());
	         int digit=0;
	         int sub_val=val1;
	         while(sub_val){
	sub_val/=10;
	digit++;	         
	         }
	         if(val1==0){
	digit=1;	         
	         }
	         val=val-digit+1;
      outFile.seekp( val,ios_base::beg);
    
	      outFile<<val1+amount;
	       	 outFile.close();
       
		cout<<"<-----------------deposit is done successfully------------->\n";
		cout<<"continue or quit\n";
		break;
		
		}
	}
	inFile.close();
	
	
}

void withdrawal(){
	 ifstream inFile;
	  ofstream outFile;
	 string item;
	 inFile.open("account_details.txt");
	 outFile.open("account_details.txt",ios::in|ios::ate);
       long long  account_no;
	long long int amount;
	cout<<"Enter account_number" <<'\t';
	cin>>account_no;
	cout<<"Enter amount:";
cin>>amount;
	int count_val=0;
		while(!inFile.eof()){
			inFile>>item;
			
		long long val=atoll(item.c_str());
		if(val ==account_no){
	       inFile>> item;
	     inFile>>item;
	  int val;
	
	  val=inFile.tellg();
	  cout<<val<<" ";
	
	  	//	val=inFile.tellg()-count_val-1;
	         long long val1=atoll(item.c_str());
	         int digit=0;
	         int sub_val=val1;
	         while(sub_val){
	sub_val/=10;
	digit++;	         
	         }
	         if(val1==0){
	digit=1;	         
	         }
	         val=val-digit+1;
      outFile.seekp( val-3-(2*account_no),ios_base::beg);
    
	      outFile<<val1-amount;
	       	 outFile.close();
       
		cout<<"<-----------------withdrawal is done successfully------------->\n";
		cout<<"continue or quit\n";
		break;
		
		}
	}


	inFile.close();
	
	
}




void single_Account(){
	printf("<------------------------------------------------------------>\n");
	printf("| 1 . create account                                         |\n| 2. Deposit amount                                          |\n| 3. withdrawal                                              |\n");
	printf("| 1 . create account                                         |\n| 2. Deposit amount                                          |\n| 3. withdrawal                                              |\n");
    printf("<------------------------------------------------------------>\n");
	int activity=0;
	
	cin>>activity;
	
	while(activity){
	
	cin.ignore();                                //error without this because cin after getline will use the \n character and move to the nextline directly so use cin.ignore()A common problem while using getline with\
	                                                       cin is getline does not ignore leading whitespace characters.If getline is used after cin >>, the getline() sees this newline character as leading \
	                                                        whitespace, and it just stops reading any further.
	
	switch(activity){
	case 1:	
		
		single_createAccount();          //jump to case label in switch    Declaration of new variables in case statements is what causing problems. \
		                                         Enclosing all case statements in {} will limit the scope of newly declared variables to the currently executing case which solves the problem.
		break;
	case 2:

	   depositAmount();	
	     break;
	case 3:
       	withdrawal();	
	break;
	
	default:
	    exit(0);	
	
	}
	cin>>activity;
	
	}

}

void bank_process(){
	
	cout<<"WELCOME TO ************ BANK\n";
	cout<<"creating or processing for joint account yes(y) or no(n)\n";
	char ch;
	cin>>ch;
	if(ch=='n'||ch=='N'){
		single_Account();	
	}else{
	exit(0);
	}
	
}


int main(){
	int work_on;
	cout<<"Enter 1.Bank 2.ATM\n";
	
        	bank_process();
     return EXIT_SUCCESS;
}





/*
#include<fstream>
#include<string>
#include<iostream>
using namespace std;
int main(){
ifstream inFile;
inFile.open("tt.txt");
string item;
int count=0;

while(getline(inFile,item)){
		inFile>>item;
	count++;
}
cout<<count;
inFile.close();

}
*/