using System;
using System.Threading;

namespace school_loop_c_sharp {
    class Program {
        static void Main(string[] args) {
            int z = 5;
            while (true) {
                Console.Write("\rScool loop: ");
                Console.Write(z);
                Thread.Sleep(1000);
                if (z == 0) break;
                z--;
            }
        }
    }
}
