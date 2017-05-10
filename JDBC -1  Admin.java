package jdbc_program.doa;

import java.sql.Connection;
import java.sql.ResultSet;
import java.sql.Statement;
import java.util.Scanner;


public class Admin 
{
       
   public void admin(String uid)
   { 
       Connection con =DBConnection.getDBConnection();
       Scanner sc = new Scanner(System.in);
       int ch;
       
       
      try{
                    Statement st = con.createStatement( );
           while(true)
           {  System.out.printf("\nWelcome Admin :- 1.Show All Records\n 2.Delete a user \n3.Change password\n4.Logout");
               System.out.printf("\nEnter your choice:-");
                 ch=sc.nextInt();  
               
               switch(ch)
                 { 
                     case 1: ResultSet rs = st.executeQuery("Select *from login");
                             while(rs.next())
                             { System.out.println(rs.getString(1)+"     "+rs.getString(2)+"     "+rs.getString(3));
                             }
                             break;
                  
                     case 2:String uid2; 
                             System.out.printf("\nEnter the user id to be deleted:-");
                             uid2=sc.next();
                             int status=st.executeUpdate("delete from login where userid='"+uid2+"'");
                             if(status > 0)
                              System.out.println(uid2+"   User deleted");   
                             else
                              System.out.println(uid2+"   User Does not Exists!!");   
                              break;
                     case 3: 
                             System.out.printf("\nEnter the Password to be changed:-");
                             String pwd =sc.next();
                             status=st.executeUpdate("Update login set Password='"+pwd+"' where userid='"+uid+"'");
                             if(status > 0)
                              System.out.println(uid+" Password Changed");   
                             else
                              System.out.println(uid+"   Password not changed!!");   
                             break;
                
                     case 4:System.out.println("***Redirecting to main menu***\n");return ;       
                     
                     default:System.out.printf("\nEnter the right choice!!");
             
                 }   
         }
     } 
      catch(Exception e)
      {System.err.println(e);}      
       
   }         
   
    
}
