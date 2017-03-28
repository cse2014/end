import java.io.*;
import java.util.*;
import java.math.*;
import java.applet.*;
import java.awt.*;
public class Midcircl extends Applet
{
	public static void main(String[] args)
	{  
		Frame MidcirclApplet = new Frame("line");
       		MidcirclApplet.setSize(350, 250);
        	Applet Midcircl = new Midcircl();
        	MidcirclApplet.add(Midcircl);
        	MidcirclApplet.setVisible(true);
       }
	public void paint(Graphics g)
	{
		int r=150;
		int d=(5/4)*r;
		int x=0;
		int y=r;
		do
		{
			g.setColor(Color.red);
			g.drawLine(y+200,x+200,y+200,x+200 );
			g.drawLine(x+200,y+200,x+200,y+200);
			g.drawLine(x+200,-y+200,x+200,-y+200);
			g.drawLine(y+200,-x+200,y+200,-x+200 );
			g.drawLine(-y+200,-x+200,-y+200,-x+200 );
			g.drawLine(-x+200,-y+200,-x+200,-y+200 );
			g.drawLine(-x+200,y+200,-x+200,y+200 );
			g.drawLine(-y+200,x+200,-y+200,x+200 );
			if(d<0)
			{
				d=d+2*x+3;
			}
			else
			{
				d=d+2*(x-y)+5;                         
				y=y-1;              
			}
			x=x+1;
		}while (x<y);
	}
}

