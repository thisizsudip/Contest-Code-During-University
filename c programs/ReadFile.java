import java.io.File;
import java.io.FileNotFoundException;
import java.util.Scanner;

public class ReadFile{
    public static void main(String[] args){
        File newobj = new File("New.txt");
        try(Scanner myReader = new Scanner(newobj)){
            while(myReader.hasNextLine()){
                String line = myReader.nextLine();
                System.out.println(line);
            }
        }
        catch(FileNotFoundException e){
            System.out.println("An error occured");
        }
    }
}