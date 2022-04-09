import java.applet.Applet;
import java.awt.Color;
import java.awt.Graphics;

public class PolygonNew extends Applet {
    int x [] = {10, 30, 40, 50, 110, 140};
    int y[] = {140, 110, 50, 40, 30, 10};
    @Override
    public void paint(Graphics g) {
        g.setColor(Color.blue);
        g.fillPolygon(x, y, 6);
    }
}