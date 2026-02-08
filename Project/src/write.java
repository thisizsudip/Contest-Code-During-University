
import java.io.*;
import java.util.*;

public class write {
    public static void main(String[] args){
        try (FileWriter myWriter = new FileWriter("filename.txt",true)) {
      myWriter.write("\nFiles in Java might be tricky, but it is fun enough!");
      System.out.println("Successfully wrote to the file.");
    } catch (IOException e) {
      System.out.println("An error occurred.");
      e.printStackTrace();
        }
    }
}
