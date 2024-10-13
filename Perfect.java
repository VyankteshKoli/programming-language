import java.util.*;
import java.io.*;
import java.Scanner;
class Perfect
{
    void check(int s,int k,int n)
    {
        if(k==n)
          {
              if(s==n)
                 System.out.println("Perfect No.");
                 else
                    System.out.println("Not Perfect");
              return;
            }
            else
              {
                  if(n%k==0)
                    {
                        s=s+k;
                        check(s,++k,n);
                    }
                  else
                     check(s,++k,n);
                    }
    }
    public static void main()
    {
        Scanner sc=new Scanner(System.in);
        Perfect ob=new Perfect();
        int no;
        System.out.println("Enter Number:-");
        no=sc.nextInt();
        ob.check(0,1,no);
    }
}
              
