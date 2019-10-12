//*******************************************************************
// Visual Studio Code was used for this pille palle. :P
//*******************************************************************
import java.lang.*;
import java.util.Scanner;

public class School_Loop {
    public static void main(String[] args) throws Exception {
        // Simple 'while' loop. (Head driven loop)
        System.out.println("Simple 'while' loop.");

        int z = 5;
        while (true) {
            System.out.print("\rSchool loop: ");
            System.out.print(z);
            Thread.sleep(1000);
            if (z == 0) break;           // Do not forget to break this loop!
            z--;            
        }

        // Basic 'for' loop. (Head driven loop)
        System.out.println("\n\nBasic 'for' loop.");

        for (int i = 5; i > -1; i--) {
            System.out.print("\rSchool loop: ");
            System.out.print(i);
            Thread.sleep(1000);
        }

        // 'for' each 'ELEMENT' in 'ARRAY'.
        System.out.println("\n\n'for' each 'ELEMENT' in 'ARRAY'.");

        int[] numberArray = new int[] { 5, 4, 3, 2, 1, 0, };
        for(int singleNumber : numberArray) {
            System.out.print("\rSchool loop: ");
            System.out.print(singleNumber);
            Thread.sleep(1000);
        }

        // 'do' WHAT 'while' CONDITION. (Foot driven loop)
        System.out.println("\n\n'do' WHAT 'while' CONDITION.");    
        
        Scanner input = new Scanner(System.in);
        String userInput;
        do {
            System.out.print("Please Enter 'exit' to continue...\nEnter: ");
            userInput = input.next();
        } while (!userInput.equals("exit"));
        input.close();
    }
}
