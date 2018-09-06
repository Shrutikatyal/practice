import java.util.*;
import java.util.regex.*;

public class Solution {



    private static final Scanner scanner = new Scanner(System.in);

    public static void main(String[] args) {
        int N = scanner.nextInt();
        scanner.skip("(\r\n|[\n\r\u2028\u2029\u0085])?");
        String regex="([a-z]|@|.)+@gmail\\.com$";
        List<String> list=new ArrayList();
        Pattern p=Pattern.compile(regex);
        
        for (int NItr = 0; NItr < N; NItr++) {
            String[] firstNameEmailID = scanner.nextLine().split(" ");

            String firstName = firstNameEmailID[0];

            String emailID = firstNameEmailID[1];
            
            Matcher m=p.matcher(emailID);
            if(m.find() && emailID.length()<=50)
                list.add(firstName);
        }

        Collections.sort(list);
        
        for(int i=0;i<list.size();i++)
            System.out.println(list.get(i));
       
        
        scanner.close();
    }
}
