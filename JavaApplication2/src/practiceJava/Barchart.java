
package practiceJava;
import java.applet.*;
import java.awt.*;

public class Barchart extends Applet{
    String subjects[] = {"Java","C++","C","Python","C#"};
    int mark[] = {100,99,90,80,70};
    @Override
    public void paint(Graphics g){
        for(int i=0;i<5;i++){
            g.setColor(Color.black);
            g.drawString(subjects[i], 10, i*50+50);
            g.setColor(Color.red);
            g.fillRect(50, i*50+30, mark[i], 30);
        }
    }
}