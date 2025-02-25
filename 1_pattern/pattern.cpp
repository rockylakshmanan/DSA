#include <iostream>

using namespace std;

/*square_*/

void square_1(int n)
{
    /*
     n=3

     * * *
     * * *
     * * *

    */

    for(int i=1;i<=n;i++)
    {
     for(int j=1;j<=n;j++)
     {
        cout<<"* ";
     }
     cout<<endl;
    }

}

void square_2(int n)
{
    /*
     n=3

     1 2 3
     4 5 6
     7 8 9

    */
    int t=1;
    for(int i=1;i<=n;i++)
    {
     for(int j=1;j<=n;j++)
     {
        cout<<t<<" ";
        t++;
     }
     cout<<endl;
    }

}

void square_3(int n)
{
    /*
     n=3

     9 8 7
     6 5 4
     3 2 1

    */
    int t=n*n;
    for(int i=1;i<=n;i++)
    {
     for(int j=1;j<=n;j++)
     {
        cout<<t<<" ";
        t--;
     }
     cout<<endl;
    }

}

void square_4(int n)
{
    /*
     n=3

     A B C
     D E F
     F G H

    */
    char ch='A';
    for(int i=1;i<=n;i++)
    {
     for(int j=1;j<=n;j++)
     {
        cout<<ch<<" ";
        ch++;
     }
     cout<<endl;
    }

}

void square_5(int n)
{
    /*
     n=3

     I H G
     F E D
     C B A

    */
    char ch='A'+((n*n)-1);
    for(int i=1;i<=n;i++)
    {
     for(int j=1;j<=n;j++)
     {
        cout<<ch<<" ";
        ch--;
     }
     cout<<endl;
    }

}

void square_6(int n)
{
    /*
     n=3

     A B A
     B A B
     A B A

    */
    char ch='A';
    for(int i=1;i<=n;i++)
    {
     char ch=(i%2!=0)?'A':'B';
     
     for(int j=1;j<=n;j++)
     {
        cout<<ch<<" ";
        ch=(ch=='A')?'B':'A';
     }
     cout<<endl;
    }

}

void square_7(int n)
{
    /*
     n=3

     B A B
     A B A
     B A B
     

    */
    char ch='A';
    for(int i=1;i<=n;i++)
    {
     char ch=(i%2!=0)?'B':'A';
     
     for(int j=1;j<=n;j++)
     {
        cout<<ch<<" ";
        ch=(ch=='A')?'B':'A';
     }
     cout<<endl;
    }

}

void square_8(int n)
{

    for(int i=1;i<=n;i++)
    {
     
        for(int j=1;j<=n;j++)
        {
            if(j==1 || i==1 || i==n ||j==n)
            {
                cout<<"* ";
            }
            else{
                cout<<"  ";
            }
        }
        cout<<endl;

    }
}



/* right_half_pyramid_*/

/*
*
* *
* * *

*/
void right_half_pyramid_1(int n)
{
    /*
     n=3

     *
     * *
     * * *
     
    */
   
    for(int i=1;i<=n;i++)
    {
     
     
     for(int j=1;j<=i;j++)
     {
        cout<<"* ";
     }
     cout<<endl;
    }

}

void right_half_pyramid_2(int n)
{
    /*
     n=3

     1
     1 2
     1 2 3 
        
    */
   
    for(int i=1;i<=n;i++)
    {
     
     
     for(int j=1;j<=i;j++)
     {
        cout<<j<<" ";
     }
     cout<<endl;
    }

}

void right_half_pyramid_3(int n)
{
    /*
     n=3

     1
     2 3
     4 5 6 
        
    */
    int k=1;
    for(int i=1;i<=n;i++)
    {
     
     
     for(int j=1;j<=i;j++)
     {
        cout<<k<<" ";
        k++;
     }
     cout<<endl;
    }

}

void right_half_pyramid_4(int n)
{
    /*
     n=3

     6
     5 4
     3 2 1 
        
    */
    int k=2*n;
    for(int i=1;i<=n;i++)
    {
     
     
     for(int j=1;j<=i;j++)
     {
        cout<<k<<" ";
        k--;
     }
     cout<<endl;
    }

}

void right_half_pyramid_5(int n)
{

    /*
     n=3

     A
     A B
     A B C

    */
  for(int i=1;i<=n;i++)
  {  char ch='A';
    for(int j=1;j<=i;j++)
    {
      cout<<ch<<" ";
      ch++;
    }
    cout<<endl;
  }

}

void right_half_pyramid_6(int n)
{

    /*
     n=3

     A
     B C
     D E F

    */
   char ch='A';
  for(int i=1;i<=n;i++)
  {  
    for(int j=1;j<=i;j++)
    {
      cout<<ch<<" ";
      ch++;
    }
    cout<<endl;
  }

}

void right_half_pyramid_7(int n)
{

    /*
     n=3

     A
     A B
     A B A

    */
   
  for(int i=1;i<=n;i++)
  {  
    char ch='A';
    for(int j=1;j<=i;j++)
    {
      ch=(j%2==0)? 'B':'A';
      cout<<ch<<" ";
      
    }
    cout<<endl;
  }

}

void right_half_pyramid_8(int n)
{

    /*
     n=3

     A
     B A 
     A B A 

    */
  
  for(int i=1;i<=n;i++)
  {  
    char ch=(i%2==0)?'B':'A';
    for(int j=1;j<=i;j++)
    {  
        
       
      cout<<ch<<" ";
    ch=(ch=='A')?'B':'A';

     
    
      
    }
    cout<<endl;
  }

}

void right_half_pyramid_9(int n)
{

    /*
     n=3

     1
     1 0 
     1 0 1
      

    */
  
  for(int i=1;i<=n;i++)
  {  
    int start=1;
    for(int j=1;j<=i;j++)
    {  
     cout<<start<<" ";
     start=1-start; 
         
      
    }
    cout<<endl;
  }

}

void right_half_pyramid_10(int n)
{

    /*
     n=3

     1
     0 1  
     1 0 1
      

    */
  
  for(int i=1;i<=n;i++)
  {  
    int start= (i%2!=0)?1:0;
    for(int j=1;j<=i;j++)
    {  
     cout<<start<<" ";
     start=1-start; 
         
      
    }
    cout<<endl;
  }

}



/* Left Half pyramid*/

void left_half_pyramid1(int n)
{

    /*
     n=3
        * 
      * * 
    * * * 
      
     
    */
  
   for(int i=1;i<=n;i++)
  {  
    
   
    
    cout<<endl;
  }

}




/*REVERSE rev half pyramid*/


/*
  * * *
  * *
  * 
  
*/
void rev_half_pyramid_1(int n)
{

    /*
     n=3
     * * *
     * *
     *           

    */
  
  for(int i=1;i<=n;i++)
  {  
    
    for(int j=1;j<=n-i+1;j++)
    {  
     cout<<"* ";
    
         
      
    }
    cout<<endl;
  }

}

void rev_half_pyramid_2(int n)
{

    /*
     n=3
     1 1 1
     2 2
     3           

    */
  
  for(int i=1;i<=n;i++)
  {  
    
    for(int j=1;j<=n-i+1;j++)
    {  
     cout<<i<<" ";
    
              
    }
    cout<<endl;
  }

}

void rev_half_pyramid_3(int n)
{

    /*
     n=3
     1 2 3
     1 2
     1           

    */
  
  for(int i=1;i<=n;i++)
  {  
    
    for(int j=1;j<=n-i+1;j++)
    {  
     cout<<j<<" ";
    
              
    }
    cout<<endl;
  }

}

void rev_half_pyramid_4(int n)
{

    /*
     n=3
     1 2 3
     4 5
     6           

    */
  int temp=1;
  for(int i=1;i<=n;i++)
  {  
    
    for(int j=1;j<=n-i+1;j++)
    {  
     cout<<temp<<" ";
    
         temp++;     
    }
    cout<<endl;
  }

}

void rev_half_pyramid_5(int n)
{

    /*
     n=3
     
     A B C
     A B 
     A

    */
  
  for(int i=1;i<=n;i++)
  {  
    char ch='A';
    for(int j=1;j<=n-i+1;j++)
    {  
     cout<<ch<<" ";
    
         ch++;     
    }
    cout<<endl;
  }

}

void rev_half_pyramid_6(int n)
{

    /*
     n=3
     
     C B A
     C B 
     C

    */
  
   for(int i=1;i<=n;i++)
  {  
    char ch='A'+(n-1);
    for(int j=1;j<=n-i+1;j++)
    {  
   
     cout<<ch<<" ";
     ch--;
    
             
    }
    cout<<endl;
  }

}

void rev_half_pyramid_7(int n)
{

    /*
     n=3
     
     1 0 1
     1 0
     1

    */
  
   for(int i=1;i<=n;i++)
  {  
     int start=1;
    for(int j=1;j<=n-i+1;j++)
    {  
   
     cout <<start<<" ";
     start=1-start;
             
    }
    cout<<endl;
  }

}

void rev_half_pyramid_8(int n)
{

    /*
     n=3
     
     1 0 1
     0 1
     1

    */
  
   for(int i=1;i<=n;i++)
  {  
     int start=(i%2!=0)?1:0;
    for(int j=1;j<=n-i+1;j++)
    {  
   
     cout <<start<<" ";
     start=1-start;
             
    }
    cout<<endl;
  }

}

void rev_half_pyramid_9(int n)
{

    /*
     n=3
     
     A B A
     A B
     A
     

    */
  
   for(int i=1;i<=n;i++)
  {  
     char ch='A';
    for(int j=1;j<=n-i+1;j++)
    {  
   
     cout <<ch<<" ";
    ch=(ch=='A')?'B':'A';
             
    }
    cout<<endl;
  }

}

void rev_half_pyramid_10(int n)
{

    /*
     n=3
     
     A B A
     B A
     A
     
    */
  
   for(int i=1;i<=n;i++)
  {  
     char ch=(i%2==0)?'B':'A';
    for(int j=1;j<=n-i+1;j++)
    {  
   
     cout <<ch<<" ";
    ch=(ch=='A')?'B':'A';
             
    }
    cout<<endl;
  }

}




            /*pyramid*/

void pyramid_1a(int n)
{
    /*
           *
         * * *
       * * * * *   
    
    */

for(int i=1;i<=n;i++)
{
  //space

  for(int s=0;s<(n-i);s++)
  {
    cout<<"  ";
  }

  //star

  for(int j=0;j<(2*i)-1;j++)
  {
    cout<<"* ";
  } 


  
  cout<<endl;

}

}

void pyramid_1b(int n)
{
    /*
           *
         * * *
       * * * * *   
    
    */

for(int i=0;i<n;i++)
{
  

  for(int j=0;j<n+i;j++)
  {
    if(j<n-i-1) cout<<"  ";
    else cout<<"* ";

  } 


  
  cout<<endl;

}

}


void pyramid_2(int n)
{
    /*           
                      row    space    star  
           *           1       2       1
          * *          2       1       2
         * * *         3       0       3
                    ------------------------
                              n-i      i
    
    */

for(int i=1;i<=n;i++)
{
  //space

  for(int s=1;s<=(n-i);s++)
  {
    cout<<" ";
  }

  //star

  for(int j=1;j<=i;j++)
  {
    cout<<"* ";
  } 
  
  cout<<endl;

}

}

 
void pyramid_3(int n)
{

    /*                row     space    star
      * * * * *        1       0        5                 
        * * *          2       1        3
          *            3       2        1
                    ------------------------
                              i-1    t= 2*n-1 
                                     t-=2


    */
   int temp = 2*n-1;
    for(int i=1;i<=n;i++)
    {
        
        

        for(int s=1;s<=i-1;s++)
        {
         cout<<"  ";
        }

        for(int j=1;j<=temp;j++)
        {
            cout<<"* ";
        }
        temp-=2;
        cout<<endl;
    }
}





/*diamond*/

void diamond1(int n)
{
    /*
    n=3
       *
      ***
     *****
      ***
       *
       
    */
}


int main()
{
    int arr[]={3,5,8};
    cout<<"*******Pattern Problems********\n";
    for(auto i:arr)
    {
        //square_1(i);
        //square_2(i);
        //square_3(i);
        //square_4(i);  
        //square_5(i);
        //square_6(i);
        //square_7(i);
        //square_(i);

        //right_half_pyramid_1(i);
        //right_half_pyramid_2(i);
        //right_half_pyramid_3(i);
        //right_half_pyramid_4(i);
        //right_half_pyramid_5(i);
        //right_half_pyramid_6(i);
        //right_half_pyramid_7(i);
        //right_half_pyramid_8(i);
        //right_half_pyramid_9(i);
        //right_half_pyramid_10(i);

        


        //rev_half_pyramid_1(i);
        //rev_half_pyramid_2(i);
        //rev_half_pyramid_3(i);
        //rev_half_pyramid_4(i);
        //rev_half_pyramid_5(i);
        //rev_half_pyramid_6(i);
        //rev_half_pyramid_7(i);
        //rev_half_pyramid_8(i);
        //rev_half_pyramid_9(i);
        //rev_half_pyramid_10(i);
        

        //pyramid_1b(i);
        //pyramid_2(i);
          pyramid_3(i);
        cout<<"-----------------x----------------\n";
    }

    return 0;
}