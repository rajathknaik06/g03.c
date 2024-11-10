/*You are developing a simple digital tool that allows users to create personalized digital greeting cards. The tool will enable users to input their names and generate a friendly greeting message customized with their names. 



Your task is to design a program that collects user input, generates the greeting, and displays it on the screen.

Input format :
The input consists of the string (a string without spaces).

Output format :
The output displays the greeting message in the format "Hello, [name]!", where [name] is the name entered by the user.*/





#include<stdio.h>
int main()
{
    char name[100];
    
    scanf("%s",name);
    
    printf("Hello,%s!\n",name);    //rackel
    
    return 0;
    
}
