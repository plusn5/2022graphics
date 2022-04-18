#include <opencv/highgui.h>
int main()
{
	IplImage * img = cvLoadImage("½T¶E.png");
	cvShowImage("week09", img);
	cvWaitKey(0);

}
