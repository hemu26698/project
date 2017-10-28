#include<iostream>
#include<windows.h>
#include<conio.h>
#include <cstdlib>
#include <dbghelp.h>
#include"signin.h"
#include"help.h"
#include "search.h"
#include"ret.h"
#include "createrecord.h"

using namespace std;

int main()
{  int i;
    char l,b;
    system("COLOR F5");
    cout<<"Please sign in to go ahead !"<<"\n";
    signin obj;
    obj.login();
    system("COLOR FA");
    cout<<endl<<"\n Press Enter to open Menu";
    getch();
    system("CLS");
    lab:
    system("CLS");
    system("COLOR F1");
    cout<<endl<<"Press the button as designated to do a task\n"<<endl<<endl;
    cout<<"1. Add Books\n"<<"2. Search Books\n"<<"3. Issue bbok\n"<<"4. Return Book\n"<<"5. Help \n"<<"6. Exit\n";
    cout<<endl<<"Enter your choice -> ";
    cin>>i;
    switch (i)
    { case 1 :
        {  createrecord abc;
            abc.add();
            cout<<"Books added 1 \n";
            cout<<"Press 'b' and then Enter to go back -> ";
            cin>>l;
            if(l=='b')
            { }
            break;
        }
        case 2 :
        {   system("CLS");
            search so;
            so.ser();

            cout<<"Press 'b'and then Enter  to go back ->";
            cin>>l;
            if(l=='b')
            { system("CLS");
                }
            break;
        }
        case 3 :
        { cout<<endl<<"            * to issue a book , Please Go back and Search for your book first !"<<endl;
                  cout<<"                              if its available then you can issue your book !"<<endl;
            cout<<endl<<"Press 'b' and then Enter to go back ->";
            cin>>l;
            if(l=='b')
            {   system("CLS");
                }

            break;
        }
        case 4 :
        {   ret rt;
            cout<<"Press 'b'and then Enter  to go back ->";

            cin>>l;
            if(l=='b')
            { system("CLS");
                }
            break;
        }
        case 5 :
        {
            help ho;
            getch();
            break;
        }
        case 6 :
        {   exit(0);
                  }
        default :
        {   cout<<endl<<"Wrong Choice , Try Agin !";
            cout<<endl<<"Press 'y' and then Enter to try again ->";
          /*  cin>>l;
            if(l=='y')
            {   system("CLS");
                } ye jo comment me dala hai sb case se mita lena*/
            break;
        }
    }

    goto lab;
    return 0;

}


