package jdbc_program.doa;

import java.sql.Connection;
import java.sql.ResultSet;
import java.sql.Statement;
import java.util.Scanner;


public class user {
    
  public  void user()
    { Scanner sc =new Scanner(System.in);
     Connection con =DBConnection.getDBConnection();
        int ch;
       System.out.println("Welcome User :- 1.Show All Records\n 2.Logout");
       
       try{
                    Statement st = con.createStatement( );
           while(true)
           {  
               System.out.printf("\nEnter your choice:-");
                 ch=sc.nextInt();  
               
               switch(ch)
                 { 
                     case 1: ResultSet rs = st.executeQuery("Select *from login");
                             while(rs.next())
                             { System.out.println(rs.getString(1)+"     "+rs.getString(2)+"     "+rs.getString(3));
                             }
                             break;
         
        
                      case 2:System.out.println("***Redirecting to main menu***");return ;       
                      default:System.out.println("Enter the right choice!!");
             
                 }   
         }
     } 
      catch(Exception e)
      {System.err.println(e);}               
        
    }        


}
