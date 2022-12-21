#include<iostream>
using namespace std;
main()
{
    char str[10];
    int i,a;
    cout<<"enter string = ";
    cin>>str;
    for(i=0;str[i]!='\0';i++)
        {
            a=str[i]%10;
            if(str[i]=='A' || str[i]=='E' || str[i]=='I' || str[i]=='O' || str[i]=='U' || str[i]=='a' || str[i]=='e' || str[i]=='i' ||str[i]=='o' || str[i]=='u')
            {
                 str[i]=' ';
            }
        }
        cout<<"string = "<<str;
        return 0;
    }
