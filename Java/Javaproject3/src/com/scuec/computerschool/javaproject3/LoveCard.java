package com.scuec.computerschool.javaproject3;

import java.awt.Color;
import java.awt.Font;
import java.awt.Image;
import java.awt.Toolkit;
import java.awt.image.BufferedImage;
import java.io.File;
import java.io.IOException;
import java.text.SimpleDateFormat;
import java.util.Calendar;
import java.util.Date;
import java.util.Timer;
import java.util.TimerTask;

import javax.imageio.ImageIO;
import javax.swing.ImageIcon;
import javax.swing.JFrame;
import javax.swing.JLabel;
import javax.swing.JPanel;
import javax.swing.JTextArea;

public class LoveCard extends JFrame {
		JFrame jf=new JFrame("LoveCard");    //创建一个JFrame对象
		JPanel jp=new JPanel();    //创建一个JPanel对象
		JTextArea jt=new JTextArea();
		private JLabel timeLabel;
		private JLabel timedisplay;
		private String DEFAULT_TIME_FORMAT = "HH:mm:ss";//设置时间格式
		private String time;
		//动态显示时间
		private void configTimeArea() {
			Timer tmr = new Timer();
			tmr.scheduleAtFixedRate(new JLabelTimerTask(),new Date(), 1000);
		}

		protected class JLabelTimerTask extends TimerTask {
				SimpleDateFormat dateFormatter = new SimpleDateFormat(DEFAULT_TIME_FORMAT);
				@Override
				public void run() {
					time = dateFormatter.format(Calendar.getInstance().getTime());
					timedisplay.setText(time);
				}
		}
		//图片转字符画
	    public void drawPic() {
	        String picPath = "D:\\1583853509270.jpg";//建议换一张分辨率小的
	        BufferedImage img;
	        //String base = "-'.^,:;+=)?!ITLO8EM#%&@";
	        String base = "@&%#MX8OLTI!?)=+;:,^.'-";//从复杂到简单
	        try {
	            img = ImageIO.read(new File(picPath));
	            int width = img.getWidth();
	            int height = img.getHeight();
	            for (int y = 0; y < height; y += 4) {
	                for (int x = 0; x < width; x += 4) {
	                    int pixel = img.getRGB(x, y);
	                    int r = (pixel & 0xff0000) >> 16, g = (pixel & 0xff00) >> 8, b = pixel & 0xff;
	                    double gray = 0.299f * r + 0.578f * g + 0.114f * b;
	                    int index = (int) Math.floor(gray * base.length() / 256);
	                    char symbol = base.charAt(index);
	                    jt.append(symbol+" ");
	                    //System.out.print(symbol+" ");
	                }
	                jt.append("\n");
	                //System.out.println();
	            }
	        } catch (IOException e) {
	            e.printStackTrace();
	        }

	    }
		//窗口显示
		public void showFrame() {
			//显示Image
			JLabel jl=new JLabel(); //创建一个标签
			ImageIcon image = new ImageIcon("D:\\#Study resources\\#Stream\\1583853509270.jpg");
			image.setImage(image.getImage().getScaledInstance(image.getIconHeight()/2, image.getIconWidth()/2,Image.SCALE_SMOOTH ));

			//窗口设置
			Toolkit toolkit = Toolkit.getDefaultToolkit();//添加工具包
			jf.setSize(image.getIconHeight(), image.getIconWidth());
			int x = (int)(toolkit.getScreenSize().getWidth()-jf.getWidth())/2;//屏幕居中显示
			int y = (int)(toolkit.getScreenSize().getHeight()-jf.getHeight())/2;
			jf.setLocation(x, y);
			jp.setBackground(Color.white);    //设置背景色

			//显示时间
			timeLabel = new JLabel("CurrentTime: ");
			timedisplay = new JLabel();
			configTimeArea();

			//将组件添加到窗口
			jt.setSize(image.getIconHeight(), image.getIconWidth());
			jt.setFont(new Font("宋体",20,12));

			jf.add(jp);
			jp.add(timeLabel);		//添加时间标签
			jp.add(timedisplay);	//添加时间

			//jl.setIcon(image);		//添加图片到标签
			//jp.add(jl);    			//将标签添加到面板
			
			jp.add(jt);				//将字符图片添加到面板
			drawPic();
			
			jf.setVisible(true);
		}
}
