#include <iostream>
using namespace std;

int main()
{
    string tekst_html;
    while(getline(cin,tekst_html))
    {
        int bufor=0;
        for(int i=0; i<tekst_html.length(); i++)
        {
            if(tekst_html[i]=='<')
            {
                cout<<char(tekst_html[i]);
                bufor=1;
            }
            else if(tekst_html[i]>=97&&bufor==1&&tekst_html[i]<=122)
            {
                cout<<char(tekst_html[i]-32);
            }
            else if(tekst_html[i]=='>')
            {
                cout<<char(tekst_html[i]);
                bufor=0;
            }
            else
            {
               cout<<tekst_html[i];
            }
        }
        cout<<endl;
    }
    return 0;
}
