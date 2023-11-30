import java.sql.*;

class Database
{
    public static void main(String arg[])  throws Exception
    {
        String URL = "jdbc:mysql;//localhost:3306/ppa49";
        String DatabaseName = "MY_DB";
        String Username = "root";
        String Password = "Mysql@1234";
        String Query = "select * from student";

        Connection cobj = DriverManager.getConnection(URL,Username,Password);

        Statement sobj = cobj.createStatement();

        ResultSet robj = sobj.executeQuery(Query);

        while(robj.next())
        {
            System.out.println("RID : "+robj.getInt("rno"));
            System.out.println("Name : "+robj.getString("name"));
            System.out.println("City : "+robj.getString("city"));
            System.out.println("Marks : "+robj.getInt("marks"));
        } 
    }
}