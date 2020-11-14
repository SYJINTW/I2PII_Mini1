#include <stdio.h>
int main(){
	int x = 2;
	int y = 3;
	int z = 5;
	// testcase 1
	//z=x+5;
	//y=z/10-7*x;
	//-y-(+z)%(z+100);
	//z =(x++) + (y--);
	//x=(--y)*(++z);
	//x=z-+-+-+-++y;

	//testcase 2
	//((((x))))=(y)=(((((z)))))++;
	//--(x);
	//y=-5---x+++z;

	//testcase 3
	//--(((((+y)))));
	//+++y;
	//---y;
	//(1)=-x;
	//3++;

	//testcase 4
	//x=(x+(y-(z*(x/(y%(z+(x-(y*(z/(x%(y+(z-(x*(y/(z%5)))))))))))))));
	//y=(((((((((((((((x+5)-y)*z)/x)%y)+z)-x)*y)/z)%x)+y)-z)*x)/y)%z);

	//testcase 5
	//y+5*x-2+z*3;
	//x=5;
	//y=6;
	//x=(3+5)-8*(10/2);
	//y=x*x-(12*12);
	//z=z/z+(+-+-+-+-z-z)+(x*z)%z+(y+z)*0-x*y;
	//x=(-y*-y-(y*y-4*x*z))/(2*x*2*x);

	//testcase 6
	//x=;
	//y=x+++;


	printf("x = %d\n", x);
	printf("y = %d\n", y);
	printf("z = %d\n", z);
}