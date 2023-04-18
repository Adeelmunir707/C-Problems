//  Positive or negative

#include<iostream> 
using namespace std;
int num;
 int main(){
 	
 	cout<<"\t\t  ************************************"<<endl;
        	cout<<"\t\t*                                      *"<<endl;
        	cout<<"\t\t*     * WELCOME TO SOLUTION WORLD *    *"<<endl;
        	cout<<"\t\t*--------------------------------------*"<<endl;
        	cout<<"\t\t*                                      *"<<endl;
         	cout<<"\t\t*        * MADE BY Adeel Munir *       *"<<endl;
        	cout<<"\t\t*                                      *"<<endl;
        	cout<<"\t\t  ************************************\n"<<endl;
            cout<<"                **********  Number Problems  **********"<<endl;
            cout<<"                            _______________               "<<endl;
            cout<<"-----------------------------------------------------------------------------"<<endl;
     cout<<"\n"<<endl;
 	cout<<"Enter number for Positive,Negative test :";
 	 cin>>num;
 	 
 	 if (num>0)
 	 cout<<"Number is positive"<<endl;
 	 else if(num<0)
 	 cout<<"Number is Negative"<<endl;
 	 else
 	 cout<<"Number is neither positive nor negative"<<endl;
 	 cout<<"\n================================================"<<endl;
 	 
 	 //Absolute of Number
 	 
 	cout<<"\nEnter number for absolute :";
 	 cin>>num;
 	 if(num>0)
 	 cout<<"Absolute is :"<<num;
 	 else
 	 cout<<"Absolute is :"<<-(num);
 	 
 	 cout<<"\n========================================================\n";
 	 
 	 //  Evem and odd number
 	 
 	 cout<<"Enter number for even and odd test :"<<endl;
 	 cin>>num;
 	 if(num%2==0)
 	 cout<<"Number is Even"<<endl;
 	 else
 	 cout<<"Number is odd"<<endl;
 	 
 	 cout<<"\n========================================================\n";
 	 
 	 //Swap Numbers
 	 int x,y,temp;
 	 cout<<"Enter value for x: ";
 	 cin>>x;
 	 cout<<"Enter the value for Y: ";
 	 cin>>y;
 	 cout<<"\nBefore Swapping :"<<endl;
 	 cout<<"x = "<<x<<endl;
 	 cout<<"y = "<<y;
 	 
 	      temp=y;
 	      y=x;
 	      x=temp;
 	 cout<<"\n\nAfter Swapping :"<<endl;
 	 cout<<"x = "<<x<<endl;
 	 cout<<"y = "<<y;
 	 cout<<"\n========================================================\n";
 	 
 	 //Sum of Natural Numbers
 	
    int n, sum = 0;
    cout << "Enter a positive integer For its previous number sum : ";
    cin >> n;
      for (int i = 1; i <= n; ++i) {
        sum += i;
    }
    cout << "\tSum = " << sum;
     cout<<"\n========================================================\n";
 	 
 	 //  FActors of Number
 	 int num;
 	 cout<<"Enter Number for fators Determination : ";
 	 cin>>num;
 	 
 	 cout<<"Factors are : ";
 	 for(int i=1;i<=num;i++){
 	 	if(num%i==0)
 	 	cout<<i<<",";
	  }
	  cout<<"\n========================================================\n";
	  
	  //  Reversing a number
	  
	  int number;
	  cout<<"Enter Number For reverse order : ";
	  cin>>number;
	  cout<<"\n";
	  
	  for(int i=number;i>=0;i--)
	  cout<<i<<",";
	  cout<<"\n========================================================\n";
	  
	  //  Palindrome number test ,palindrome is a number that is same of its reverse
	  
	  int num_check;
	  int rev=0, rem, tem;
    cout<<"Enter the Number for Palindrome test: ";
    cin>>num_check;
    tem = num_check;
    while(tem!=0)
    {
        rem = tem%10;
        rev = (rev*10)+rem;
        tem = tem/10;
    }
    if(rev==num_check)
        cout<<"\nIt is a Palindrome Number";
    else
        cout<<"\nIt is not a Palindrome Number";
    cout<<endl;
     cout<<"\n========================================================\n";
	  
	  //Area and Parameter of Square and rectangle
	  int length,width,domain;
	  cout<<"Enter lenth:";
	  cin>>length;
	  cout<<"Enter width:";
	  cin>>width;
	  
	  int areaSquare=length*length;                      //Square have same sides length
	  int perameterSquare=2*length*length;
	  int areaRectangle=length*width;
	  int parameterRectangle=2*length*width;
	cout<<"Now Enter Your domain :"<<endl;
	cout<<"1 For Square"<<endl;
	cout<<"2 for Rectangle"<<endl;
	cin>>domain;
	
	if(domain==1)
	{
		cout<<"Area of Square is: "<<areaSquare<<endl;
		cout<<"Parameter of Square is: "<< perameterSquare<<endl;
	}
	else if(domain==2){
		cout<<"Area of rectanle is: "<<areaRectangle<<endl;
		cout<<"Paramweter of ractangle:"<< parameterRectangle<<endl;
	}
	else
	cout<<"\tSorry! Your Domain does not Exist";
	  cout<<"\n========================================================\n";
	  
	  
	//  For Armstrong number
	
	 int test, guess, remainder, sum_num = 0;
    cout << "Enter number to be checked for Armstrong NO. : ";
    cin >> test;
    temp = test;
    while (guess != 0)
    {
        rem = guess % 10;
        sum_num = sum_num + remainder * remainder * remainder;
        guess = guess/ 10;
    }
    if (sum_num ==test)
        cout << "\n" << test << " is an Armstrong number.";
    else
        cout << "\n" << test << " is not an Armstrong number.";
         cout<<"\n========================================================\n";
         
         // For Fibbonacci number 
         
            int terms, t1 = 0, t2 = 1, nextTerm = 0;

    cout << "Enter the number of Fibbonacci terms: ";
    cin >> terms;

    cout << "Fibonacci Series: ";

    for (int i = 1; i <= terms; ++i) {
        // Prints the first two terms.
        if(i == 1) {
            cout << t1 << ", ";
            continue;
        }
        if(i == 2) {
            cout << t2 << ", ";
            continue;
        }
        nextTerm = t1 + t2;
        t1 = t2;
        t2 = nextTerm;
        
        cout << nextTerm << ", ";
    }
      cout<<"\n========================================================\n";
      
      // For Prime number 
       int num_x,j=0;
       cout<<"enter Number to Check Whether it is prime or Not: ";
       cin>>num_x;
    for(int i=1;i<=num_x;i++)
	   {
       	if(num_x%i==0)
		   {
		   	j++;
		   } 
       }
       if(j==2)
       cout<<"\n"<<num_x<<" Is Prime Number."<<endl;
       else
       cout<<"\n"<<num_x<<" Is not Prime Number.";
       
      cout<<"\n========================================================\n";
      
      cout<<"\n\n              ***********  END  ***********";
 	 return 0;
 }
