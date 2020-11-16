#include <stdio.h>
int main(){
	int testcase = 0;
	int x = 2;
	int y = 3;
	int z = 5;
	scanf("%d", &testcase);

	switch(testcase){
		case 1:
			// testcase 1
			z=x+5;
			y=z/10-7*x;
			-y-(+z)%(z+100);
			z =(x++) + (y--);
			x=(--y)*(++z);
			x=z-+-+-+-++y;
			break;

		case 2:
			//testcase 2
			//((((x))))=(y)=(((((z)))))++;
			//--(x);
			//y=-5---x+++z;
			printf("CE instruction found.\n");
			return 0;

		case 3:
			//testcase 3
			//--(((((+y)))));
			//+++y;
			//---y;
			//(1)=-x;
			//3++;
			printf("CE instruction found.\n");
			return 0;

		//testcase 4
		//x=(x+(y-(z*(x/(y%(z+(x-(y*(z/(x%(y+(z-(x*(y/(z%5)))))))))))))));
		//y=(((((((((((((((x+5)-y)*z)/x)%y)+z)-x)*y)/z)%x)+y)-z)*x)/y)%z);

		case 5:
			//testcase 5
			y+5*x-2+z*3;
			x=5;
			y=6;
			x=(3+5)-8*(10/2);
			y=x*x-(12*12);
			z=z/z+(+-+-+-+-z-z)+(x*z)%z+(y+z)*0-x*y;
			x=(-y*-y-(y*y-4*x*z))/(2*x*2*x);
			break;

		case 6:
			//testcase 6
			//x=;
			//y=x+++;
			printf("CE instruction found.\n");
			return 0;

		case 15877:
			x = 1;
			y = x+1;
			z = y+1;
			x = z+1;
			break;

		case 15882:
			x = 100+10*y;
			y = z+100*10/50*10;
			z = 10*x/100;
		
		default:
			break;
		}

	printf("%d %d %d\n", x, y, z);
}