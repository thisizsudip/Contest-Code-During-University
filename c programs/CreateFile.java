import java.io.File;
import java.io.IOException;

public class CreateFile{
    public static void main(String[] args){
        try{
            File obj = new File("New.txt");
            if(obj.createNewFile()){
                System.out.println("File Created");
            }
            else{
                System.out.println("File already exists");
                System.out.println("File Path: " + obj.getAbsolutePath());
            }
        }
        catch(IOException e){
            System.out.println("An error occured");
            e.printStackTrace();
        } 
    }
}