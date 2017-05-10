
package jdbc_program.doa;

import java.sql.Connection;
import java.sql.DriverManager;


public class DBConnection 
{ 
   public static Connection con =null;                                          // It's made Static as only one object is to be made
    static                                                                      // per connection & publicly accessible in package  
    {                                                                           //by importing & using it with class name object.
    
        try
        {   
            Class.forName("com.mysql.jdbc.Driver");
            con = DriverManager.getConnection("jdbc:mysql://localhost:3306/Registration","root","shreyanshu");
          
          /*  if(con !=null)
            System.out.println("Connection Established");
            else
             System.out.println("Connection Failed");   
          */
        }
        catch(Exception e)
        {System.err.println("Problem in connection!"+e);
        }  
    }

    public static Connection getDBConnection()
    { return con;
    }      
    public static void main(String args[])
    {System.out.println("In main");
    }        
}
