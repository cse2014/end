import java.applet.*;
import java.awt.*;
import javax.swing.*;
/*<applet code="brellipsejava" width ="300" height ="280"></applet>*/
public class brellipsejava extends Applet
{
	Graphics H;
	public void paint(Graphics g)
	{
		H = g;
		String Line = JOptionPane.showInputDialog("Input xcenter,ycenter,rx,ry","20,20,10,8");
		String[] input = Line.split(",");
		int xcenter = Integer.parseInt(input[0]);
		int ycenter = Integer.parseInt(input[1]);
		int rx = Integer.parseInt(input[2]);
		int ry = Integer.parseInt(input[3]);
		ellipsemidpoint(xcenter,ycenter,rx,ry);
		
	}
	public void ellipsemidpoint(int xcenter,int ycenter,int rx,int ry)
	{
		int rx2 = rx * rx;
		int ry2 = ry * ry;
		int two_rx2 = 2*rx2;
		int two_ry2 = 2*ry2;
		int x = 0;
		int y = ry;
		int p;
		int px = 0;
		int py = two_rx2*y;
		ellipseplotpoint(xcenter,ycenter,x,y);
		//Region1
		p = (int) (ry2-(rx2*ry)+(0.25+rx2));
		while(px<py)
		{
			x++;
			px += two_ry2;
			if(p<0)
				p += ry2+px;
			else
			{
				y--;
				py -=two_rx2;
				p += ry2+px-py;
			}
			ellipseplotpoint(xcenter,ycenter,x,y);
		}
		//Region2
		p = (int) (ry2 *(x+0.5)*(x+0.5)+rx2*(y-1)*(y-1)-rx2*ry2);
		while(y<0)
		{
			y--;
			py -= two_rx2;
			if(p<0)
				p += rx2-py;
			else
			{
				x++;
				px +=two_ry2;
				p += rx2+px-py;
			}
			ellipseplotpoint(xcenter,ycenter,x,y);
		}
	}
	public void ellipseplotpoint(int xcenter,int ycenter,int x,int y)
	{
		setPixel(xcenter+x,ycenter+y);
		setPixel(xcenter-x,ycenter+y);
		setPixel(xcenter+x,ycenter-y);
		setPixel(xcenter-x,ycenter-y);
	}
	public void setPixel(int x,int y)
	{
		H.fillOval(x,y,1,1);
	}
}
