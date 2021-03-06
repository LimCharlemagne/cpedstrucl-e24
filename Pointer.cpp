#include<iostream>
#include<cstring>
#include<conio.h>
#include<string.h>
#include<stdio.h>
using namespace std;

void strCat(char *st1, char *st2);
void strCpy(char *st1, char *st2);
int strCmp(char *st1, char *st2);
void strRev(char *st1, char *st2);
void menu()
{
	cout << "    MAIN MENU    " << endl;
	cout << "*****************" << endl;
	cout << "   [1] strcat    " << endl;
	cout << "   [2] strcpy    " << endl;
	cout << "   [3] strrev    " << endl;
	cout << "   [4] strcmp    " << endl;
	cout << "   [5] exit      " << endl;
	cout << "*****************" << endl;
}
int main()
{
	char str1[20];
	char str2[20];
	char str3[20];
	int choice, res;
	
	cout << "Enter 1st message: ";
	gets(str1);
	cout << "Enter 2nd message: ";
	gets(str2);
	
	menu();
	cout << "Choice: ";
	cin >> choice;
	
	switch(choice)
	{
		case 1:
			system("cls");
			strCat(str1, str2);
			cout << "strcat: " << str1;
			break;
		case 2:
			system("cls");
			strCpy(str1, str2);
			cout << "strcpy: " << str3;
			break;
		case 3:
			system("cls");
			strRev(str1, str2);
			cout << "strRev: " << str1;
			break;	
		case 4:
			system("cls");
			res = strCmp(str1,str2);
			if (res==0)
			{
				cout << "strcmp: Equal";
			}
			else
			{
				cout << "strcmp: Not Equal";
			}
			break;
		case 5:
			exit(1);
			break;
	}
	
	system("pause>0");
}
void strCat(char *st1, char *st2)
{
	while(*st1)
		*st1++;
	while(*st1++ = *st2++);
}
void strCpy(char *st1, char *st2)
{
	while(*st1++ = *st2++);
}
int strCmp(char *st1, char *st2)
{
	while (*st1 == *st2)
 {
	if(*st1 == '\0' || *st2 == '\0')
	break;
	st1++;
	st2++;
 }
	if(*st1 == '\0' && *st2 == '\0')
	return 0;
	else 
	return -1;
}
void strRev(char *st1, char *st2)
{
	char *sMess, *eMess;
	int temp(0);
	sMess = st1;
	eMess  = st1;
	int length, i;
	length = strlen(st1);
	for (i = 0; i < (length)- 1; i++)
	eMess++;
	for (i = 0; i < length/2; i++)
	{
		temp = *eMess;
		*eMess = *sMess;
		*sMess = temp;
		sMess++;
		eMess--;
    }
}
