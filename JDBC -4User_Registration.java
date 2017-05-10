
package jdbc_program.doa;

import java.sql.Connection;
import java.sql.Statement;
import java.util.Scanner;

public class User_Registration
{ 
    Connection con =DBConnection.getDBConnection();
    
    public void user_reg()
    { 
        try{
             Statement st = con.createStatement( );
             Scanner sc=new Scanner(System.in);
             System.out.printf("\n====REGISTRATION ====\n  Enter the user details:-\n user ID:-");     String uname=sc.next();
             System.out.printf("\nPassword :-");     String pwd=sc.next();
             System.out.printf("\ntype :-");     String type=sc.next();
             System.out.printf("\nFname :-");     String fname=sc.next();
             System.out.printf("\nLname:-");     String lname=sc.next();
             System.out.printf("\nAddress:-");   String add=sc.next();    
             System.out.printf("\nEmail :-");     String email=sc.next();
             System.out.printf("\nContact NO. :-");     String cno=sc.next();
             
             int status = st.executeUpdate("insert into login values('"+uname+"','"+pwd+"','"+type+"')");
             int status1 = st.executeUpdate("insert into user_detail values('"+uname+"','"+fname+"','"+lname+"','"+add+"','"+email+"',"+cno+")");
            con.setAutoCommit(false);
                             if(status > 0 && status1>0 )
                             { con.setAutoCommit(true);
                               System.out.println(uname+"   User Registered");
                             } 
                             else
                             {con.rollback();
                               System.out.println(uname+"   User Not registered!!");
                               con.setAutoCommit(true);
                             }
            } catch(Exception e)
            {System.err.println("Error in User Registration"+e);}   
    
    
    
    }
   /* public static void main(String args[])
    { User_Registration r=new User_Registration();
      r.user_reg();
    }       
    */
}
