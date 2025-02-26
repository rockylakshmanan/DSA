#include <iostream>

using namespace std;

void pattern1(int n)
{
    /*
    *****
    *****
    *****
    *****
    *****
    
    */
   cout<<"\n-------------pattern:1------------------\n";

    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }

}

void pattern2(int n)
{
    /*
    
    *
    **
    ***
    ****
    *****
    
    */
   cout<<"\n-------------pattern:2------------------\n";
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=i;j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }


}

void pattern3(int n)
{
    /*
    
    *****
    ****
    ***
    **
    *
    
    */
   cout<<"\n-------------pattern:3------------------\n";
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=(n-i)+1;j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }


}

void pattern4(int n)
{
    /*
    
    1
    1 2
    1 2 3
    1 2 3 4
    1 2 3 4 5
    
    */
   cout<<"\n-------------pattern:4------------------\n";
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=i;j++)
        {
            cout<<j<<" ";
        }
        cout<<endl;
    }


}

void pattern5(int n)
{
    /*
    
    *
    **
    ***
    ****
    *****
    ****
    ***
    **
    *
    
    */
   cout<<"\n-------------pattern:5------------------\n";
   int temp=n;
    for(int i=1;i<=(2*n)-1;i++)
    {    
        temp=(i>n)?temp-1:i;
        for(int j=1;j<=temp;j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }


}

void pattern6(int n)
{
    /*
    
         *
        **
       ***
      ****
     *****
    
    */
   cout<<"\n-------------pattern:6------------------\n";
   int temp=n;
    for(int i=1;i<=n;i++)
    { 
        for(int s=1;s<=(n-i);s++)
        {
            cout<<" ";
        }   

        for(int j=1;j<=i;j++)
        {
            cout<<"*";
        }

        cout<<endl;
        
    }


}

void pattern7(int n)
{
    /*
    
     *****
      ****
       ***
        **
         *
    
    */
   cout<<"\n-------------pattern:7------------------\n";
   int temp=n;
    for(int i=1;i<=n;i++)
    { 
        for(int s=1;s<=(i-1);s++)
        {
            cout<<" ";
        }   

        for(int j=1;j<=(n-i)+1;j++)
        {
            cout<<"*";
        }

        cout<<endl;
        
    }


}

void pattern8(int n)
{
    /*
    
        *
       ***
      *****
     *******
    *********

    
    */
   cout<<"\n-------------pattern:8------------------\n";
  
    for(int i=1;i<=n;i++)
    { 
        for(int s=1;s<=(n-i);s++)
        {
            cout<<" ";
        }   

        for(int j=1;j<=(2*i)-1;j++)
        {
            cout<<"*";
        }

        cout<<endl;
        
    }


}

void pattern9(int n)
{
    /*
     
    *********
     *******
      *****
       ***
        *
        
    
    */
   cout<<"\n-------------pattern:9------------------\n";
   int temp=(2*n)-1;
    for(int i=1;i<=n;i++)
    { 
        for(int s=1;s<=(i-1);s++)
        {
            cout<<" ";
        }   

        for(int j=1;j<=temp;j++)
        {
            cout<<"*";
            
            
        }

        cout<<endl;
        temp-=2;
        
    }


}

void pattern10(int n)
{
    /*
    
         *
        * *
       * * *
      * * * *
     * * * * *
    
    */
   cout<<"\n-------------pattern:10------------------\n";
  
    for(int i=1;i<=n;i++)
    { 
        for(int s=1;s<=(n-i);s++)
        {
            cout<<" ";
        }   

        for(int j=1;j<=i;j++)
        {
            cout<<"* ";
        }

        cout<<endl;
        
    }


}

void pattern11(int n)
{
    /*
    
     * * * * *
      * * * *
       * * *
        * *
         *
    
    */
   cout<<"\n-------------pattern:11------------------\n";
    int temp=n;
    for(int i=1;i<=n;i++)
    { 
        for(int s=1;s<=i-1;s++)
        {
            cout<<" ";
        }   

        for(int j=1;j<=temp;j++)
        {
            cout<<"* ";
        }

        cout<<endl;
        temp--;
        
    }


}

void pattern12(int n)
{
    /*
    
     * * * * *
      * * * *
       * * *
        * *
         *
         *
        * *
       * * *
      * * * *
     * * * * *
    
    */
   cout<<"\n-------------pattern:12------------------\n";
    int temp=n;
    for(int i=1;i<=2*n;i++)
    {  
        temp=(i<=n)?(n-i+1):(i-n);
        
        for(int s=1;s<=n-temp;s++)
        {
            cout<<" ";
        }   

        for(int j=1;j<=temp;j++)
        {
            cout<<"* ";
        }

        cout<<endl;
        
        
    }


}





int main()
{ 
    pattern1(5);
    pattern2(5);
    pattern3(5);
    pattern4(5);
    pattern5(5);
    pattern6(5);
    pattern7(5);
    pattern8(5);
    pattern9(5);
    pattern10(5);
    pattern11(5);
    pattern12(5);


    return 0;
}