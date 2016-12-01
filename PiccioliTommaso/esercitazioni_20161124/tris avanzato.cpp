#include <iostream>
#include <time.h>
#include <stdlib.h>

char risposta;
using namespace std;
main ()



{
	do{
	
	
	
   int r, co, m=0, n=0, c=0;
   int a[3][3];
   char b[3][3];
   bool y=false, x=true, z=true, o;
   for (m=0; m<=2; m++)            
   {
       for (n=0; n<=2; n++)
       {
           b[m][n]='_';
       }
   }
   do {
           for (m=0; m<=2; m++)            
           {
               cout << b[m][0] << "|" << b[m][1] << "|" << b[m][2] << endl;
           }  
           do{  
               cout << "Inserisci la Riga  Dove Vuoi Mettere La X: (Da 1 a 3)" << endl;
               cin >> r;
			   
			   cout<<"inserisci la colonna (Da 1 a 3)" <<endl;
			   
			   
			   cin >> co;
               r--;
               co--;
               if (co>=0 && r>=0)
               {
                   int a[r][co];
                   for (m=0; m<=2; m++)
                   {
                       for (n=0; n<=2; n++)
                       {
                           if (r==m && co==n)
                           {
                               if (b[m][n]=='_')
                               {
                                   b[m][n]='X';
                                   o=true;
                               }
                               else
                               {
                                   cout << "ERROR NEL DIGITARE!";
                                   o=false;
                               }
                           }
                       }
                   }
               }
               else
               {
                   cout << "ERROR!!!!!";
                   o=false;
               }
           }
           while(o==false);
           do
           {
           	
           	int rpc=rand()%3, copc=rand()%3;
           	
           	for (m=0; m<=2; m++)
                   {
                       for (n=0; n<=2; n++)
                       {
                           if (rpc==m && copc==n)
                           {
                               if (b[m][n]=='_')
                               {
                                   b[m][n]='O';
                                   x=false;
                               }
                               else
                               {
                                   c=0;
                                   for (m=0; m<=2; m++)
                                   {
                                       for (n=0; n<=2; n++)
                                       {
                                           if(b[m][n]=='X' || b[m][n]=='O')
                                           {
                                               c++;
                                               x=true;
                                           }
                                       }
                                       if(c>=9)
                                       x=false;
                                   }
                               }
                           }
                       }
                   }
               }
           while (x==true);  
           
		   
           
           
           c=0;
           for(m=0; m<=2; m++)
           {
               if (b[m][0]==b[m][1] && b[m][1]==b[m][2] && b[m][1]!='_')
               {
                   y=true;
                   if (b[m][1]== 'O')
                   z=false;
               }
           }
           if (b[0][0]==b[1][1] && b[1][1]==b[2][2] && b[1][1]!='_')
           {
               y=true;
               if (b[1][1]== 'O')
               z=false;
           }
           if (b[0][2]==b[1][1] && b[1][1]==b[2][0] && b[2][0]!='_')
           {
               y=true;
               if (b[0][2]== 'O')
               z=false;
           }
           for (n=0; n<=2; n++)
               {
                   if (b[0][n]==b[1][n] && b[1][n]==b[2][n] && b[1][n]!='_')
                   {
                       y=true;
                       if (b[1][n]== 'O')
                       z=false;
                   }
               }
           if (y!=true)
           {
               for (m=0; m<=2; m++)
               {
                   for (n=0; n<=2; n++)
                   {
                       if(b[m][n]!='_')
                       {
                           if(b[m][n]=='X' || b[m][n]=='O')
                           {
                           c++;
                           }
                           if(c>=9)
                           y=true;
                       }
                   }
               }
           }  
   }
   while (y!=true);
   if (z==true && c<9)
   cout << "Hai Vinto!";
   if (z==false && c<9)
   cout << "Hai Perso!";
   if (c>=9)
   cout << "Pareggio!";
   
   
   {
   	cout<<" vuoi rigiocare?  (y/n)"<<endl;
   	cin>>risposta;
	   
    if(risposta=='n')
   	return 0;
   }
}
   while(risposta=='y');}


   
   
           




