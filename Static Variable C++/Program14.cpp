#include<iostream>
using namespace std;

class StringUtility
{
    public:
	static int countVowels(string s)
	{
		int count=0;
			
		
		
		for(int i=0;i<8;i++)
		{
			if(s[i]=='a' ||s[i]=='e'||s[i]=='i' ||s[i]=='o'||s[i]=='u' ||s[i]=='A' || s[i]=='E' ||s[i]=='I'||s[i]=='O' ||s[i]=='U')
			{
				count++;
			}
		}
		
		return count;
	}
	
	static void reverseString(string s)
	{
		
		char reverseStr[8];
		
		int counter=0;
		for(int i=7;i>=0;i--)
		{
			reverseStr[counter]=s[i];
			counter++;
		}
		
		//String reverseString=reverseStr.toString();
		cout<<reverseStr;
		
	}
};
int main() {
		// TODO Auto-generated method stub
		cout<<StringUtility::countVowels("Ashutosh")<<endl;
		StringUtility::reverseString("Ashutosh");

	}


