import java.io.File;
import java.io.FileNotFoundException;
import java.util.HashMap;
import java.util.Map;
import java.util.Scanner;

public class Dictonary {
    public static void main(String[] args) {
        String filePath = "dictionary.txt";
        Map<String, String> synonymMap = new HashMap<>();
        try (Scanner fileScanner = new Scanner(new File(filePath))) {
            while (fileScanner.hasNextLine()) {
                String line = fileScanner.nextLine().trim();
                if (!line.isEmpty()) {
                    String[] parts = line.split("\\s+", 2); 
                    if (parts.length == 2) {
                        synonymMap.put(parts[0].toLowerCase(), parts[1]);
                    }
                }
            }
        } catch (FileNotFoundException e) {
            System.out.println("File not found: " + filePath);
            return;
        }
        Scanner userInput = new Scanner(System.in);
        System.out.print("Enter a word to find its synonym: ");
        String word = userInput.nextLine().trim().toLowerCase();
        String synonym = synonymMap.get(word);
        if (synonym != null) {
            System.out.println("Synonym for '" + word + "' is: " + synonym);
        } else {
            System.out.println("No synonym found for '" + word + "'.");
        }
        userInput.close();
    }
}