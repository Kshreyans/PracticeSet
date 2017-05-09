
package jdbc_demo;

import java.sql.Statement;
import java.sql.Connection;
import java.sql.DriverManager;
import java.sql.SQLException;
import java.util.*;
import com.mysql.jdbc.exceptions.jdbc4.MySQLIntegrityConstraintViolationException;

public class JDBC_demo {

    
    public static void main(String[] args) 
    {
        Scanner sc= new Scanner(System.in);
        Connection con=null;
       try 
       { Class.forName("com.mysql.jdbc.Driver");
         con =DriverManager.getConnection("jdbc:mysql://localhost:3306/stp17","root","shreyanshu");
       
            
            if(con!=null)
             System.out.println("Connection ok");
            else
             System.out.println("Connection failed");   
         
            Statement st = con.createStatement();
          
                        
        
                System.out.println("Enter the username :-");
                String uname = sc.next();
                
                System.out.println("Enter password:-"); 
                String pwd = sc.next();
                
                int status = st.executeUpdate("insert into login values('"+uname+"','"+pwd+"','user')");
                
                if(status >0 )
                  System.out.println("Registratoion done");
                 else
                  System.out.println("Registratoion failed!");
          
                
                System.out.println("Enter the  fname   ,   lname   ,  address   , email ,  mobile_ no" );
                String fname=sc.next();
                String lname=sc.next();
                String address=sc.next();
                String email=sc.next();
                String mob=sc.next();
                
                
                int status1 =st.executeUpdate("insert into user_detail values('"+uname+"','"+fname+"','"+lname+"','"+address+"','"+email+"','"+mob+"')");   
            
                if(status1 >0 )
                  System.out.println("Details inserted");
                 else
                  System.out.println("Not done!");
          
             
       }  
        catch(MySQLIntegrityConstraintViolationException e) 
          { System.err.println( "user already exists!");
          }
        catch( Exception e)
         { System.err.println(e);
         }
       
       finally
       { try
           { if(con!=null)
               con.close();
           }
           catch(SQLException e)
           { System.err.println(e);
           }
       }   
       
       }
    
}
