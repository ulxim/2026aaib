//week06-1好玩的程式設計
//File-Preference偏好設定,字型放大,接續上周的week05-5
int[][]b=new int[10][16];
void setup(){
  size(800,500);//視窗大小800 x 500
}
void draw(){
  background(255);//背景白色
  for (int i=0;i<10;i++){//左手i的for(迴圈)對應y的座標
    for(int j=0;j<16;j++){//右手i的for(迴圈)對應x的座標
     if(b[i][j]==1) fill(#F5CBFF);//如果陣列有1,就放淡紫色
     else fill(255);
     rect(j*50,i*50,50,50);
    }
  }
}
void mousePressed(){
  int i=mouseY/50,j=mouseX/50;
  b[i][j]=1;
}
