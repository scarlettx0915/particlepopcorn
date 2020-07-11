//
//  particle.hpp
//  Week10
//
//  Created by 徐嘉曼 on 2020/7/10.
//

#ifndef particle_hpp
#define particle_hpp

#include <stdio.h>
#include "ofMain.h"

class particle{
    
    public:
    //property
    ofVec2f pos;
    ofVec2f vel;
    float radius;
    ofColor color;
    
    //method
    void setup();
    void update();
    void draw();
    void setColor(ofColor col);
    void setRadius(float rad);
    //constructor
    particle();
};
#endif /* particle_hpp */
