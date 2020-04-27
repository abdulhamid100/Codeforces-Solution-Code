import java.util.*;
import java.lang.*;
import java.io.*;

public class JavaApplication18
{
	public static void main (String[] args) throws java.lang.Exception
	{

		Scanner sc = new Scanner(System.in);

		String sentence = sc.nextLine();
                String romove = "WUB";
                sentence = sentence.replace(romove, " ");
                sentence = sentence.trim();
                System.out.println(sentence);



	}
}
