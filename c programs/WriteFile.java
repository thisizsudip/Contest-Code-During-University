import java.io.File;
import java.io.FileWriter;
import java.io.IOException;

public class WriteFile{
    public static void main(String[] args){
        try{
            FileWriter MyWriter = new FileWriter("New.txt");
            MyWriter.write("This is me you know who!!!");
            MyWriter.close();
            System.out.println("Successfully Written");
        }
        catch(IOException e){
            System.out.println("An Error Occured");
        }
    }
}