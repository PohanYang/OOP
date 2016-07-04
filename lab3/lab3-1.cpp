#include <iostream>
using namespace std;
int stringCompare1(char a[],char b[]);
int stringCompare2(char *a,char *b);
int main()
{
    char string1[100], string2[100];
    cout << "Enter first string: ";
    cin >> string1;
    cout << "Enter second string: ";
    cin >> string2;
    cout << "The value returned from stringCompare1( \"";
    cout << string1
        << "\", \"" << string2 << "\" ) is "
        << stringCompare1(string1,string2)
        << "\nThe value returned from stringCompare2( \""
        << string1
        << "\", \"" << string2 << "\" ) is "
        << stringCompare2(string1,string2)
        << '\n';
    return 0;
}
int stringCompare1(char a[],char b[])
{
    int i=0,n=0,h;
    while(a[i]!='\0')
    {
        i++;
    }
    while(b[n]!='\0')
    {
        n++;
    }
    if(i==n)
    {

        for(i=0;i<=n;i++)
        {

            if(a[i]!=b[i])
            {
                return 1;
            }

        }
        return 0;
    }
    else
        return -1;
}
int stringCompare2(char *a,char *b)
{
    int i=0,n=0;
    while(*(a+i)!='\0')
    {
        i++;
    }
    while(*(b+n)!='\0')
    {
        n++;
    }
    if(i==n)
    {
        for(i=0;i<=n;i++)
        {
            if(*(a+i)!=*(b+i))
            {
                return 1;
            }
        }
        return 0;
    }
    else
        return -1;


}
