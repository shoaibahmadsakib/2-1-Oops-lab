package javavarsity;

import java.io.*;

public class CopyCharacter {

    public static void main(String[] args)
            throws IOException {

        try (
                 FileReader file = new FileReader("C:\\Users\\shoai\\OneDrive\\Documents\\2-1 lab\\Java Applet\\JavaVarsity\\character.txt")) {
            FileWriter fileWrite = new FileWriter("C:\\Users\\shoai\\OneDrive\\Documents\\2-1 lab\\Java Applet\\JavaVarsity\\characterOut.txt");
            int c;
            while ((c = file.read()) != -1) {
                // System.out.print((char)c+"\t");
                fileWrite.write((char) c + "\n");
            }
            System.out.println("success");
            fileWrite.close();
        }

    }
}
