//week09-2好玩的程式設計(打地鼠冒出來)
//File-Preferemce 字型設大一點
void setup(){
  size(300,300);
}
int[][]a={ {0,0,0},{0,0,0},{0,0,0} };
void draw(){
  background(#FFFFF2);
  if(frameCount %60==0){
    int i =int(random(3)),j=int(random(3));
    a[i][j]=60;
  }
  for(int i=0;i<3;i++){
    for(int j=0;j<3;j++){
      int x =50+j*100,y=50+i*100;
      if (a[i][j]>0){
        fill(#C61616,a[i][j]*4);
        a[i][j]--;
      }else fill(#FFFFF2);
      ellipse(x,y,90,90);
    }
  }
}
