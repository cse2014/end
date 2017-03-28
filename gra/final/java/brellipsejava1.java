import java.awt.*;
import java.applet.*;
import java.awt.event.*;
/*<applet code = brellipsejava1 height = 400 width = 400></applet>*/

public class brellipsejava1 extends Applet implements ActionListener 
{

	float x,y,xc,yc,rx,ry,p1,p2;
	Label l1 = new Label("semi major axis = ");
	Label l2 = new Label("semi minor axis = ");
	Label l3 = new Label("x = ");
	Label l4 = new Label("y = ");
	
	TextField t1 = new TextField(3);
	TextField t2 = new TextField(3);
	TextField t3 = new TextField(3);
	TextField t4 = new TextField(3);
	Button bw = new Button("DRAW");

	public void init()
	{
		add(l1);
		add(t1);
		add(l2);
		add(t2);
		add(l3);
		add(t3);
		add(l4);
		add(t4);
		add(bw);
		bw.addActionListener(this);
	}
	public void  paint(Graphics g)
	{
		rx=Integer.parseInt(t1.getText());
		ry=Integer.parseInt(t2.getText());
		xc=Integer.parseInt(t3.getText());
		yc=Integer.parseInt(t4.getText());
		x=0;
		y=ry;
		p1=(ry*ry)-(rx*rx*y)+(rx*rx/4);
		do
		{
			g.drawString(".",Math.round(xc-x),Math.round(yc+y));
			g.drawString(".",Math.round(xc-x),Math.round(yc-y));
			g.drawString(".",Math.round(xc+x),Math.round(yc+y));
			g.drawString(".",Math.round(xc+x),Math.round(yc-y));
			x++;		
			if(p1<0)
				p1=p1+(2*ry*ry*x)+(ry*ry);
			else
			{
				y-=1;
				p1=p1+(2*ry*ry*x)-(2*rx*rx*y)+(ry*ry);
			}
		}
		while((2*ry*ry*x)<(2*rx*rx*y));
		p2= (ry*ry*(x+1/2)*(x+1/2))+(rx*rx*(y-1)*(y-1))-(ry*ry*rx*rx);
		while(y>0)
		{
			g.drawString(".",Math.round(xc-x),Math.round(yc+y));
			g.drawString(".",Math.round(xc-x),Math.round(yc-y));
			g.drawString(".",Math.round(xc+x),Math.round(yc+y));
			g.drawString(".",Math.round(xc+x),Math.round(yc-y));
			y--;
			if(p2>0)
				p2 = p2-(2*rx*rx*y)+(ry*ry);
			else
			{
				x+=1;
				p2 = p2=(2*ry*ry*x)+(2*rx*rx*y)+(ry*ry);
			}
		}

	}
		public void actionPerformed(ActionEvent aw)
		{ 
			repaint();
		}
}



