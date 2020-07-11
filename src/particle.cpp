//
//  particle.cpp
//  Week10
//
//  Created by 徐嘉曼 on 2020/7/10.
//

#include "particle.h"

particle::particle(){
    setup();
}

void particle::setup(){
    pos.set(ofGetMouseX(), ofGetMouseY());
    vel.set(ofRandom(-5.0, 5.0), ofRandom(-5.0,5.0));
    radius = 10.0;
    color = ofColor(255);
}

void particle::update(){
    pos += vel;
//    
//    if(pos.x < 0 || pos.x > ofGetWidth()) vel.x *= -1.0;
//    if(pos.y < 0 || pos.y > ofGetHeight()) vel.y *= -1.0;
}

void particle::draw(){
    ofSetColor(color);
    ofDrawCircle(pos.x, pos.y, radius);
}

void particle::setColor(ofColor col){
    color = col;
}

void particle::setRadius(float rad){
    radius = rad;
}
