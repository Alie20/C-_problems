#include <stdio.h>
#include <iostream>
#include <cstring>

using namespace std;

int main ()
{
    /*String length */
    char s1 [] = "Hello";
    cout<<strlen(s1)<<endl;

    /*String concatenate*/

    char s2 [] = "Good";
    char s3 [] = " Morning";
    strcat(s2,s3);
    cout<<s2<<endl;

    /*String concatenate length*/
    char s4 [20] = "Good";
    char s5 [20] = " Morning";
    strncat(s4,s5,3);
    cout<<s4<<endl;

    /*String copy*/
    char s6 [20] ="";
    char s7 [20] ="Programming";
    strcpy(s6,s7);
    cout<<s6<<endl;

    /*String copy length*/
    char s8 [20] ="";
    char s9 [20] ="Programming";
    strncpy(s8,s9,5);
    cout<<s8<<endl;

    /*Find string in string strstr*/
    char s10 [20] ="Programming";
    char s11 [21] ="gram";
    cout<<strstr(s10,s11)<<endl;

    /*Find char in string strchr*/
    char s12 [20] ="Hello";
    char s13 ='l';
    cout<<strchr(s12,s13)<<endl;
    cout<<strrchr(s12,s13)<<endl;

    /*String comapre if equal =0 else +ve / -ve*/
    char s14 [20] ="Hello";
    char s15 [20] ="Hello";
    char s16 [20] ="Apple";
    char s17 [20] ="Zoo";
    cout<<strcmp(s14,s15)<<endl;
    cout<<strcmp(s15,s16)<<endl;
    cout<<strcmp(s15,s17);

    /*string to long integer or float*/
    char s18 [20] = "25";
    char s19 [21] = "12.25";
    long int y = strtol(s18,NULL,10);
    float x =strtof(s19,NULL);
    cout<<x<<endl;
    cout<<y<<endl;

    /*String token seperate from the string*/
    char s20 [20]= "x=20;y=19;z=18";
    char *token = strtok(s20,"=;");
    while (token != NULL)
    {
        cout<<token<<endl;
        token = strtok(NULL,"=;");
    }
    
}