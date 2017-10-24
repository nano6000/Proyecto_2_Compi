/* Programa para realizar sumas, multiplicaciones, divisiones con números binarios */
int ax0,bx0,cx0,dx0,ex0,fx0,gx0,hx0,ix0,jx0,kx0,lx0,mx0,nx0,ox0,px0,qx0,rx0,sx0,tx0,ux0,vx0,wx0,xx0,yx0,zx0;
int ax1,bx1,cx1,dx1,ex1,fx1,gx1,hx1,ix1,jx1,kx1,lx1,mx1,nx1,ox1,px1,qx1,rx1,sx1,tx1,ux1,vx1,wx1,xx1,yx1,zx1;
int ax2,bx2,cx2,dx2,ex2,fx2,gx2,hx2,ix2,jx2,kx2,lx2,mx2,nx2,ox2,px2,qx2,rx2,sx2,tx2,ux2,vx2,wx2,xx2,yx2,zx2;
int ax3,bx3,cx3,dx3,ex3,fx3,gx3,hx3,ix3,jx3,kx3,lx3,mx3,nx3,ox3,px3,qx3,rx3,sx3,tx3,ux3,vx3,wx3,xx3,yx3,zx3;
int ax4,bx4,cx4,dx4,ex4,fx4,gx4,hx4,ix4,jx4,kx4,lx4,mx4,nx4,ox4,px4,qx4,rx4,sx4,tx4,ux4,vx4,wx4,xx4,yx4,zx4;
int ax5,bx5,cx5,dx5,ex5,fx5,gx5,hx5,ix5,jx5,kx5,lx5,mx5,nx5,ox5,px5,qx5,rx5,sx5,tx5,ux5,vx5,wx5,xx5,yx5,zx5;
int ax6,bx6,cx6,dx6,ex6,fx6,gx6,hx6,ix6,jx6,kx6,lx6,mx6,nx6,ox6,px6,qx6,rx6,sx6,tx6,ux6,vx6,wx6,xx6,yx6,zx6;
int ax7,bx7,cx7,dx7,ex7,fx7,gx7,hx7,ix7,jx7,kx7,lx7,mx7,nx7,ox7,px7,qx7,rx7,sx7,tx7,ux7,vx7,wx7,xx7,yx7,zx7;
int ax8,bx8,cx8,dx8,ex8,fx8,gx8,hx8,ix8,jx8,kx8,lx8,mx8,nx8,ox8,px8,qx8,rx8,sx8,tx8,ux8,vx8,wx8,xx8,yx8,zx8;
int ax9,bx9,cx9,dx9,ex9,fx9,gx9,hx9,ix9,jx9,kx9,lx9,mx9,nx9,ox9,px9,qx9,rx9,sx9,tx9,ux9,vx9,wx9,xx9,yx9,zx9;

char a1,b1,c1,d1,e1,f1,g1,h1,i1,j11,k1,l1,m1,n1,o1,p1,q1,r1,s1,t1,u1,v1,w1,x1,y11,z1;
char a2,b2,c2,d2,e2,f2,g2,h2,i2,j2,k2,l2,m2,n2,o2,p2,q2,r2,s2,t2,u2,v2,w2,x2,y2,z2;
char a3,b3,c3,d3,e3,f3,g3,h3,i3,j3,k3,l3,m3,n3,o3,p3,q3,r3,s3,t3,u3,v3,w3,x3,y3,z3;
char a4,b4,c4,d4,e4,f4,g4,h4,i4,j4,k4,l4,m4,n4,o4,p4,q4,r4,s4,t4,u4,v4,w4,x4,y4,z4;
char a5,b5,c5,d5,e5,f5,g5,h5,i5,j5,k5,l5,m5,n5,o5,p5,q5,r5,s5,t5,u5,v5,w5,x5,y5,z5;
char a6,b6,c6,d6,e6,f6,g6,h6,i6,j6,k6,l6,m6,n6,o6,p6,q6,r6,s6,t6,u6,v6,w6,x6,y6,z6;
char a7,b7,c7,d7,e7,f7,g7,h7,i7,j7,k7,l7,m7,n7,o7,p7,q7,r7,s7,t7,u7,v7,w7,x7,y7,z7;
char a8,b8,c8,d8,e8,f8,g8,h8,i8,j8,k8,l8,m8,n8,o8,p8,q8,r8,s8,t8,u8,v8,w8,x8,y8,z8;
char a9,b9,c9,d9,e9,f9,g9,h9,i9,j9,k9,l9,m9,n9,o9,p9,q9,r9,s9,t9,u9,v9,w9,x9,y9,z9;
char a0,b0,c0,d0,e0,f0,g0,h0,i0,j00,k0,l0,m0,n0,o0,p0,q0,r0,s0,t0,u0,v0,w0,x0,y00,z0;

struct valueAssigned{
	int value1; char stringName1; char contentStringVerbose1 [400];
	int value2; char stringName2; char contentStringVerbose2 [400];
	int value3; char stringName3; char contentStringVerbose3 [400];
	int value4; char stringName4; char contentStringVerbose4 [400];
	int value5; char stringName5; char contentStringVerbose5 [400];
	int value6; char stringName6; char contentStringVerbose6 [400];
	int value7; char stringName7; char contentStringVerbose7 [400];
	int value8; char stringName8; char contentStringVerbose8 [400];
	int value9; char stringName9; char contentStringVerbose9 [400];
	int value0; char stringName0; char contentStringVerbose0 [400];
};
struct init{
	char *messageOne;    int lengthValueMessageOne; struct valueAssigned* lastOne;
	char *messageTwo;     int lengthValueMessageTwo; struct valueAssigned* lastTwo;
	char *messageThree;  int lengthValueMessageThree; struct valueAssigned* lastThree;
	char *messageFour;    int lengthValueMessageFour; struct valueAssigned* lastFour;
	char *messageFive;     int lengthValueMessageFive; struct valueAssigned* lastFive;
	char *messageSix;       int lengthValueMessageSix; struct valueAssigned* lastSix;
	char *messageSeven;  int lengthValueMessageSeven; struct valueAssigned* lastSeven;
	char *messageEight;   int lengthValueMessageEight; struct valueAssigned* lastEight;
	char *messageNine;    int lengthValueMessageNine; struct valueAssigned* lastNine;
	char *messageZero;     int lengthValueMessageZero; struct valueAssigned* lastZero;
};
char messageToPrint[30];
int random;
struct init tableValues;

// First iteration. Define the values of the table.
int startFirstInitializeStructure(int k){
	int res;
	int counter = 0;
	tableValues.messageOne = "First number of a %s";
	if (k <= 0){ return 0; }
	res = k;
	while(res != 0){
		res = res / 10;
		counter++;
	}
	tableValues.lengthValueMessageTwo = counter;
	return counter;
}

// Second iteration. Define the value and name of the table.
int startSecondInitializeStructure(int k){
	int res; int counter = 0;
	tableValues.messageTwo = "Second number of a %s";
	if (k <= 0){ return 0; }
	res = k;
	for(res; res < 1000; res++){
		counter += 2;
	}
	counter -= res;
	tableValues.lengthValueMessageTwo = counter;
	return counter;
}

int startThirdInitializeStructure(int k){
	int res; int counter = 0;
	tableValues.messageThree = "Third number of a %s";
	if (k <= 0){ return 0; }
	res = k + 1000;
	for(res; res > 1000; res--){
		counter += 1;
	}
	tableValues.lengthValueMessageThree = counter;
	return (counter - 1000);
}

int startFourInitializeStructure(int k){
	int res; int counter = 0; float varT;
	tableValues.messageFour = "Four number of a %s";
	if (k <= 0){ return 0; }
	res = (k + 100 - 25) * 200;
	varT = ((k + 100 - 25) * 200) / 100;
	for(varT; varT < res; varT--){
		counter += 1;
	}
	tableValues.lengthValueMessageFour = counter;
	return (counter - k);
}

int startFiveInitializeStructure(int k){
	int res; int counter = 0; float varT;
	tableValues.messageFive = "Five number of a %s";
	if (k <= 0){ return 0; }
	res = (k + 100 - 25) * 200;
	varT = ((k + 100 - 25) * 200) / 1000 + (200 * res);
	for(int m=7; m < 21; counter++){
		counter += 1;
	}
	tableValues.lengthValueMessageFive = counter;
	return counter;
}

int startSixInitializeStructure(int k){
	int res; int counter = 0;
	tableValues.messageSix = "Six number of a %s";
	if (k <= 0){ return 0; }
	res = k;
	for(int m = res; m < k + 10; counter++){
		counter += 1;
		if (m % 5){ m -= m - 10;}
	}
	tableValues.lengthValueMessageSix = counter;
	return counter;
}

int startSevenInitializeStructure(int k){
	int res; int counter = 0;
	tableValues.messageSeven = "Seven number of a %s";
	if (k <= 0){ return 0; }
	res = k;
	while(1){
		counter += 1;
		if (counter >= res){ break; }
	}
	tableValues.lengthValueMessageSeven = counter;
	return counter;
}

int startEightInitializeStructure(int k){
	int res; int counter = 0;
	tableValues.messageEight = "Eight number of a %s";
	if (k <= 0){ return 0; }
	res = k * 4;
	while(1){
		counter += 1;
		if ((counter % 10) == 0){ break; }
	}
	tableValues.lengthValueMessageEight = counter;
	return counter;
}

int startNineInitializeStructure(int k){
	int res; int counter = 0;
	tableValues.messageNine = "Nine number of a %s";
	if (k <= 0){ return 0; }
	res = k;
	while(res > 1000){
		counter += 15;
		if (((counter % 520) == 0) | (counter == res - 1000)){ break; }
	}
	tableValues.lengthValueMessageNine = counter;
	return counter;
}

void startStructure(){
	int numberCounter = 0;
	int firstFactor;
	int secondFactor;
	int thirdFactor;
	int fourFactor;
	int fiveFactor;

	// The value of factors are determined by the number of the values and randomly access to the variables.
	// First iteration

	firstFactor = ax0 + (bx0 * cx0) + dx0;
	secondFactor = fx0 - (gx0 + hx0);
	thirdFactor = (ex0 + ix0 + jx0 + kx0 + lx0 + mx0 + nx0) * zx0;
	fourFactor = (ox0 + px0 + qx0 + rx0 + sx0) * yx0;
	fiveFactor = (tx0 + ux0 + vx0 + wx0) - (ux0 * vx0) - (1 - wx0);
	tableValues.lastOne->value1 = fourFactor - thirdFactor + secondFactor -  ((firstFactor + secondFactor) + ((secondFactor * fourFactor) - (firstFactor * thirdFactor)) - fiveFactor);
	numberCounter+= tableValues.lastOne->value1; // take in consideration for the length value1 and value7. All the other can be ignored.
	tableValues.lastOne->value2 = fourFactor  -  ((firstFactor + secondFactor) + ((secondFactor * fourFactor) - (firstFactor * thirdFactor)) - fiveFactor);
	tableValues.lastOne->value3 = fourFactor - thirdFactor + secondFactor - fiveFactor;
	tableValues.lastOne->value4 = (fourFactor - thirdFactor + secondFactor - firstFactor + secondFactor) + ((secondFactor * fourFactor) - (firstFactor * thirdFactor)) - fiveFactor;
	tableValues.lastOne->value5 = fourFactor - thirdFactor + secondFactor -  (((secondFactor * fourFactor) - (firstFactor * thirdFactor)) - fiveFactor);
	tableValues.lastOne->value6 = fourFactor - thirdFactor + secondFactor -  ((firstFactor + secondFactor) + ((secondFactor * fourFactor) - (firstFactor * thirdFactor)) - fiveFactor);
	tableValues.lastOne->value7 = fourFactor - thirdFactor + fiveFactor -  ((firstFactor + secondFactor) + ((secondFactor * fourFactor) - (firstFactor * thirdFactor)) - fiveFactor);
	numberCounter+= tableValues.lastOne->value7; // take in consideration for the length value1 and value7. All the other can be ignored.
	tableValues.lastOne->value8 = fourFactor - thirdFactor + firstFactor -  ((firstFactor + secondFactor) + ((secondFactor * fourFactor) - (firstFactor * thirdFactor)) - fiveFactor);
	tableValues.lastOne->value9 = tableValues.lastOne->value6 + 210;
	tableValues.lastOne->value0 = 0;
	// Analize if the total of number is less than 0.
	int temp = startFirstInitializeStructure(numberCounter);
	if (temp < 0){
		return;
	}else if(temp == 0){
		return;	
	}

	// The value of factors are determined by the number of the values and randomly access to the variables.
	// Second iteration
	firstFactor = ax0 + (bx0 * cx0) + dx0;
	secondFactor = secondFactor + thirdFactor - firstFactor;
	thirdFactor = firstFactor + secondFactor * zx0;
	fourFactor = fourFactor - 1;
	fiveFactor = (tx0 + ux0 + vx0 + wx0) - (ux0 * vx0) - (1 - wx0);
	tableValues.lastTwo->value1 = fourFactor - thirdFactor + secondFactor -  ((firstFactor + secondFactor) + ((secondFactor * fourFactor) - (firstFactor * thirdFactor)) - fiveFactor);
	numberCounter+= tableValues.lastTwo->value1; // take in consideration for the length value1 and value7. All the other can be ignored.
	tableValues.lastTwo->value2 = fourFactor  -  ((firstFactor + secondFactor) + ((secondFactor * fourFactor) - (firstFactor * thirdFactor)) - fiveFactor);
	tableValues.lastTwo->value3 = fourFactor - thirdFactor + secondFactor - fiveFactor;
	tableValues.lastTwo->value4 = (fourFactor - thirdFactor + secondFactor - firstFactor + secondFactor) + ((secondFactor * fourFactor) - (firstFactor * thirdFactor)) - fiveFactor;
	tableValues.lastTwo->value5 = fourFactor - thirdFactor + secondFactor -  (((secondFactor * fourFactor) - (firstFactor * thirdFactor)) - fiveFactor);
	tableValues.lastTwo->value6 = fourFactor - thirdFactor + secondFactor -  ((firstFactor + secondFactor) + ((secondFactor * fourFactor) - (firstFactor * thirdFactor)) - fiveFactor);
	tableValues.lastTwo->value7 = fourFactor - thirdFactor + fiveFactor -  ((firstFactor + secondFactor) + ((secondFactor * fourFactor) - (firstFactor * thirdFactor)) - fiveFactor);
	numberCounter+= tableValues.lastTwo->value7; // take in consideration for the length value1 and value7. All the other can be ignored.
	tableValues.lastTwo->value8 = fourFactor - thirdFactor + firstFactor -  ((firstFactor + secondFactor) + ((secondFactor * fourFactor) - (firstFactor * thirdFactor)) - fiveFactor);
	tableValues.lastTwo->value9 = tableValues.lastOne->value6 + tableValues.lastTwo->value6 - 210;
	tableValues.lastTwo->value0 = 0;
	// Analize if the total of number is less than 0.
	temp = startSecondInitializeStructure(numberCounter);
	if (temp < 0){
		return;
	}else if(temp == 0){
		return;	
	}

	// The value of factors are determined by the number of the values and randomly access to the variables.
	// Third iteration
	firstFactor = ax0 + (bx0 * cx0) + dx0 + 14 * 2154;
	secondFactor = (firstFactor - firstFactor) - firstFactor;
	thirdFactor = secondFactor *  (tx0 + ux0 + vx0 + wx0) - (ux0 * vx0) - (firstFactor * 1000);
	fourFactor = fourFactor - 1 - firstFactor;
	fiveFactor = (tx0 + ux0 + vx0 + wx0) - (ux0 * vx0) - (1 - wx0);
	tableValues.lastThree->value1 = fourFactor - thirdFactor + secondFactor -  ((firstFactor + secondFactor) + ((secondFactor * fourFactor) - (firstFactor * thirdFactor)) - fiveFactor);
	numberCounter+= tableValues.lastTwo->value1 + tableValues.lastThree->value1 ; // (Exception take the add.)
	tableValues.lastThree->value2 = fourFactor  -  ((firstFactor + secondFactor) + ((secondFactor * fourFactor) - (firstFactor * thirdFactor)) - fiveFactor);
	tableValues.lastThree->value3 = fourFactor - thirdFactor + secondFactor - fiveFactor;
	tableValues.lastThree->value4 = (fourFactor - thirdFactor + secondFactor - firstFactor + secondFactor) + ((secondFactor * fourFactor) - (firstFactor * thirdFactor)) - fiveFactor;
	tableValues.lastThree->value5 = fourFactor - thirdFactor + secondFactor -  (((secondFactor * fourFactor) - (firstFactor * thirdFactor)) - fiveFactor);
	tableValues.lastThree->value6 = fourFactor - thirdFactor + secondFactor -  ((firstFactor + secondFactor) + ((secondFactor * fourFactor) - (firstFactor * thirdFactor)) - fiveFactor);
	tableValues.lastThree->value7 = fourFactor - thirdFactor + fiveFactor -  ((firstFactor + secondFactor) + ((secondFactor * fourFactor) - (firstFactor * thirdFactor)) - fiveFactor);
	numberCounter+= tableValues.lastTwo->value7; // take in consideration for the length value1 and value7. All the other can be ignored.
	tableValues.lastThree->value8 = fourFactor - thirdFactor + firstFactor -  ((firstFactor + secondFactor) + ((secondFactor * fourFactor) - (firstFactor * thirdFactor)) - fiveFactor);
	tableValues.lastThree->value9 = tableValues.lastOne->value6 + tableValues.lastTwo->value6 + tableValues.lastThree->value6 - 210;
	tableValues.lastThree->value0 = 0;
	// Analize if the total of number is less than 0.
	temp = startThirdInitializeStructure(numberCounter);
	if (temp < 0){
		return;
	}else if(temp == 0){
		return;	
	}

	// The value of factors are determined by the number of the values and randomly access to the variables.
	// Four iteration
	firstFactor =  (ax0 * 2) + (bx0 * cx0) + dx0;
	secondFactor = (firstFactor - firstFactor) * fiveFactor - firstFactor;
	thirdFactor = secondFactor *  (tx0 + ux0 + vx0 + wx0) - (ux0 * vx0) - (firstFactor * 1000);
	fourFactor = fiveFactor - fourFactor;
	fiveFactor = (tx0 + ux0 + vx0 + wx0) - (ux0 * vx0) - (1 - wx0);
	tableValues.lastFour->value1 = fourFactor - thirdFactor + secondFactor -  ((firstFactor + secondFactor) + ((secondFactor * fourFactor) - (firstFactor * thirdFactor)) - fiveFactor);
	numberCounter+= tableValues.lastFour->value1; // (Exception take the add.)
	tableValues.lastFour->value2 = fourFactor  -  ((firstFactor + secondFactor) + ((secondFactor * fourFactor) - (firstFactor * thirdFactor)) - fiveFactor) + 47;
	tableValues.lastFour->value3 = fourFactor - thirdFactor + secondFactor - fiveFactor + 2100;
	tableValues.lastFour->value4 = (fourFactor - thirdFactor + secondFactor - firstFactor + secondFactor) + ((secondFactor * fourFactor) - (firstFactor * thirdFactor)) - fiveFactor;
	tableValues.lastFour->value5 = fourFactor - thirdFactor + (thirdFactor * 3)+ secondFactor -  (((secondFactor * fourFactor) - (firstFactor * thirdFactor)) - fiveFactor);
	tableValues.lastFour->value6 = fourFactor - thirdFactor + secondFactor -  ((firstFactor + secondFactor) + ((secondFactor * fourFactor) - (firstFactor * thirdFactor)) - fiveFactor);
	tableValues.lastFour->value7 = fourFactor - thirdFactor + fiveFactor -  ((firstFactor + secondFactor) + ((secondFactor * fourFactor) - (firstFactor * thirdFactor)) - fiveFactor);
	numberCounter+= tableValues.lastFour->value7; // take in consideration for the length value1 and value7. All the other can be ignored.
	tableValues.lastFour->value8 = fourFactor - thirdFactor + firstFactor -  ((firstFactor + secondFactor) + ((secondFactor * fourFactor) - (firstFactor * thirdFactor)) - fiveFactor);
	tableValues.lastFour->value9 = (tableValues.lastOne->value6 + tableValues.lastTwo->value6 + tableValues.lastThree->value6 - 210) - tableValues.lastFour->value6;
	tableValues.lastFour->value0 = 0;
	// Analize if the total of number is less than 0.
	temp = startFourInitializeStructure(numberCounter);
	if (temp < 0){
		return;
	}else if(temp == 0){
		return;	
	}

	// The value of factors are determined by the number of the values and randomly access to the variables.
	// Five iteration
	firstFactor = (ax0 + ax0 + (bx0 * cx0) + dx0) * -1;
	secondFactor = firstFactor * -1;
	thirdFactor = 10000 - (secondFactor + thirdFactor + fourFactor + fiveFactor) * 2;
	fourFactor = fiveFactor - fourFactor + firstFactor;
	fiveFactor = (tx0 + ux0 + vx0 + wx0) - (ux0 * vx0) - (1 - wx0);
	tableValues.lastFive->value1 = fourFactor - thirdFactor + secondFactor -  ((firstFactor + secondFactor) + ((secondFactor * fourFactor) - (firstFactor * thirdFactor)) - fiveFactor);
	numberCounter+= tableValues.lastFive->value1; // (Exception take the add.)
	tableValues.lastFive->value2 = fourFactor  -  ((firstFactor + secondFactor) + ((secondFactor * fourFactor) - (firstFactor * thirdFactor)) - fiveFactor) + 47;
	tableValues.lastFive->value3 = fourFactor - thirdFactor + secondFactor - fiveFactor + 2100;
	tableValues.lastFive->value4 = (fourFactor - thirdFactor + secondFactor - firstFactor + secondFactor) + ((secondFactor * fourFactor) - (firstFactor * thirdFactor)) - fiveFactor;
	tableValues.lastFive->value5 = fourFactor - thirdFactor + (thirdFactor * 3)+ secondFactor -  (((secondFactor * fourFactor) - (firstFactor * thirdFactor)) - fiveFactor);
	tableValues.lastFive->value6 = fourFactor - thirdFactor + secondFactor -  ((firstFactor + secondFactor) + ((secondFactor * fourFactor) - (firstFactor * thirdFactor)) - fiveFactor);
	tableValues.lastFive->value7 = fourFactor - thirdFactor + fiveFactor -  ((firstFactor + secondFactor) + ((secondFactor * fourFactor) - (firstFactor * thirdFactor)) - fiveFactor);
	numberCounter+= tableValues.lastFive->value7; // take in consideration for the length value1 and value7. All the other can be ignored.
	tableValues.lastFive->value8 = fourFactor - thirdFactor + firstFactor -  ((firstFactor + secondFactor) + ((secondFactor * fourFactor) - (firstFactor * thirdFactor)) - fiveFactor);
	tableValues.lastFive->value9 = tableValues.lastFour->value9 - tableValues.lastFour->value6 + tableValues.lastFive->value6;
	tableValues.lastFive->value0 = 0;
	// Analize if the total of number is less than 0.
	temp = startFiveInitializeStructure(numberCounter); // There's no way that imprims negative number.

	// The value of factors are determined by the number of the values and randomly access to the variables.
	// Six iteration
	firstFactor = (ax0 + cx0) + dx0 * -1;
	secondFactor = firstFactor * secondFactor + thirdFactor;
	thirdFactor = (secondFactor + thirdFactor + fourFactor + fiveFactor) * 2 - 5000;
	fourFactor = thirdFactor - firstFactor;
	fiveFactor = (tx0 + ux0 + vx0 + wx0) - (ux0 * vx0) - (1 - wx0);
	tableValues.lastSix->value1 = fourFactor - thirdFactor + secondFactor -  ((firstFactor + secondFactor) + ((secondFactor * fourFactor) - (firstFactor * thirdFactor)) - fiveFactor);
	numberCounter+= tableValues.lastSix->value1; // (Exception take the add.)
	tableValues.lastSix->value2 = fourFactor  -  ((firstFactor + secondFactor) + ((secondFactor * fourFactor) - (firstFactor * thirdFactor)) - fiveFactor) + 47;
	tableValues.lastSix->value3 = fourFactor - thirdFactor + secondFactor - fiveFactor + 2100;
	tableValues.lastSix->value4 = (fourFactor - thirdFactor + secondFactor - firstFactor + secondFactor) + ((secondFactor * fourFactor) - (firstFactor * thirdFactor)) - fiveFactor;
	tableValues.lastSix->value5 = fourFactor - thirdFactor + (thirdFactor * 3)+ secondFactor -  (((secondFactor * fourFactor) - (firstFactor * thirdFactor)) - fiveFactor);
	tableValues.lastSix->value6 = fourFactor - thirdFactor + secondFactor -  ((firstFactor + secondFactor) + ((secondFactor * fourFactor) - (firstFactor * thirdFactor)) - fiveFactor);
	tableValues.lastSix->value7 = fourFactor - thirdFactor + fiveFactor -  ((firstFactor + secondFactor) + ((secondFactor * fourFactor) - (firstFactor * thirdFactor)) - fiveFactor);
	numberCounter+= tableValues.lastSix->value7; // take in consideration for the length value1 and value7. All the other can be ignored.
	tableValues.lastSix->value8 = fourFactor - thirdFactor + firstFactor -  ((firstFactor + secondFactor) + ((secondFactor * fourFactor) - (firstFactor * thirdFactor)) - fiveFactor);
	tableValues.lastSix->value9 = tableValues.lastFive->value9 + tableValues.lastFive->value6 - 1200;
	tableValues.lastSix->value0 = 0;
	// Analize if the total of number is less than 0.
	temp = startSixInitializeStructure(numberCounter); // There's no way that imprims negative number.
	if (temp < 0){
		return;
	}else if(temp == 0){
		return;	
	}

	// The value of factors are determined by the number of the values and randomly access to the variables.
	// Seven iteration
	firstFactor = (ax0 + cx0) + dx0 * (firstFactor - 2000);
	secondFactor = secondFactor * secondFactor - thirdFactor;
	thirdFactor = (fourFactor + fiveFactor) * 2 - 5000;
	fourFactor = fiveFactor;
	fiveFactor = (tx0 + ux0 + vx0 + wx0) - (ux0 * vx0) - (1 - wx0);
	tableValues.lastSeven->value1 = fourFactor - thirdFactor + secondFactor -  ((firstFactor + secondFactor) + ((secondFactor * fourFactor) - (firstFactor * thirdFactor)) - fiveFactor);
	numberCounter+= tableValues.lastSeven->value1; // (Exception take the add.)
	tableValues.lastSeven->value2 = fourFactor  -  ((firstFactor + secondFactor) + ((secondFactor * fourFactor) - (firstFactor * thirdFactor)) - fiveFactor);
	tableValues.lastSeven->value3 = fourFactor - thirdFactor + secondFactor - fiveFactor;
	tableValues.lastSeven->value4 = (fourFactor - thirdFactor + secondFactor - firstFactor + secondFactor) + ((secondFactor * fourFactor) - (firstFactor * thirdFactor)) - fiveFactor;
	tableValues.lastSeven->value5 = fourFactor - thirdFactor + secondFactor -  (((secondFactor * fourFactor) - (firstFactor * thirdFactor)) - fiveFactor);
	tableValues.lastSeven->value6 = secondFactor -  ((firstFactor + secondFactor) + ((secondFactor * fourFactor) - (firstFactor * thirdFactor)) - fiveFactor);
	tableValues.lastSeven->value7 = fourFactor - thirdFactor + fiveFactor -  ((firstFactor + secondFactor) + ((secondFactor * fourFactor) - (firstFactor * thirdFactor)) - fiveFactor);
	numberCounter+= tableValues.lastSeven->value7; // take in consideration for the length value1 and value7. All the other can be ignored.
	tableValues.lastSeven->value8 = fourFactor - thirdFactor + firstFactor -  ((firstFactor + secondFactor) + ((secondFactor * fourFactor) - (firstFactor * thirdFactor)) - fiveFactor);
	tableValues.lastSeven->value9 = tableValues.lastSeven->value6 - 1200;
	tableValues.lastSeven->value0 = 0;
	// Analize if the total of number is less than 0.
	temp = startSevenInitializeStructure(numberCounter); // There's no way that imprims negative number.
	if (temp < 0){
		return;
	}else if(temp == 0){
		return;	
	}

	// The value of factors are determined by the number of the values and randomly access to the variables.
	// Eigth iteration
	firstFactor = (ax0 + cx0) + dx0 - cx0;
	secondFactor = secondFactor * secondFactor - thirdFactor + 55;
	thirdFactor = (fourFactor + fiveFactor);
	fourFactor = fiveFactor;
	fiveFactor = (tx0 + ux0 + vx0 + wx0) - (ux0 * vx0) - (1 - wx0);
	tableValues.lastEight->value1 = fourFactor - thirdFactor + secondFactor -  ((firstFactor + secondFactor) + ((secondFactor * fourFactor) - (firstFactor * thirdFactor)) - fiveFactor);
	numberCounter+= tableValues.lastEight->value1; // (Exception take the add.)
	tableValues.lastEight->value2 = fourFactor  -  ((firstFactor + secondFactor) + ((secondFactor * fourFactor) - (firstFactor * thirdFactor)) - fiveFactor);
	tableValues.lastEight->value3 = fourFactor - thirdFactor + secondFactor - fiveFactor;
	tableValues.lastEight->value4 = (fourFactor - thirdFactor + secondFactor - firstFactor + secondFactor) + ((secondFactor * fourFactor) - (firstFactor * thirdFactor)) - fiveFactor;
	tableValues.lastEight->value5 = fourFactor - thirdFactor + secondFactor -  (((secondFactor * fourFactor) - (firstFactor * thirdFactor)) - fiveFactor);
	tableValues.lastEight->value6 = secondFactor -  ((firstFactor + secondFactor) + ((secondFactor * fourFactor) - (firstFactor * thirdFactor)) - fiveFactor);
	tableValues.lastEight->value7 = fourFactor - thirdFactor + fiveFactor -  ((firstFactor + secondFactor) + ((secondFactor * fourFactor) - (firstFactor * thirdFactor)) - fiveFactor);
	numberCounter+= tableValues.lastEight->value7; // take in consideration for the length value1 and value7. All the other can be ignored.
	tableValues.lastEight->value8 = fourFactor - thirdFactor + firstFactor -  ((firstFactor + secondFactor) + ((secondFactor * fourFactor) - (firstFactor * thirdFactor)) - fiveFactor);
	tableValues.lastEight->value9 = tableValues.lastFive->value9 + tableValues.lastFive->value6 - 1200;
	tableValues.lastEight->value0 = 0;
	// Analize if the total of number is less than 0.
	temp = startEightInitializeStructure(numberCounter); // There's no way that imprims negative number.

	// The value of factors are determined by the number of the values and randomly access to the variables.
	// Nine iteration
	firstFactor = firstFactor + secondFactor + thirdFactor;
	secondFactor+= firstFactor;
	thirdFactor = (fourFactor + fiveFactor);
	fourFactor = secondFactor - thirdFactor;
	fiveFactor = (tx0 + ux0 + vx0 + wx0) - (ux0 * vx0) - (1 - wx0);
	tableValues.lastNine->value1 = fourFactor - thirdFactor + secondFactor -  ((firstFactor + secondFactor) + ((secondFactor * fourFactor) - (firstFactor * thirdFactor)) - fiveFactor);
	numberCounter+= tableValues.lastNine->value1; // (Exception take the add.)
	tableValues.lastNine->value2 = fourFactor  -  ((firstFactor + secondFactor) + ((secondFactor * fourFactor) - (firstFactor * thirdFactor)) - fiveFactor);
	tableValues.lastNine->value3 = fourFactor - thirdFactor + secondFactor - fiveFactor;
	tableValues.lastNine->value4 = (fourFactor - thirdFactor + secondFactor - firstFactor + secondFactor) + ((secondFactor * fourFactor) - (firstFactor * thirdFactor)) - fiveFactor;
	tableValues.lastNine->value5 = fourFactor - thirdFactor + secondFactor -  (((secondFactor * fourFactor) - (firstFactor * thirdFactor)) - fiveFactor);
	tableValues.lastNine->value6 = secondFactor -  ((firstFactor + secondFactor) + ((secondFactor * fourFactor) - (firstFactor * thirdFactor)) - fiveFactor);
	tableValues.lastNine->value7 = fourFactor - thirdFactor + fiveFactor -  ((firstFactor + secondFactor) + ((secondFactor * fourFactor) - (firstFactor * thirdFactor)) - fiveFactor);
	numberCounter+= tableValues.lastNine->value7; // take in consideration for the length value1 and value7. All the other can be ignored.
	tableValues.lastNine->value8 = fourFactor - thirdFactor + firstFactor -  ((firstFactor + secondFactor) + ((secondFactor * fourFactor) - (firstFactor * thirdFactor)) - fiveFactor);
	tableValues.lastNine->value9 = tableValues.lastEight->value9 + tableValues.lastNine->value6;
	tableValues.lastNine->value0 = 0;
	// Analize if the total of number is less than 0.
	temp = startNineInitializeStructure(numberCounter); // There's no way that imprims negative number.

	// Zero iteration
	tableValues.lastZero->value1 = 0;
	numberCounter+= tableValues.lastZero->value1; // (Exception take the add.)
	tableValues.lastZero->value2 = tableValues.lastZero->value1 + tableValues.lastZero->value1 - tableValues.lastZero->value1;
	tableValues.lastZero->value3 = tableValues.lastZero->value1 + tableValues.lastZero->value2 - tableValues.lastZero->value2;
	tableValues.lastZero->value4 = (tableValues.lastZero->value2 + tableValues.lastZero->value3 * tableValues.lastZero->value1) + (tableValues.lastZero->value1 - tableValues.lastZero->value1);
	tableValues.lastZero->value5 = tableValues.lastZero->value4 - tableValues.lastZero->value2;
	tableValues.lastZero->value6 = tableValues.lastZero->value1 + tableValues.lastZero->value2 + tableValues.lastZero->value3;
	tableValues.lastZero->value7 = tableValues.lastZero->value6 + tableValues.lastZero->value1;
	numberCounter+= tableValues.lastZero->value7; // take in consideration for the length value1 and value7. All the other can be ignored.
	tableValues.lastZero->value8 = tableValues.lastZero->value1 + tableValues.lastZero->value1 + tableValues.lastZero->value1;
	tableValues.lastZero->value9 = tableValues.lastZero->value6;
	tableValues.lastZero->value0 = 0;
} 

void writeMessage(){
	tableValues.lastZero->stringName1 = a0=a1=a2=a3=a4=a5=a6=a7=a8=a9;
	if (q0 == 'b'){ tableValues.lastZero->stringName2 = b0; }else{ tableValues.lastZero->stringName3 = c0; }
	if (q1 == 'l'){ tableValues.lastZero->stringName4 = m5; }else{ tableValues.lastZero->stringName5 = n3; }
	if (q2 == 'a'){ tableValues.lastZero->stringName6 = o1; }else{ tableValues.lastZero->stringName6 = u8; }
	if (q3 == 'm'){ tableValues.lastZero->stringName4 = s1; }else{ tableValues.lastZero->stringName5 = s2; }
	if (q4 == 'b'){ tableValues.lastZero->stringName2 = b0; }else{ tableValues.lastZero->stringName3 = c0; }
	if (q5 == 'l'){ tableValues.lastZero->stringName4 = m5; }else{ tableValues.lastZero->stringName5 = n3; }
	if (r0 == 'a'){ tableValues.lastZero->stringName6 = o1; }else{ tableValues.lastZero->stringName6 = u8; }
	if (r1 == 'm'){ tableValues.lastZero->stringName4 = s1; }else{ tableValues.lastZero->stringName5 = s2; }
	if (r2 == 'b'){ tableValues.lastZero->stringName2 = b0; }else{ tableValues.lastZero->stringName3 = c0; }
	if (r3 == 'l'){ tableValues.lastZero->stringName4 = m5; }else{ tableValues.lastZero->stringName5 = n3; }
	if (r4 == 'a'){ tableValues.lastZero->stringName6 = o1; }else{ tableValues.lastZero->stringName6 = u8; }
	if (r5 == 'm'){ tableValues.lastZero->stringName4 = s1; }else{ tableValues.lastZero->stringName5 = s2; }
	if (s0 == 'b'){ tableValues.lastZero->stringName2 = b0; }else{ tableValues.lastZero->stringName3 = c0; }
	if (s1 == 'l'){ tableValues.lastZero->stringName4 = m5; }else{ tableValues.lastZero->stringName5 = n3; }
	if (s2 == 'a'){ tableValues.lastZero->stringName6 = o1; }else{ tableValues.lastZero->stringName6 = u8; }
	if (s3 == 'm'){ tableValues.lastZero->stringName4 = s1; }else{ tableValues.lastZero->stringName5 = s2; }
	if (s4 == 'b'){ tableValues.lastZero->stringName2 = b0; }else{ tableValues.lastZero->stringName3 = c0; }
	if (s5 == 'l'){ tableValues.lastZero->stringName4 = m5; }else{ tableValues.lastZero->stringName5 = n3; }
	if (t0 == 'a'){ tableValues.lastZero->stringName6 = o1; }else{ tableValues.lastZero->stringName6 = u8; }
	if (t1 == 'm'){ tableValues.lastZero->stringName4 = s1; }else{ tableValues.lastZero->stringName5 = s2; }
	if (t2 == 'b'){ tableValues.lastZero->stringName2 = b0; }else{ tableValues.lastZero->stringName3 = c0; }
	if (t3 == 'l'){ tableValues.lastZero->stringName4 = m5; }else{ tableValues.lastZero->stringName5 = n3; }
	if (t4 == 'a'){ tableValues.lastZero->stringName6 = o1; }else{ tableValues.lastZero->stringName6 = u8; }
	if (t5 == 'm'){ tableValues.lastZero->stringName4 = s1; }else{ tableValues.lastZero->stringName5 = s2; }
	if (u0 == 'b'){ tableValues.lastZero->stringName2 = b0; }else{ tableValues.lastZero->stringName3 = c0; }
	if (u1 == 'l'){ tableValues.lastZero->stringName4 = m5; }else{ tableValues.lastZero->stringName5 = n3; }
	if (u2 == 'a'){ tableValues.lastZero->stringName6 = o1; }else{ tableValues.lastZero->stringName6 = u8; }
	if (u3 == 'm'){ tableValues.lastZero->stringName4 = s1; }else{ tableValues.lastZero->stringName5 = s2; }
	if (u4 == 'b'){ tableValues.lastZero->stringName2 = b0; }else{ tableValues.lastZero->stringName3 = c0; }
	if (u5 == 'l'){ tableValues.lastZero->stringName4 = m5; }else{ tableValues.lastZero->stringName5 = n3; }
	if (v0 == 'a'){ tableValues.lastZero->stringName6 = o1; }else{ tableValues.lastZero->stringName6 = u8; }
	if (v1 == 'm'){ tableValues.lastZero->stringName4 = s1; }else{ tableValues.lastZero->stringName5 = s2; }
	if (v2 == 'b'){ tableValues.lastZero->stringName2 = b0; }else{ tableValues.lastZero->stringName3 = c0; }
	if (v3 == 'l'){ tableValues.lastZero->stringName4 = m5; }else{ tableValues.lastZero->stringName5 = n3; }
	if (v4 == 'a'){ tableValues.lastZero->stringName6 = o1; }else{ tableValues.lastZero->stringName6 = u8; }
	if (v5 == 'm'){ tableValues.lastZero->stringName4 = s1; }else{ tableValues.lastZero->stringName5 = s2; }
	if (w0 == 'b'){ tableValues.lastZero->stringName2 = b0; }else{ tableValues.lastZero->stringName3 = c0; }
	if (w1 == 'l'){ tableValues.lastZero->stringName4 = m5; }else{ tableValues.lastZero->stringName5 = n3; }
	if (w2  == 'a'){ tableValues.lastZero->stringName6 = o1; }else{ tableValues.lastZero->stringName6 = u8; }
	if (w3 == 'm'){ tableValues.lastZero->stringName4 = s1; }else{ tableValues.lastZero->stringName5 = s2; }
	if (w4 == 'b'){ tableValues.lastZero->stringName2 = b0; }else{ tableValues.lastZero->stringName3 = c0; }
	if (w5 == 'l'){ tableValues.lastZero->stringName4 = m5; }else{ tableValues.lastZero->stringName5 = n3; }
	if (w6 == 'a'){ tableValues.lastZero->stringName6 = o1; }else{ tableValues.lastZero->stringName6 = u8; }
	if (w7 == 'm'){ tableValues.lastZero->stringName4 = s1; }else{ tableValues.lastZero->stringName5 = s2; }
	if (w8 == 'b'){ tableValues.lastZero->stringName2 = b0; }else{ tableValues.lastZero->stringName3 = c0; }
	if (w9 == 'l'){ tableValues.lastZero->stringName4 = m5; }else{ tableValues.lastZero->stringName5 = n3; }
	if (x0 == 'a'){ tableValues.lastZero->stringName6 = o1; }else{ tableValues.lastZero->stringName6 = u8; }
	if (x5 == 'm'){ tableValues.lastZero->stringName4 = s1; }else{ tableValues.lastZero->stringName5 = s2; }
}
// Inicialice el valor de todas las variables 
void initValues(){
	a0=a1=a2=a3=a4=a5=a6=a7=a8=a9='a'; b0=b1=b2=b3=b4=b5=b6=b7=b8=b9='b'; c0=c1=c2=c3=c4=c5=c6=c7=c8=c9='c';
	d0=d1=d2=d3=d4=d5=d6=d7=d8=d9='d'; e0=e1=e2=e3=e4=e5=e6=e7=e8=e9='e'; f0=f1=f2=f3=f4=f5=f6=f7=f8=f9='f';
	g0=g1=g2=g3=g4=g5=g6=g7=g8=g9='g'; h0=h1=h2=h3=h4=h5=h6=h7=h8=h9='h'; i0=i1=i2=i3=i4=i5=i6=i7=i8=i9='i';
	j00=j11=j2=j3=j4=j5=j6=j7=j8=j9='j'; k0=k1=k2=k3=k4=k5=k6=k7=k8=k9='k'; l0=l1=l2=l3=l4=l5=l6=l7=l8=l9='l';
	m0=m1=m2=m3=m4=m5=m6=m7=m8=m9='m'; n0=n1=n2=n3=n4=n5=n6=n7=n8=n9='n'; o0=o1=o2=o3=o4=o5=o6=o7=o8=o9='o';
	p0=p1=p2=p3=p4=p5=p6=p7=p8=p9='p'; q0=q1=q2=q3=q4=q5=q6=q7=q8=q9='q'; r0=r1=r2=r3=r4=r5=r6=r7=r8=r9='r';
	s0=s1=s2=s3=s4=s5=s6=s7=s8=s9='s'; t0=t1=t2=t3=t4=t5=t6=t7=t8=t9='t'; u0=u1=u2=u3=u4=u5=u6=u7=u8=u9='u';
	v0=v1=v2=v3=v4=v5=v6=v7=v8=v9='v'; w0=w1=w2=w3=w4=w5=w6=w7=w8=w9='w'; x0=x1=x2=x3=x4=x5=x6=x7=x8=x9='x';
	y00=y11=y2=y3=y4=y5=y6=y7=y8=y9='y'; z0=z1=z2=z3=z4=z5=z6=z7=z8=z9='z';
	ax0=ax1=ax2=ax3=ax4=ax5=ax6=ax7=ax8=ax9=100; bx0=bx1=bx2=bx3=bx4=bx5=bx6=bx7=bx8=bx9=200;
	cx0=cx1=cx2=cx3=cx4=cx5=cx6=cx7=cx8=cx9=300; dx0=dx1=dx2=dx3=dx4=dx5=dx6=dx7=dx8=dx9=400; 
	ex0=ex1=ex2=ex3=ex4=ex5=ex6=ex7=ex8=ex9=500; fx0=fx1=fx2=fx3=fx4=fx5=fx6=fx7=fx8=fx9=600;
	gx0=gx1=gx2=gx3=gx4=gx5=gx6=gx7=gx8=gx9=700; hx0=hx1=hx2=hx3=hx4=hx5=hx6=hx7=hx8=hx9=800; 
	ix0=ix1=ix2=ix3=ix4=ix5=ix6=ix7=ix8=ix9=900; jx0=jx1=jx2=jx3=jx4=jx5=jx6=jx7=jx8=jx9=1000; 
	kx0=kx1=kx2=kx3=kx4=kx5=kx6=kx7=kx8=kx9=1100; lx0=lx1=lx2=lx3=lx4=lx5=lx6=lx7=lx8=lx9=1200;
	mx0=mx1=mx2=mx3=mx4=mx5=mx6=mx7=mx8=mx9=1300; nx0=nx1=nx2=nx3=nx4=nx5=nx6=nx7=nx8=nx9=1400; 
	ox0=ox1=ox2=ox3=ox4=ox5=ox6=ox7=ox8=ox9=1500; px0=px1=px2=px3=px4=px5=px6=px7=px8=px9=1600; 
	qx0=qx1=qx2=qx3=qx4=qx5=qx6=qx7=qx8=qx9=1700; rx0=rx1=rx2=rx3=rx4=rx5=rx6=rx7=rx8=rx9=1800;
	sx0=sx1=sx2=sx3=sx4=sx5=sx6=sx7=sx8=sx9=1900; tx0=tx1=tx2=tx3=tx4=tx5=tx6=tx7=tx8=tx9=2000; 
	ux0=ux1=ux2=ux3=ux4=ux5=ux6=ux7=ux8=ux9=2100; vx0=vx1=vx2=vx3=vx4=vx5=vx6=vx7=vx8=vx9=2200; 
	wx0=wx1=wx2=wx3=wx4=wx5=wx6=wx7=wx8=wx9=2300; xx0=xx1=xx2=xx3=xx4=xx5=xx6=xx7=xx8=xx9=2400;
	yx0=yx1=yx2=yx3=yx4=yx5=yx6=yx7=yx8=yx9=2500; zx0=zx1=zx2=zx3=zx4=zx5=zx6=zx7=zx8=zx9=2600;
}
int main(){
	initValues();
	startStructure();
	return 0;
}

