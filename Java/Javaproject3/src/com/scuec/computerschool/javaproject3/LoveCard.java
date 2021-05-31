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
		JFrame jf=new JFrame("LoveCard");    //����һ��JFrame����
		JPanel jp=new JPanel();    //����һ��JPanel����
		JTextArea jt=new JTextArea();
		private JLabel timeLabel;
		private JLabel timedisplay;
		private String DEFAULT_TIME_FORMAT = "HH:mm:ss";//����ʱ���ʽ
		private String time;
		//��̬��ʾʱ��
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
		//ͼƬת�ַ���
	    public void drawPic() {
	        String picPath = "D:\\1583853509270.jpg";//���黻һ�ŷֱ���С��
	        BufferedImage img;
	        //String base = "-'.^,:;+=)?!ITLO8EM#%&@";
	        String base = "@&%#MX8OLTI!?)=+;:,^.'-";//�Ӹ��ӵ���
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
		//������ʾ
		public void showFrame() {
			//��ʾImage
			JLabel jl=new JLabel(); //����һ����ǩ
			ImageIcon image = new ImageIcon("D:\\#Study resources\\#Stream\\1583853509270.jpg");
			image.setImage(image.getImage().getScaledInstance(image.getIconHeight()/2, image.getIconWidth()/2,Image.SCALE_SMOOTH ));

			//��������
			Toolkit toolkit = Toolkit.getDefaultToolkit();//��ӹ��߰�
			jf.setSize(image.getIconHeight(), image.getIconWidth());
			int x = (int)(toolkit.getScreenSize().getWidth()-jf.getWidth())/2;//��Ļ������ʾ
			int y = (int)(toolkit.getScreenSize().getHeight()-jf.getHeight())/2;
			jf.setLocation(x, y);
			jp.setBackground(Color.white);    //���ñ���ɫ

			//��ʾʱ��
			timeLabel = new JLabel("CurrentTime: ");
			timedisplay = new JLabel();
			configTimeArea();

			//�������ӵ�����
			jt.setSize(image.getIconHeight(), image.getIconWidth());
			jt.setFont(new Font("����",20,12));

			jf.add(jp);
			jp.add(timeLabel);		//���ʱ���ǩ
			jp.add(timedisplay);	//���ʱ��

			//jl.setIcon(image);		//���ͼƬ����ǩ
			//jp.add(jl);    			//����ǩ��ӵ����
			
			jp.add(jt);				//���ַ�ͼƬ��ӵ����
			drawPic();
			
			jf.setVisible(true);
		}
}
