#include<stdio.h>
#incude<Stdlib.h>
int i,j;
int main_exit;
int main()
{
Char pass[10],password[10]="my cap";
int i=0;
Printf("\n\n\t Enter the password to login");
Scanf("%s",pass);
If(pass[i]!=13 && pass[i]!=8)
{
Printf(" ");
Pass[i]=getch();
i++
}
While(pass[i]!=13);
Pass[10]="\0";
if (strcmp (pass,password)==0)
{
Printf("\n\n password match");
for(i=0;i<=6;i++)
{
for delay(1000);
Printf(" ");
}
System ("Cls");
menu();
}
else
{ 
Printf("\n\n wrong password");
Printf("Enter 1 to retry & 0to exit");
Scanf("%d,& main_exit");
if(main_exit==1)
{
System("cls");
main();
}
else if (main_exit=0)
{
System ("cls")
Close();
}
else
{
Printf("\n Invalid");
fordelay(1000);
System("Cls");
goto login_try;
}
}
return 0;
}
