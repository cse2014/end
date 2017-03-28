import java.io.*;
import java.awt.*;
import java.util.*;
import java.math.*;
import java.applet.*;
/*<applet code = "brcirclejava" width =300 height = 280></applet>*/
public class brcirclejava extends Applet
{
	public void paint(Graphics g)		
	{
		int r = 150;
		int d = (5/4)*r;
		int x = 0;
		int y =r;
		do
		{
			g.setColor(Color.blue);
			g.drawLine(y+200,x+200,y+200,x+200);
			g.drawLine(x+200,y+200,x+200,y+200);
			g.drawLine(x+200,-y+200,x+200,-y+200);
			g.drawLine(y+200,-x+200,y+200,-x+200);
			g.drawLine(-y+200,-x+200,-y+200,-x+200);
			g.drawLine(-x+200,-y+200,-x+200,-y+200);
			g.drawLine(-x+200,y+200,-x+200,y+200);
			g.drawLine(-y+200,x+200,-y+200,x+200);
			if(d<0)
				d =d+2*x+3;
			else
			{
				d = d+2*(x-y)+5;
				y = y - 1;
			}
			x = x +1;
		}
		while(x<y);
	}
}		
		
