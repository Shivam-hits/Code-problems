// A java code to remove extra white space from String

import java.util.*;

class remove_extra_space{
    public static void main(String[] args){
        String s = "hello              world                  asas";
        int n= s.length();

        StringBuilder result = new StringBuilder(n);

        boolean flag=false;
        for(int i=0;i<n;i++)
        {
            char a=s.charAt(i);
            if(Character.isWhitespace(a))
            {
                if(!flag)
                {
                    result.append(" ");
                    flag=true;
                }
            }
            else{
                result.append(a);
                flag=false;
            }
        }
        System.out.println(result);
    }
}