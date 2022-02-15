#include<iostream>
#include<string> //for 'string' declaration
#include<cstring> //for strlen() and string operations like C

using namespace std;

int main()
{
  int i, len;
  char a[20];
  string b;
  
  cout<<"String Operations:\n\n";
  cout<<"Enter a string: ";

  /*cin.get(a, 20); //operations on strings like we are using it in C
  len=strlen(a); //cin.get(name_of_string, max_size_of_string)
  cout<<a; //string output without for loop
  for(i=0; i<len; i++) //string output using for loop
  {
    cout<<a[i];
  }*/

  getline(cin, b); //string input using b as string object
  len = b.size(); //string's length calculation
  //cout<<b; //showing 'b' on console without for loop

  for(i=0; i<len; i++) //showing 'b' on console using for loop
  {
    cout<<b[i];
  }
}