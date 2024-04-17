#include <iostream>
#include <cmath>

#define TIME_STEP (1.0f / 60.0f)
struct position_struct{
     
     float x = 0.0f;
     float y = 0.0f;
     
     void SetPos(float x, float y){
          
          this->x = x;
          this->y = y;
     }
     void Move(float x, float y){
          
          this->x += x * (1.0f * TIME_STEP);
          this->y += y * (1.0f * TIME_STEP);
     }
     float GetX(){
          
          return this->x;
     }
     float GetY(){
          
          return this->y;
     }
     
}pos;
struct velocity_struct{
     
     float xVel = 0.0f;
     float yVel = 0.0f;
     
     void SetVel(float x_vel, float y_vel){
          
          this->xVel = x_vel;
          this->yVel = y_vel;
     }
     void Accel(float x_accel, float y_accel){
          
          this->xVel += x_accel * TIME_STEP;
          this->yVel += y_accel * TIME_STEP;
     }
     float GetXVel(){
          
          return this->xVel;
     }
     float GetYVel(){
          
          return this->yVel;
     }
}vel;
void DisplayPos(){
     
     std::cout << "X: " << pos.GetX() << "\n";
     std::cout << "Y: " << pos.GetY() << "\n";
}
int main(){
     
     float x = 0.0f;
     float y = 0.0f;
     
     float xVel = 1.618;
     float yVel = 3.142;
     
     float xAccel = 1.1f;
     float yAccel = 0.9f;
     
     vel.SetVel(xVel, yVel);
     
     //pos.SetPos(x, y);
     
     while(pos.x < 100){
          
          vel.Accel(xAccel, yAccel);
          pos.Move(vel.xVel, vel.yVel);
     
          DisplayPos();
     }
     
     return 0;
}
