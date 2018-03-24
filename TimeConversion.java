import java.io.*;
import java.math.*;
import java.text.*;
import java.util.*;
import java.util.regex.*;
 class Solution {

    /*
     * Complete the timeConversion function below.
     */
    static String timeConversion(String s) {
       int i,h;
       String tmp="";
       tmp=s.substring(0,2);
       h=Integer.parseInt(tmp);     
       if(h==12 && s.charAt(8)=='A'){
		tmp="00";
	}
	else if(h==12 && s.charAt(8)=='P'){
		tmp="12";
	}
	else{
		if(h<12 && s.charAt(8)=='A'){
			tmp=s.substring(0,2);
		}
		else{
    			h=h+12;
			tmp=Integer.toString(h);
		}
	}
	
    return tmp+s.substring(2,8);

    }

    private static final Scanner scan = new Scanner(System.in);

    public static void main(String[] args) throws IOException {
      

        String s = scan.nextLine();

        String result = timeConversion(s);

       System.out.println(result);
        
    }
}
