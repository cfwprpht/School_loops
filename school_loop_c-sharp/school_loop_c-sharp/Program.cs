using System;
using System.Threading;

namespace school_loop_c_sharp {
    class Program {
        static void Main(string[] args) {
            // Simple 'while' loop. (Head driven loop)
            Console.WriteLine("Simple 'while' loop.");

            int z = 5;
            while (true) {
                Console.Write("\rScool loop: ");
                Console.Write(z);
                Thread.Sleep(1000);
                if (z == 0) break;
                z--;
            }

            // Basic 'for' loop. (Head driven loop)
            Console.WriteLine("\n\nSimple 'while' loop.");

            for (int i = 5; i > -1; i--) {
                Console.Write("\rScool loop: ");
                Console.Write(i);
                Thread.Sleep(1000);
            }

            // 'for' each 'ELEMENT' in 'ARRAY'.
            Console.WriteLine("\n\n'for' each 'ELEMENT' in 'ARRAY'.");

            int[] numberArray = new int[] { 5, 4, 3, 2, 1, 0, };
            foreach (int singleNumber in numberArray) {
                Console.Write("\rScool loop: ");
                Console.Write(singleNumber);
                Thread.Sleep(1000);
            }

            // 'do' WHAT 'while' CONDITION. (Foot driven loop)
            Console.WriteLine("\n\n'do' WHAT 'while' CONDITION.");

            string userInput;
            do {
                Console.Write("Please Enter 'exit' to continue...\nEnter: ");
                userInput = Console.ReadLine();
            } while (userInput != "exit");            
        }
    }
}
