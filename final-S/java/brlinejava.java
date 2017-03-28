import java.io.*;
import java.awt.*;
import java.applet.*;
import java.util.*;
/*<applet code = "brlinejava" width = 280 height = 300 > </applet>*/
public class brlinejava extends Applet
{
	public void paint(Graphics g)
	{
		int x,y,k;
		double dx,dy,p;
		int x1 = 200,y1=500,x2 = 600,y2=500;
		dx = Math.abs(x2-x1);
		dy = Math.abs(y2-y1);
		x = x1;
		y = y1;
		p = 2*dy-dx;
		g.fillOval(x,y,5,5);
		for(k=0;k<dx;k++)
		{
			if(p<0)
			{
				g.fillOval(x++,y,5,5);
				p = p + 2*dy;	
			}
			else
			{
				g.fillOval(x++,y++,5,5);
				p = p + (2*(dy-dx));
			}
		}
	 
	}
}
		
