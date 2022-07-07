#include<GL/glut.h>
#include<math.h>
#include<stdio.h>

int up=0,down=0;
int f=1;
int cc=600,nn=100,ni=800,da=10,ss=200;
int m=700,n=220;
int s=300,v=800;
int spotdisp=1;



void renderBitmapString(float x,float y,const char *string)
{
	glRasterPos2f(x,y);   	
	for (int i=0;string[i]!='\0';i++)
		glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,string[i]) ;

}
void BitmapString(float x,float y,const char *string)
{
	const char *c;
	glRasterPos2f(x,y);
	for (c=string;*c !='\0';c++)
	glutBitmapCharacter(GLUT_BITMAP_HELVETICA_10,*c) ;

}

void renderBitmapString18(float x,float y,const char *string)
{
	glRasterPos2f(x,y);   	
	glLineWidth(5.0);
	for (int i=0;string[i]!='\0';i++)
		glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18,string[i]) ;
		//GLUT_BITMAP_9_BY_15

}


// * * line function * * for line in flow chart
void line(int a,int b,int c,int d){
			glColor3f(1,1,1);
    	glBegin(GL_LINES);
    	glVertex2f(a,b);
    	glVertex2f(c,d);
    	glEnd();
			}	
			
			
// * * triangle function * * 
void  arrow(int ta,int tb,int d)
{
	
		glBegin(GL_POLYGON);
		glColor3ub(254,228,64);
		if(d==0)
		{
			glVertex2f(ta,tb);
			glVertex2f(ta-5,tb+7);
			glVertex2f(ta+5,tb+7);
		}
		else if(d==1)
		{
			glVertex2f(ta,tb);
			glVertex2f(ta+5,tb+7);
			glVertex2f(ta+5,tb-7);
		}
		else if(d==2)
		{
			glVertex2f(ta,tb);
			glVertex2f(ta-5,tb+7);
			glVertex2f(ta-5,tb-7);
		}
		else if(d==3)
		{
			glVertex2f(ta,tb);
			glVertex2f(ta-7,tb+5);
			glVertex2f(ta-7,tb+5);
		}
		glEnd();
}
			
			
void myinit()
{
    	glClearColor(0,0,0,1.0);
     	glMatrixMode(GL_PROJECTION);
    	gluOrtho2D(0,1000,0,1000);
    	glMatrixMode(GL_MODELVIEW);
}

void flowrect(int x,int y,int xs,int ys){
		glBegin(GL_QUADS);
    	glColor3ub(45,20,44);
   	 glVertex2f(x,y);
   	 glVertex2f(x+xs,y);
   	 glVertex2f(x+xs,y-ys);
   	 glVertex2f(x,y-ys);
   	 glEnd();
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



	void yellow()
	{
	
	
	glColor3f(1,1,1);//white shirt
	glBegin(GL_POLYGON);
	glVertex2f(20,90);
	glVertex2f(40,100);
	glVertex2f(40,150);
	glVertex2f(60,150);
	glVertex2f(60,100);
	glVertex2f(80,90);
	glEnd();


	glColor3f(1,1,0);//coat left
	glBegin(GL_POLYGON);
	glVertex2f(20,90);
	glVertex2f(40,100);
	glVertex2f(40,150);
	glVertex2f(20,143);
	glEnd();

	glBegin(GL_POLYGON);//left sleve
	glVertex2f(10,100);
	glVertex2f(20,100);
	glVertex2f(20,143);
	glVertex2f(10,140);
	glEnd();

	glColor3f(0.92, 0.75, 0.53);
	glBegin(GL_POLYGON);//left hand
	glVertex2f(10,100);
	glVertex2f(20,100);
	glVertex2f(20,90);
	glVertex2f(10,90);
	glEnd();

	glColor3f(1,1,0);
	glBegin(GL_POLYGON);//right sleve
	glVertex2f(90,100);
	glVertex2f(80,100);
	glVertex2f(80,143);
	glVertex2f(90,140);
	glEnd();

	glColor3f(0.92, 0.75, 0.53);// right hand
	glBegin(GL_POLYGON);
	glVertex2f(90,100);
	glVertex2f(80,100);
	glVertex2f(80,90);
	glVertex2f(90,90);
	glEnd();

	

	glColor3f(0,0,0);//belt
	glBegin(GL_POLYGON);
	glVertex2f(20,80);
	glVertex2f(20,90);
	glVertex2f(80,90);
	glVertex2f(80,80);
	glEnd();

	

	glColor3f(0,0,0);//pant
	glBegin(GL_POLYGON);
	glVertex2f(20,0);
	glVertex2f(20,80);
	glVertex2f(50,80);
	glVertex2f(40,0);
	glEnd();

	glColor3f(0,0,0);//pant
	glBegin(GL_POLYGON);
	glVertex2f(80,0);
	glVertex2f(80,80);
	glVertex2f(50,80);
	glVertex2f(60,0);
	glEnd();



	glColor3f(0.92, 0.75, 0.53);//face
	glBegin(GL_POLYGON);
	glVertex2f(30,160);
	glVertex2f(40,150);
	glVertex2f(60,150);
	glVertex2f(70,160);

	glVertex2f(70,200);
	glVertex2f(30,200);

	glEnd();

	glColor3f(0.41, 0.24, 0.13);//hair
	glBegin(GL_POLYGON);
	glVertex2f(30,200);
	glVertex2f(70,200);
	glVertex2f(70,230);
	glVertex2f(30,230);
	//glVertex2f(30,245);
	glEnd();
	}
	void red(){
	
	
	
	glColor3f(1,1,1);//white shirt
	glBegin(GL_POLYGON);
	glVertex2f(20,90);
	glVertex2f(40,100);
	glVertex2f(40,150);
	glVertex2f(60,150);
	glVertex2f(60,100);
	glVertex2f(80,90);
	glEnd();


	glColor3f(1,0,0);//coat left
	glBegin(GL_POLYGON);
	glVertex2f(20,90);
	glVertex2f(40,100);
	glVertex2f(40,150);
	glVertex2f(20,143);
	glEnd();

	glBegin(GL_POLYGON);//left sleve
	glVertex2f(10,100);
	glVertex2f(20,100);
	glVertex2f(20,143);
	glVertex2f(10,140);
	glEnd();

	glColor3f(0.92, 0.75, 0.53);
	glBegin(GL_POLYGON);//left hand
	glVertex2f(10,100);
	glVertex2f(20,100);
	glVertex2f(20,90);
	glVertex2f(10,90);
	glEnd();

	glColor3f(1,0,0);
	glBegin(GL_POLYGON);//right sleve
	glVertex2f(90,100);
	glVertex2f(80,100);
	glVertex2f(80,143);
	glVertex2f(90,140);
	glEnd();

	glColor3f(0.92, 0.75, 0.53);// right hand
	glBegin(GL_POLYGON);
	glVertex2f(90,100);
	glVertex2f(80,100);
	glVertex2f(80,90);
	glVertex2f(90,90);
	glEnd();

	

	glColor3f(0,0,0);//belt
	glBegin(GL_POLYGON);
	glVertex2f(20,80);
	glVertex2f(20,90);
	glVertex2f(80,90);
	glVertex2f(80,80);
	glEnd();

	

	glColor3f(0,0,0);//pant
	glBegin(GL_POLYGON);
	glVertex2f(20,0);
	glVertex2f(20,80);
	glVertex2f(50,80);
	glVertex2f(40,0);
	glEnd();

	glColor3f(0,0,0);//pant
	glBegin(GL_POLYGON);
	glVertex2f(80,0);
	glVertex2f(80,80);
	glVertex2f(50,80);
	glVertex2f(60,0);
	glEnd();



	glColor3f(0.92, 0.75, 0.53);//face
	glBegin(GL_POLYGON);
	glVertex2f(30,160);
	glVertex2f(40,150);
	glVertex2f(60,150);
	glVertex2f(70,160);

	glVertex2f(70,200);
	glVertex2f(30,200);

	glEnd();

	glColor3f(0.41, 0.24, 0.13);//hair
	glBegin(GL_POLYGON);
	glVertex2f(30,200);
	glVertex2f(70,200);
	glVertex2f(70,230);
	glVertex2f(30,230);
	//glVertex2f(30,245);
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
		break;
		case 6:
		f=4;
	
        }
       

}


void keyboard( unsigned char key, int x, int y )
{
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
	if(key=='h'||key=='H'){
	f=3;
	}
	if(key=='f'||key=='F'){
	f=4;
	}

}

void delay(){
int i=3900010;
while(i--);
}


void scene2(){
	
	
	
	glColor3f(0,1,0);
	glBegin(GL_POLYGON);
	glVertex2i(0,0);
	glVertex2i(700,0);
	glVertex2i(800,0);
	glVertex2i(320,800);
	glVertex2i(0,800);
	glEnd();
	
	glColor3f(0.1,0,0.1);
	renderBitmapString(200,150,"Press B return to home page");
	renderBitmapString(200,250,"Press I to Introduction");
	renderBitmapString(200,350,"Press D to simulation");
	renderBitmapString(200,450,"Press E to EXIT");
	renderBitmapString(200,550,"Press H to HELP KEY");
	//steps******************************
	
	 glColor3f(0.5, 1,0.5);
   	 glLineWidth(3);
   	 glBegin(GL_POLYGON);
   	 glVertex2i(700, 160);
   	 glVertex2i(650, 250);
   	 glVertex2i(695, 245);
    	 glEnd();
    	 
    	 glColor3f(.5, 1,0.5);
   	 glLineWidth(5);
   	 glBegin(GL_POLYGON);
   	  glVertex2i(640, 260);
   	 glVertex2i(590, 350);
   	 glVertex2i(635, 345);
    	 glEnd();
	
	glColor3f(.5, 1,0.5);
   	 glLineWidth(5);
   	 glBegin(GL_POLYGON);
   	  glVertex2i(580, 360);
   	 glVertex2i(530, 450);
   	 glVertex2i(575, 445);
    	 glEnd();
	 
	 glColor3f(.5, 1,0.5);
   	 glLineWidth(5);
   	 glBegin(GL_POLYGON);
   	  glVertex2i(520, 460);
   	 glVertex2i(470, 550);
   	 glVertex2i(515, 545);
    	 glEnd();
    	 
    	  glColor3f(.5, 1,0.5);
   	 glLineWidth(5);
   	 glBegin(GL_POLYGON);
   	  glVertex2i(460, 560);
   	 glVertex2i(410, 650);
   	 glVertex2i(455, 645);
    	 glEnd();
    	 
    	 glColor3f(.5, 1,0.5);
   	 glLineWidth(5);
   	 glBegin(GL_POLYGON);
   	  glVertex2i(400, 660);
   	 glVertex2i(350, 750);
   	 glVertex2i(395, 745);
    	 glEnd();
    	 
    	
}
	
void next()
{	scene2();
	glColor3f(0.16, 0.16, 0.16);
	glBegin(GL_POLYGON);
	glVertex2i(0,0);
	glVertex2i(1000,0);
	glVertex2i(1000,1000);
	glVertex2i(0,1000);
	glEnd();
	glColor3f(1,1,1);
	scene2();
	
		if(v>500 && n>450){
	
	glColor3f(1,0,0);
	renderBitmapString(900,900,"Interruption");
	
	delay();
	glColor3f(0,0,1);
	renderBitmapString(900,800,"Deadlock occured");
	}
	glPushMatrix();
	
	glTranslatef(s,v,0);
	
	if(up==1 && s<500)
	{
	
	delay();
	
	s=s+1;
	ss=ss+200;
	if(v>50)
	v=v-.8;
	yellow();
	glPopMatrix();
	}
	glFlush();
	
	
//***************FOR BOTTOM TO TOP******************
	glPushMatrix();
	glTranslatef(m,n,0);
	
	if(up==1 && n<480)
	{
	
	n=n+1;
	if(m>350)
	m--;
	red();
	glPopMatrix();
	
	}
	

	
	glFlush();
	
}
	

    	
void mydisplay(){
	
    	glClear(GL_COLOR_BUFFER_BIT);
    	glBegin(GL_QUADS);
    	glColor3f(0.18,0.81,0.81);
    	glVertex2f(0,0);
    	glVertex2f(1000,0);
    	glColor3f(0.2,0.03,0.40);
    	glVertex2f(1000,1000);
    	glVertex2f(0,1000);
    	glEnd();
    	glMatrixMode(GL_MODELVIEW);
    	glLoadIdentity();
    	glEnd();
    	glMatrixMode(GL_MODELVIEW);
    	glLoadIdentity();
    	if(f==1){
			
		glColor3f(1,1,1);
		glLineWidth(6);
		glPushMatrix(); 
		char str[]="SDM Institute Of Technology, Ujire";
		glColor3f(1.0,1.0,0.0);
		glTranslatef(220,930.0,0.0);
		glScaled(0.16,0.32,0.0);
		for(int i=0;str[i]!='\0';i++)
		glutStrokeCharacter(GLUT_STROKE_MONO_ROMAN,str[i]);
		glPopMatrix();
		
		
		glLineWidth(2.5);
		glPushMatrix(); 
		char strc[]="Computer Science and Engineering ";
		glColor3f(0.9,0.8,0.34);
		glTranslatef(350,870.0,0.0);
		glScaled(0.095,0.23,0.0);
		for(int i=0;str[i]!='\0';i++)
		glutStrokeCharacter(GLUT_STROKE_MONO_ROMAN,strc[i]);
		glPopMatrix();
		
		
    	//renderBitmapString(420,870,"Computer Science and Engineering");
    	
    	
    	glColor3f(254/255,255/255,165/255);
    	renderBitmapString(400,810,"Computer Graphics Lab With Mini Project");
    	
    	glColor3f(0.96,0.596,.258);
    	renderBitmapString(430,600,"* * DEADLOCK IN OS * *");
    	
    	glColor3f(1,1,0);
    	renderBitmapString(120,650,"TEAM MEMBERS :-");
    	glColor3f(1,1,1);
    	renderBitmapString18(120,600,"KUMAR SAMARTHA (4SU19CS043)");
    	glColor3f(1,1,1);
    	renderBitmapString18(120,550,"LAXMI MAGADUM (4SU19CS045)");
    	glColor3f(1,1,1);
    	renderBitmapString18(120,500,"MALLIKA L (4SU19CS051)");
    	glColor3f(1,1,1);
    	renderBitmapString18(120,450,"MANOJ GAONKAR (4SU19CS052)");
    	glColor3f(1,1,0);
    	renderBitmapString(750,650,"GUIDE :-");
    	glColor3f(1,1,1);
    	renderBitmapString18(750,600,"Mr. PRADEEP RAO K B");
    	glColor3f(1,1,1);
    	BitmapString(700,50,"RIGHT CLICK ANYWHERE TO CONTINUE");
    	glutPostRedisplay();
   	 }
   	 if(f==2)
	{
	glColor3f(0.16, 0.16, 0.16);
	glBegin(GL_POLYGON);
	glVertex2i(0,0);
	glVertex2i(1000,0);
	glVertex2i(1000,1000);
	glVertex2i(0,1000);
	glEnd();
	glColor3f(1,1,1);
	scene2();
	glColor3f(0,1,1);
	glBegin(GL_POLYGON);
	glVertex2i(0,0);
	glVertex2i(1000,0);
	glVertex2i(1000,75);
	glVertex2i(0,75);
	glEnd();
	glColor3f(1,0,1);
    	
	
	renderBitmapString(850,100,"Press up arrow");
	renderBitmapString(0,37,"DEADLOCK EXAMPLE OF TWO PEOPLE SHARING SAME LADDER");
	if(spotdisp==1)
	
	//************************************************************************************/
	glPushMatrix();
	glTranslatef(cc+350,nn,0);
	if(cc>400)
	cc--;	
	glScalef(1,1,0);
	red();
	glPopMatrix();

	glPushMatrix();
	glTranslatef(da+50,ni,0);
	if(da<200)
	da++;	
	glScalef(0.9,0.9,0);
	yellow();
	glPopMatrix();
	// ********************************************************************* */


	if(up==1)
	next();
	glFlush();
	}
   	 
   	 if(f==3)
	{
		glClear(GL_COLOR_BUFFER_BIT);
    	glBegin(GL_QUADS);
    	glColor3f(0.1,0.256,0.71);
    	glVertex2f(0,0);
    	glVertex2f(1000,0);
    	glColor3f(0.8,0.23,0.7);
    	glVertex2f(1000,1000);
    	glVertex2f(0,1000);
    	glEnd();
	glColor3f(0,1,0);
	renderBitmapString(200,900,"KEYS :-");
	glColor3f(1,1,1);
	renderBitmapString(300,550,"Press B return to home page");
	renderBitmapString(300,600,"Press I for Introduction");
	renderBitmapString(300,650,"Press D for simulation");
	renderBitmapString(300,700,"Press E to EXIT");
	renderBitmapString(300,750,"Press F for FLOW CHART ");
	renderBitmapString(300,800,"Press H for HELP");
	}
   	 
   	 if(f==4){
   	 	glBegin(GL_QUADS);
    	glColor3f(0,0.015,0.156);
    	glVertex2f(0,0);
    	glVertex2f(1000,0);
    	glColor3f(0,0.305,0.572);
    	glVertex2f(1000,1000);
    	glVertex2f(0,1000);
    	glEnd();
    	
    	
    	
    	flowrect(450,900,90,50);//start
    	flowrect(450,800,90,50);//intro
    	flowrect(450,700,90,50);//about
    	flowrect(415,600,160,50);//simulationpage 
    	flowrect(250,600,90,50);//help
    	//flowrect(660,600,70,40);
    	flowrect(425,500,140,160);
    	flowrect(460,200,70,40);//exit 
    	glColor3f(1,0.4,0);
    	renderBitmapString(475,867,"START");
    	renderBitmapString(475,767,"INTRO");
    	renderBitmapString(475,667,"ABOUT");
    	renderBitmapString(437,567,"SIMULATION PAGE");
    	renderBitmapString(455,460,"SIMULATION");
    	renderBitmapString18(458,405,"Process=Person");
    	renderBitmapString18(458,370,"Resource=Steps");
    	
    	renderBitmapString(480,170,"EXIT");
    	renderBitmapString(280,567,"HELP");
    	
    	//lines for flowchart
    	glLineWidth(3.0);
    	line(495,850,495,800);
    	line(495,750,495,700);
    	line(495,650,495,600);
    	line(495,550,495,500);
    	line(340,575,415,575);
    	line(295,550,295,180);
    	line(295,180,460,180);
    	line(575,575,695,575);
    	line(695,575,695,180);
    	line(695,180,530,180);
    	//line(695,180,695,180);
    	
    	//triangle for arrows in flowchart
    	arrow(495,800,0);
    	arrow(495,700,0);
    	arrow(495,600,0);
    	arrow(340,575,1 );
    	arrow(495,500,0);
    	arrow(460,180,2); //exit left side
    	arrow(530,180,1); //exit right side
    	
    	
  
    	
	}
   	 
   	 
   	 if(f==5)
	{
		glBegin(GL_QUADS);
    	glColor3f(0.8,0.1,0.01);
    	glVertex2f(0,0);
    	glVertex2f(1000,0);
    	glColor3f(0.3,0,0.7);
    	glVertex2f(1000,1000);
    	glVertex2f(0,1000);
    	glEnd();
	glColor3f(0,1,1);
	
	glColor3f(0,1,0);
	renderBitmapString(50,900,"DEADLOCK");
	glColor3f(1,1,1);
	renderBitmapString(50,800,"A deadlock is a situation in which two computer programs sharing the same resources.");
	
	renderBitmapString(50,750,"MUTUAL EXCLUSION: Two or more resources are non-shareable (Only one process can use at a time)");
	renderBitmapString(50,700,"HOLD AND WAIT: A process is holding at least one resource and waiting for resources. ");
	renderBitmapString(50,650,"NO PREEMPTION: A resource cannot be taken from a process unless the process releases the resource. ");
	renderBitmapString(50,600,"1) Deadlock prevention or avoidance: The idea is to not let the system into a deadlock state.");
	renderBitmapString(50,550,"One can zoom into each category individually, Prevention is done by negating one of above mentioned necessary conditions for deadlock.");
	renderBitmapString(50,500,"2) Deadlock detection and recovery: Let deadlock occur, then do preemption to handle it once occurred.");
	renderBitmapString(50,450,"3) Ignore the problem altogether: If deadlock is very rare, then let it happen and reboot the system. This is the approach that both Windows and UNIX take.");
	renderBitmapString(50,350,"A process in operating system uses resources in the following way.");
	renderBitmapString(50,300,"1) Requests a resource ");
	renderBitmapString(50,250,"2) Use the resource ");
	renderBitmapString(50,200,"3) Releases the resource ");
	}
	
   	 if(f==6)
	{
	glColor3f(1,1,1);
	glBegin(GL_POLYGON);
	
	glEnd();
	glColor3f(1,1,1);
	
	renderBitmapString(450,450,"THANK YOU");
	
	}
   	glutSwapBuffers();
	glutPostRedisplay();
	glFlush();
    	
}

    	
    	




int main(int argc,char**argv)
{
	glutInit(&argc,argv);
	glutInitDisplayMode(GLUT_DOUBLE|GLUT_RGB);
	glutInitWindowSize(1920,1000);
	glutInitWindowPosition(0,0);
	
	glutCreateWindow("DEADLOCK IN OS");
	myinit();

	glutCreateMenu(create_menu);
	glutAddMenuEntry("INTRODUCTION",1);
	glutAddMenuEntry("ABOUT",4);
	glutAddMenuEntry("FLOW CHART",6);
	glutAddMenuEntry("HELP KEY",3);
	glutAddMenuEntry("DEADLOCK",2);
	glutAddMenuEntry("EXIT",5);
	glutAttachMenu(GLUT_RIGHT_BUTTON);
	glutDisplayFunc(mydisplay);
	glutSpecialFunc(SpecialKey);
	glutKeyboardFunc(keyboard);
	
	glutMainLoop();
	return 0;
}












