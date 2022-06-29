

#include<GL/glut.h>
#include<math.h>
#include<stdio.h>

int up=0,down=0;
int f=1;
int aa=780,bb=380;
int cc=600,dd=100,nn=100,ni=800,da=10;
int ee=0,ff=0,m=700,n=200;
int gg=700,hh=250,s=200,v=900,ss=0;
int xxx=0;
int spotdisp=1;


void renderBitmapString(float x,float y,const char *string)
{
	const char *c;
	glRasterPos2f(x,y);
    	//glColor3f(1,0,0);
	for (c=string;*c !='\0';c++)
	glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,*c) ;

}
void BitmapString(float x,float y,const char *string)
{
	const char *c;
	glRasterPos2f(x,y);
	for (c=string;*c !='\0';c++)
	glutBitmapCharacter(GLUT_BITMAP_HELVETICA_10,*c) ;

}
void myinit()
{
    	glClearColor(0.71875,0.9140625,0.97265625,1.0);
    	glColor3f(0.0,0.0,0.0);
     	glMatrixMode(GL_PROJECTION);
    	gluOrtho2D(0,1000,0,1000);
    	glMatrixMode(GL_MODELVIEW);
}
void SpecialKey(int key,int x,int y){
	switch(key){

	case GLUT_KEY_UP:
	up=1;

	break;

	case GLUT_KEY_DOWN:
	down=1;
	break;
}
}



void bean(){
	glColor3f(0,0.7,0.5);//white shirt
	glBegin(GL_POLYGON);
	glVertex2f(20,90);
	//glVertex2f(40,100);
	//glVertex2f(40,150);
	glVertex2f(60,150);
	//glVertex2f(60,100);
	glVertex2f(80,90);
	glEnd();
	}
void create_menu(int choice){
        switch(choice){
            case 1:
                f=1;
                break;
            case 2:
                f=2;
                break;
            case 3:
                f=3;
                break;
            case 4:
                f=5;
                break;
	    case 5:
		f=6;
	
        }
       

}

//method to handle keyboard inputs keyboard-
void keyboard( unsigned char key, int x, int y )
{
  //handle --> press any key to continue
  	if(key=='b'||key=='B'){
     	f=1;
  	}
  	if(key=='d'||key=='D'){
  	f=2;
  	}
	if(key=='e'||key=='E'){
	f=6;
	}
	if(key=='i'||key=='I'){
	f=5;
	}


}


void scene2(){
	
	
	glColor3f(0,0,0);//TEEEEEEEEEEESTTTTTT
	glLineWidth(5);
	glBegin(GL_POLYGON);
	//glVertex2i(0,900);
//	glVertex2i(300,900);
	//glVertex2i(800,20);
	//glVertex2i(700,20);
	//glVertex2i(200,800);
	glVertex2i(0,800);
	glVertex2i(0,900);
	
	
	glColor3f(0.5,0.5,0);
	glEnd();
	glBegin(GL_POLYGON);
	glVertex2i(0,0);
	glVertex2i(700,0);
	glVertex2i(800,20);
	glVertex2i(300,800);
	glVertex2i(0,800);
	
	
	glEnd();
	

}
	
void next()
{	scene2();
	glColor3f(0.16, 0.16, 0.16);//background
	glBegin(GL_POLYGON);
	glVertex2i(0,0);
	glVertex2i(1000,0);
	glVertex2i(1000,1000);
	glVertex2i(0,1000);
	glEnd();
	glColor3f(1,1,1);
	 //DrawCircle(150,900.0,30.0,100);
	scene2();
	glColor3f(0,1,1);//background
	glBegin(GL_POLYGON);
	glVertex2i(0,0);
	glVertex2i(1000,0);
	glVertex2i(1000,75);
	glVertex2i(0,75);
	glEnd();	
	glPushMatrix();
	glTranslatef(s,v,0);

if(up==1 && s<500)
{
	s++;
if(v>600)v=v-.5;

	bean();
glPopMatrix();
}
	
glFlush();
	f==3; 
//***********************************************************FOR BOTTOM TO TOP******************
glPushMatrix();
glTranslatef(m,n,0);
	
	if(up==1 && n<500)
{
	n++;
if(m>350)m--;

	bean();
	glPopMatrix();
}
//if(s>=490)
//{	
//	ss=1;
//}


	glFlush();	
}
    	
void mydisplay(){
    	glClearColor(0.5,0,1,1.0);
    	
    	glColor3f(0.0,0.0,0.0);
     	glMatrixMode(GL_PROJECTION);
     	glLoadIdentity();
    	gluOrtho2D(0,1000,0,1000);
    	glMatrixMode(GL_MODELVIEW);
    	glLoadIdentity();
    	glClear(GL_COLOR_BUFFER_BIT);
    	    	if(f==1){
	//glLoadIdentity();
    	glColor3f(1,1,1);
    	renderBitmapString(380,850,"SDM INSTITUTE OF TECHNOLOGY");
   	//renderBitmapString(470,800,"BY");
    	glColor3f(1,1,1);
    	renderBitmapString(750,620,"KUMAR SAMARTHA");
    	renderBitmapString(750,590,"4SU19CS043");
    	glColor3f(1,1,1);
    	renderBitmapString(120,620,"MANOJ GAONKAR");
    	renderBitmapString(120,590,"4SU19CS052");
    	glColor3f(1,1,1);
    	renderBitmapString(750,540,"MALLIKA L");
    	renderBitmapString(750,500,"4SU19CS051");
    	glColor3f(1,1,1);
    	renderBitmapString(120,540,"LAXMI MAGADUM");
    	renderBitmapString(120,500,"4SU19CS045");
    	glColor3f(1,1,1);
    	renderBitmapString(500,450,"GUIDE");
    	renderBitmapString(500,410,"Mr. PRADEEP K RAO");
    	glColor3f(1,1,1);
    	renderBitmapString(300,250,"DEADLOCK REPRESENTAION");
    	BitmapString(700,50,"RIGHT CLICK ANYWHERE TO CONTINUE");
    	glutPostRedisplay();
   	 }
   	 if(f==2)
	{
	glColor3f(0.16, 0.16, 0.16);//background
	glBegin(GL_POLYGON);
	glVertex2i(0,0);
	glVertex2i(1000,0);
	glVertex2i(1000,1000);
	glVertex2i(0,1000);
	glEnd();
	glColor3f(1,1,1);
	// DrawCircle(150,900.0,30.0,100);
	scene2();
	glColor3f(0,1,1);//background
	glBegin(GL_POLYGON);
	glVertex2i(0,0);
	glVertex2i(1000,0);
	glVertex2i(1000,75);
	glVertex2i(0,75);
	glEnd();
	glColor3f(1,0.5,0);
    	
	
	renderBitmapString(850,100,"Press up arrow");
	renderBitmapString(0,37,"DEADLOCK EXAMPLE OF TWO PEOPLE SHARING SAME LADDER");
	if(spotdisp==1)
	
	//************************************************************************************8
	glPushMatrix();
	glTranslatef(cc+300,nn,0);
	if(cc>400)
	cc--;	
	glScalef(0.9,0.9,0);
	bean();
	glPopMatrix();

	glPushMatrix();
	glTranslatef(da+50,ni,0);
	if(da<200)
	da++;	
	glScalef(0.9,0.9,0);
	bean();
	glPopMatrix();// ********************************************************************* */


	if(up==1)
	next();
	
	glFlush();
	}
   	 
   	 	if(f==3)
	{
	
	glColor3f(1,1,0);
	renderBitmapString(300,350,"Press B return to home page");
	renderBitmapString(300,450,"Press I to Introduction");
	renderBitmapString(300,550,"Press D to simulation");
	renderBitmapString(300,650,"Press E to EXIT");
	//renderBitmapString(300,250,"REQUEST EDGE");
	}
   	 
   	 
   	 if(f==5)
	{
	//scene4();
	glColor3f(0,1,1);//background
	glBegin(GL_POLYGON);
	glVertex2i(0,0);
	glVertex2i(1000,0);
	glVertex2i(1000,75);
	glVertex2i(0,75);
	glEnd();
	glColor3f(1,1,1);
	renderBitmapString(100,700,"DEADLOCK");
	renderBitmapString(100,600,"A deadlock is a situation in which two computer programs sharing the same resources.");
	renderBitmapString(300,500,"MUTUAL EXCLUSION");
	renderBitmapString(300,450,"HOLD AND WAIT");
	renderBitmapString(300,400,"NO PREEMPTION");
	renderBitmapString(300,350,"CIRCULAR WAIT");
	}
   	 if(f==6)
	{
	glColor3f(1,1,1);//background
	glBegin(GL_POLYGON);
	
	glEnd();
	glColor3f(1,1,1);
	
	renderBitmapString(430,500,"THANK YOU");
	
	}
	
	
	
   	 glutSwapBuffers();
	glutPostRedisplay();
	glFlush();
    	}
    	

int main(int argc,char**argv)
{
	glutInit(&argc,argv);
	glutInitDisplayMode(GLUT_DOUBLE|GLUT_RGB);
	glutInitWindowSize(1000,1000);
	glutInitWindowPosition(0,0);
	
	glutCreateWindow("DEADLOCK IN OS");
	myinit();

	glutCreateMenu(create_menu);
	glutAddMenuEntry("INTRODUCTION",1);
	glutAddMenuEntry("ABOUT",4);
	glutAddMenuEntry("HELP KEY",3);
	//glutAddMenuEntry("*****EXTRA****",4);
	glutAddMenuEntry("DEADLOCK",2);
	glutAddMenuEntry("EXIT",5);

	glutAttachMenu(GLUT_RIGHT_BUTTON);
	glutDisplayFunc(mydisplay);
	glutSpecialFunc(SpecialKey);
	glutKeyboardFunc(keyboard);
	
	glutMainLoop();
	return 0;
}














