import java.io.*;
import java.util.*;

public class Solution {

    public static void main(String[] args) {
        /* Enter your code here. Read input from STDIN. Print output to STDOUT. Your class should be named Solution. */
        Scanner sc = new Scanner(System.in);
        int a;
        a = sc.nextInt();
        for (int y=0;y<a;y++)
        {
          
        String str = sc.next();
        char str1,str2;
       
        
        StringBuilder sbe = new StringBuilder("");
        StringBuilder sbo = new StringBuilder("");
                      
        
        int x;
        for (x=0;x<str.length();x++)
        {
            if (x%2==0)
            {
                str1 = str.charAt(x);
                sbe.append(str1);
            }
            else 
            {
                str2 = str.charAt(x);
                sbo.append(str2);
            }
        }
        System.out.println(sbe+" "+sbo);
        }
    }
}
