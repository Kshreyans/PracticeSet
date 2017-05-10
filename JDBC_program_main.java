
package jdbc_program;

import java.sql.Connection;
//import java.sql.DriverManager;
import java.sql.PreparedStatement;
import java.sql.ResultSet;
//import java.sql.Statement;
import java.util.Scanner;
import jdbc_program.doa.*;

public class JDBC_program_main {

   static Connection con=null;
  static JDBC_program_main obj= new JDBC_program_main();
  static Scanner sc = new Scanner(System.in);

 
 void login()
    { String uid ,pwd;
       // Scanner sc = new Scanner(System.in);
       
         System.out.printf("\nEnter user ID:-");       uid=sc.next();
        System.out.printf("\npassword:-");       pwd=sc.next();
       
     try{ 
         PreparedStatement pst = con.prepareStatement("Select * from login where userid=? and password=?"); 
       
         pst.setString(1, uid);
         pst.setString(2, pwd);
        
         ResultSet rs= pst.executeQuery();
         
         if(rs.next())
         {      
                if(rs.getString("type").equals("admin"))
                { // obj.admin(uid);
                   Admin a= new Admin();
                   a.admin(uid);
                }
                else
                { user r =new user();
                    r.user();
                }   
         }
         else
         {System.out.println("Invalid user name or password");}   
       }
       catch(Exception e)
       {System.err.println(e);
       }  
        
    }       
    
    
    
    
    
    public static void main(String[] args) 
    {
                
       try{ 
                
                con = DBConnection.getDBConnection();
                  
                if(con!=null)
                  System.out.println("Connection Established !!");  
                else
                  System.out.println("Connection failed ");  
          }
          catch(Exception e)
          { System.err.println(e);
          }   
       
       
       
        int ch;
       
      while(true) 
      {      System.out.printf("\n+++++   Main MENU   +++++\n1.Login \n 2.Registration \n 3.Exit \n Enter the your choice:-");
             ch = sc.nextInt();
        
            switch(ch)
            {  
                case 1: obj.login();break;
            
                case 2: User_Registration rg = new User_Registration();
                        rg.user_reg();
                        break;
            
                case 3:System.out.println("***Thank you***");return; 
                default:System.out.println("Enter the right choice!!");         
            }    
    
       }
    }

}
