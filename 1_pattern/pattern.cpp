#include <iostream>

using namespace std;

  /***************************************SQUARE***********************************************/

/*
   

  * * *         * * * * *                  
  * * *         * * * * *
  * * *         * * * * *
                * * * * *


*/



void square_1(int n){
    /*
     n=3    row     star space
 
     * * *   1       3    0
     * * *   2       3    0
     * * *   3       3    0

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
     n=3       row  number_count

     1 2 3      1       3
     4 5 6      2       3 
     7 8 9      3       3

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

     n=3       row  number_count

     9 8 7      1       3
     6 5 4      2       3 
     3 2 1      3       3


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
     
     n=3       row  number_count

     A B C      1       3
     D E F      2       3 
     F G H      3       3



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
    
    n=3       row  number_count

     I H G      1       3
     F E D      2       3 
     C B A     3       3


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
     
     n=3       row  number_count

     A B A      1       3
     B A B      2       3 
     A B A      3       3


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

    n=3       row  number_count

     B A B      1       3
     A B A      2       3 
     B A B      3       3

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
    
   /*
     
     n=3       row  number_count

     A B C      1       3
     D E F      2       3 
     F G H      3       3
   */

  
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






 /***************************************PYRAMID***********************************************/

/*

    right_half_pyramid
    ------------------

     *
     * *
     * * *

    left_half_pyramid
    -----------------
   
        *
      * *
    * * *
     
    reverse half pyramid
    ---------------------

    (i)reverse left

     * * *
       * *
         *
    
    (ii) reverse right
    
     * * *
     * *
     * 

    pyramid
    --------
 (i)

        *
      * * *
    * * * * *

 (ii)

      *
     * *
    * * *

   reverse pyramid
   ----------------

   * * * * *
     * * *
       *



*/


/* right_half_pyramid_*/

void right_half_pyramid_1(int n)
{
    /*
     n=3      row    star 

     *         1      1      
     * *       2      2     
     * * *     3      3     
     
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
     
     n=3      row    numb 

     1         1      1      
     1 2       2      2     
     1 2 3     3      3    
        
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
           
    n=3      row    numb 

     1         1      1      
     2 3       2      2     
     4 5 6     3      3     

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
     
     n=3      row    numb 

     6         1      1      
     5 4       2      2     
     3 2 1     3      3     
        
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
     n=3      row    char  

     A         1      1      
     A B       2      2     
     A B C     3      3     

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
    
     n=3      row    char  
     A         1      1      
     B C       2      2     
     D E F     3      3     


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
 
     n=3      row    char  

     A         1      1      
     A B       2      2     
     A B A     3      3     

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
   
    n=3      row    char  

     A         1      1      
     B A       2      2    
     A B A     3      3     


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
      
     n=3      row    char  

     1         1      1      
     1 0       2      2     
     1 0 1     3      3     

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
         
     n=3      row    char  

     1         1      1    
     0 1       2      2    
     1 0 1     3      3    

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

     n=3     row    space  star
        *     1       2     1
      * *     2       1     2
    * * *     3       0     3
   -------------------------------
                     n-i    i   
     
    */
  
   for(int i=1;i<=n;i++)
  {  
    
    for(int s=1;s<=n-i;s++)
    {
      cout<<"  ";
    }

    for(int j=1;j<=i;j++)
    {
      cout<<"* ";
    }
   
    
    cout<<endl;
  }

}

void left_half_pyramid2(int n)
{

    /*

     n=3     row    space  star
        1     1       2     1
      1 2     2       1     2
    1 2 3     3       0     3
   -------------------------------
                     n-i    i   
     
    */
  
   for(int i=1;i<=n;i++)
  {  
    
    for(int s=1;s<=n-i;s++)
    {
      cout<<"  ";
    }

    for(int j=1;j<=i;j++)
    {
      cout<<j<<" ";
    }
   
    
    cout<<endl;
  }

}

void left_half_pyramid3(int n)
{

    /*

     n=3     row    space  star
        1    1       2     1
      2 3    2       1     2
    4 5 6    3       0     3
   -------------------------------
                     n-i    i   
     
    */
  int t=1;
   for(int i=1;i<=n;i++)
  {  
    
    for(int s=1;s<=n-i;s++)
    {
      cout<<"  ";
    }

    for(int j=1;j<=i;j++)
    {
      cout<<t<<" ";
      t++;
    }
   
    
    cout<<endl;
  }

}

void left_half_pyramid4(int n)
{

    /*

     n=3     row    space  star
        A    1       2     1
      A B    2       1     2
    A B C    3       0     3
   -------------------------------
                     n-i    i   
     
    */
 // int t=1;
   for(int i=1;i<=n;i++)
  {  
    char ch='A';
    for(int s=1;s<=n-i;s++)
    {
      cout<<"  ";
    }

    for(int j=1;j<=i;j++)
    {
      cout<<ch<<" ";
      ch++;
    }
   
    
    cout<<endl;
  }

}

void left_half_pyramid5(int n)
{

    /*

     n=3     row    space  star
        A    1       2     1
      B C    2       1     2
    D E F    3       0     3
   -------------------------------
                     n-i    i   
     
    */
 // int t=1;
 char ch='A';
   for(int i=1;i<=n;i++)
  {  
    
    for(int s=1;s<=n-i;s++)
    {
      cout<<"  ";
    }

    for(int j=1;j<=i;j++)
    {
      cout<<ch<<" ";
      ch++;
    }
   
    
    cout<<endl;
  }

}

void left_half_pyramid6(int n)
{

    /*

     n=3     row    space  star
        C    1       2     1
      C B    2       1     2
    C B A    3       0     3
   -------------------------------
                     n-i    i   
     
    */
 // int t=1;
 
   for(int i=1;i<=n;i++)
  {  
    char ch='A'+n-1;
    for(int s=1;s<=n-i;s++)
    {
      cout<<"  ";
    }

    for(int j=1;j<=i;j++)
    {
      cout<<ch<<" ";
      ch--;
    }
   
    
    cout<<endl;
  }

}

void left_half_pyramid7(int n)
{

    /*

     n=3     row    space  star
        A    1       2     1
      B A     2       1     2
    A B A    3       0     3
   -------------------------------
                     n-i    i   
     
    */
 // int t=1;
 
   for(int i=1;i<=n;i++)
  {  
    char ch= (i%2!=0)?'A':'B';
    for(int s=1;s<=n-i;s++)
    {
      cout<<"  ";
    }

    for(int j=1;j<=i;j++)
    {
      cout<<ch<<" ";
      ch=(ch=='A')?'B':'A';
    }
   
    
    cout<<endl;
  }

}

void left_half_pyramid8(int n)
{

    /*

     n=3     row    space  star
        A    1       2     1
      A B    2       1     2
    A B A    3       0     3
   -------------------------------
                     n-i    i   
     
    */
 // int t=1;
 
   for(int i=1;i<=n;i++)
  {  
    char ch= 'A';
    for(int s=1;s<=n-i;s++)
    {
      cout<<"  ";
    }

    for(int j=1;j<=i;j++)
    {
      cout<<ch<<" ";
      ch=(ch=='A')?'B':'A';
    }
   
    
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
     n=3     row   star   
     * * *   1      3      
     * *     2      2
     *       3      1

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
                  count
     n=3    row   number
     1 1 1   1      3
     2 2     2      2
     3       3      1
     
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
        
                  count
     n=3    row   number
     1 2 3   1      3
     1 2     2      2
     1       3      1
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
                  count
     n=3    row   number
     1 2 3   1      3
     4 5     2      2
     6       3      1

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
                       
     n=3    row   char
     A B C   1      3
     A B     2      2
     A       3      1

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
          
     n=3    row   char
     C B A   1      3
     C B     2      2
     C       3      1

     
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
     
     n=3    row    num count
     1 0 1   1      3
     1 0     2      2
     1       3      1


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
     
     n=3    row    num count
     1 0 1   1      3
     0 1     2      2
     1       3      1

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
          
     n=3    row    num count
     A B A   1      3
     A B     2      2
     A       3      1

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
        
     n=3    row   char_count
     A B A   1      3
     B A     2      2
     A       3      1


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

        //left_half_pyramid1(i);
        //left_half_pyramid2(i);
        //left_half_pyramid3(i);
        //left_half_pyramid4(i);
        // left_half_pyramid5(i);
        //left_half_pyramid6(i);
        //left_half_pyramid7(i);
        left_half_pyramid8(i);

          
        


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
        //  pyramid_3(i);

        
        cout<<"-----------------x----------------\n";
    }

    return 0;
}