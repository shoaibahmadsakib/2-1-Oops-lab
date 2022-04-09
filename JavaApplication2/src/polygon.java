
import java.awt.*;
import java.applet.*;

public class polygon extends Applet {

    int a1[] = {20, 60, 140, 100};
    int b1[] = {20, 80, 80, 20};
    int n1 = 4;

    /**
     *
     * @param g
     */
    @Override
    public void paint(Graphics g) {
        g.drawPolygon(a1, b1, n1);

    }
}
