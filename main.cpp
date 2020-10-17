/**************************************/
/*Name: xxxxx xxxxxxx
/*Course: COSC 1302
/* LAB 1
/*************************************/
#include <iostream>
using namespace std;

/* Class definition
/*****************/
class Cd
{
	private:
		string Artist;
		string Title;
		int YearReleased;
		
	public:
		Cd();
		string getArtist();
		string getTitle();
		int getYearReleased();
		
		void setArtist(string Ar);
		void setTitle(string Tt);
		void setYearReleased(int Yr);
};

/*Prototypes*/
void displayTestCd();
void menuDisplay();
void mathBreak();
void evenOdd();
int isEven(int);
void primeNumber();
int isPrime(int);


/**************************************************/
/* Function: Main                                    
/* Inputs:   NIL                                        
/* Outputs:  NIL              
/* Purpose: This is a required main function     
/**************************************************/
int main()
{
	menuDisplay();
	return 0;
}

/**************************************************/
/* Function: menuDisplay                                      
/* Inputs:  NIL                                          
/* Outputs: NIL                
/* Purpose: This functions displays the first menu       
/**************************************************/
void menuDisplay()
{
	int x;
	
	cout << "Select an option\n";
	cout << "Press 1 for Display Test CD \n";
	cout << "Press 2 for Math Break\n";
	cout << "Press 3 to Quit\n ";
	cin >> x;
	
	if(x == 1)
		displayTestCd();
	if(x == 2)
		mathBreak();
	if(x == 3)
		exit;
	else
		menuDisplay();
	
}

Cd::Cd()
{
	Artist = " ";
	Title = " ";
	YearReleased = 0;
}
string Cd::getArtist()
{ return Artist; }
string Cd::getTitle()
{ return Title; }
int Cd::getYearReleased()
{ return YearReleased; }

void Cd::setArtist(string Ar)
{ Artist = Ar; }
void Cd::setTitle(string Tt)
{ Title = Tt; }
void Cd::setYearReleased(int Yr)
{ YearReleased = Yr; }

/**************************************************/
/* Function: displayTestCd                                    
/* Inputs:   NIL                                        
/* Outputs:  NIL              
/* Purpose:  Diplays Cd attributes   
/**************************************************/
void displayTestCd()
{
	Cd aCd;
	string artist, title;
	int yearReleased;
	
	cout << " \n Enter artist's name: ";
	cin >> artist ;
	aCd.setArtist(artist);
	
	cout << " Enter cd title: ";
	cin >> title;
	aCd.setTitle(title);
	
	cout << " Enter year cd was released: ";
	cin >> yearReleased;
	aCd.setYearReleased(yearReleased);
	
	cout << "\n Your CD: \n";
	cout << '\t' << "Artist:" << aCd.getArtist() << endl;
	cout << '\t' << "Title:" << aCd.getTitle() << endl;
	cout << '\t' << "Year_Released:" << aCd.getYearReleased() << endl << '\n';
	
}

/**************************************************/
/* Function: mathBreak                                      
/* Inputs:   NIL                                          
/* Outputs:  NIL                 
/* Purpose:  This function displays the mathbreak menu       
/**************************************************/
void mathBreak()
{
	int x; 
	
	cout << "\n Select an option: \n";
	cout << "Press 1 for Even or Odd game\n";
	cout << "Press 2 for Prime Number game\n";
	cout << "Press 3 to exit Math break\n";
	cin >> x;
	
	if (x == 1)
		evenOdd();
	if (x == 2)
		primeNumber();
	if (x == 3)
		menuDisplay();
	else
		mathBreak();	
	
	
}

/**************************************************/
/* Function: evenOdd                                  
/* Inputs:   NIL                                        
/* Outputs:  NIL            
/* Purpose:  This function checks for negative integers 
/*           and also lauches the isEven fuction
/**************************************************/
void evenOdd()
{
	int x, even;
	
	cout << "Enter an interger, 0 or larger. Press Zero to exit: ";
	cin >> x;
	
	if(x > 0)
		even = isEven(x);
		{ 
			if (even == 1 )
				cout << x << " is even\n";
	    	else
				cout << x << " is odd\n";
		}

	if(x == 0)
		mathBreak();
	else
		evenOdd();
}

/**************************************************/
/* Function: isEven                                     
/* Inputs:   num;                                       
/* Outputs:  even;                   
/* Purpose:  This function checks for even numbers
/*           and returns the value to evenOdd fuction    
/**************************************************/
int isEven(int num)
{
	int result, even;
	result = num % 2;
	if (result == 0)
		even = 1;
	else
		even = 0;
		
	return even;
}

/**************************************************/
/* Function: primeNumber                                     
/* Inputs:   NIL                                         
/* Outputs:  NIL                    
/* Purpose: This function checks for negative integers 
/*          and also lauches the isPrime fuction       
/**************************************************/
void primeNumber()
{
	int x,isAprime;
	
	cout << "Enter an interger, 0 or larger. Press Zero to exit: ";
	cin >> x;
	
	if(x > 0)
		isAprime = isPrime(x);
		{
				if (isAprime == 1)
				cout << x << " is prime\n";
	    		else
				cout << x << " is not prime\n";
		}
	if(x == 0)
		mathBreak();
	else
		primeNumber();
}

/**************************************************/
/* Function: isPrime                                    
/* Inputs:   num;                                      
/* Outputs:  isAprime;                   
/* Purpose:  This function checks for prime numbers 
/*            and returns the value to primeNumber fuction      
/**************************************************/
int isPrime(int num) 
{ 
	int isAprime, result, prime=0;
	result = num;
	
	if (result <= 1) 
        return false;
        
	for (int i =1; i <= result; i++)
	{
		if (result % i != 0)prime++;
	}
  
	if (prime>= (result-2))isAprime = true;
	else isAprime = false;
    return isAprime; 
} 
  
