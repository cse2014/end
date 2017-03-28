import java.applet.Applet;
import java.awt.*;
import java.awt.event.*;
public class DrawOval extends Applet
{
   	public static void main(String[] args)
    	{
        	Frame drawOvalApplet = new Frame("circle");
        	drawOvalApplet.setSize(350, 250);
        	Applet DrawOval = new DrawOval();
        	drawOvalApplet.add(DrawOval);
        	drawOvalApplet.setVisible(true);
        	drawOvalApplet.addWindowListener(new WindowAdapter() {
        	public void windowClosing(WindowEvent e) {System.exit(0); }
                								});
	}
  	public void paint(Graphics g)
  	{
          	// Now we tell g to change the font
         	g.setFont(new Font("Arial",Font.BOLD,14));
        	//Syntax: drawString(String str, int xBaseOvalLeft, int yBaseOvalLeft);  
         	g.drawString("circle and ellipse", 100, 70);  
        	// draws a Oval
         	g.setColor(Color.blue);  // Now we tell g to change the color
        	//Syntax For:- drawOval(int x1, int y1, int x2, int y2);
         	g.drawOval(90, 135, 90, 180);
        	g.setColor(Color.green);  // Now we tell g to change the color
        	g.drawOval(0, 0, 100, 100);// ellipse
   	}
}


