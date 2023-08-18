int a=2;
int b=3;
int c=4;
int d=5;
int e=6;
int f=7;
int g=8;
int segment[7]={2,3,4,5,6,7,8};
int counter[10][7]={
  {1,1,1,1,1,1,0},
  {0,1,1,0,0,0,0},
  {1,1,0,1,1,0,1},
  {1,1,1,1,0,0,1},
  {0,1,1,0,0,1,1},
  {1,0,1,1,0,1,1},
  {1,0,1,1,1,1,1},
  {1,1,1,0,0,0,0},
  {1,1,1,1,1,1,1},
  {1,1,1,1,0,1,1},  
};
void setup()
{
  for( int i=0;i<sizeof(segment);i++){
  pinMode(segment[i],OUTPUT);
  }
}
void loop()
{
  for( int i=0;i<10;i++){
  for( int j=0;j<7;j++){
digitalWrite(segment[j],counter[i][j]);
  }
    delay(1000);
  }
}