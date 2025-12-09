////////////////////////////////////////////////////////////////////////////////////
//
//  File Name   :     program295.java
//  Description :     Collections  [ArrayList]
//                  
//  Input       :         
//  Output      :        
//  Author      :      Rutuja Bharat varal
//  Date        :      30/11/2025
//
////////////////////////////////////////////////////////////////////////////////////
import java.util.*;
class program298
{
    public static void main(String A[])
    {
        ArrayList <String> vobj = new ArrayList<String>();

        vobj.add("c");
        vobj.add("c++");
        vobj.add("java");
        vobj.add("python");
        vobj.add("c#");
        vobj.add("java");


        System.out.println(vobj);

        vobj.add(2,"LSP");

        System.out.println(vobj);


        System.out.println(vobj.contains("LSP"));
        System.out.println(vobj.contains("UNIX"));

        vobj.remove(6);
        System.out.println(vobj);

        Iterator iobj = vobj.iterator();

        while (iobj.hasNext())
        {
           System.out.println(iobj.next());  
        }

        vobj.clear();
    }
}