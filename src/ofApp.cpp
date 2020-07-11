#include "ofApp.h"
//create shapes by mouse dragging
//change shape radius with radius slider
//change alpha with alpha slider
//change shape with circleRes slider
//switch from no fill and filled by clicking "no fill" and "fill" buttons
//--------------------------------------------------------------
void ofApp::setup(){
    ofBackground(0);
    
    gui.setup();
    gui.add(radiusSlider.setup("radius", 10.0, 0.1, 50.0));
    gui.add(alphaSlider.setup("alpha", 125.0, 0.1, 255.0));
    gui.add(circleResolution.set("circleRes",22,3,22));
    gui.add(noFillButton.setup("No Fill"));
    gui.add(FillButton.setup("Fill"));
    
    noFillButton.addListener(this, &ofApp::noFillButtonPressed);
    FillButton.addListener(this, &ofApp::FillButtonPressed);
    circleResolution.addListener(this, &ofApp::circleResolutionChanged);
    
    ofSetFrameRate(60);
}

void ofApp::noFillButtonPressed(){
    ofNoFill();
}

void ofApp::FillButtonPressed(){
    ofFill();
}

void ofApp::circleResolutionChanged(int &circleResolution){
    ofSetCircleResolution(circleResolution);
}

//--------------------------------------------------------------
void ofApp::update(){
    for(int i=0; i<particles.size(); i++){
        particles[i].pos += particles[i].vel;
    }
}

//--------------------------------------------------------------
void ofApp::draw(){
    
    gui.draw();
    for(int i=0; i<particles.size(); i++){
        particles[i].draw();
    }
    
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){
    if(key == OF_KEY_DOWN){
        if(particles.size()>0) particles.pop_back();
    }
    
    if(key == ' '){
        particles.clear();
    }
}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){
    
}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y ){
    
}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button){
    particle tmp;
    tmp.setRadius(radiusSlider);
    tmp.setColor(ofColor(ofRandom(255),ofRandom(255),ofRandom(255), alphaSlider));
    particles.push_back(tmp);
}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){
    particle tmp;
    tmp.setRadius(radiusSlider);
    tmp.setColor(ofColor(ofRandom(255),ofRandom(255),ofRandom(255), alphaSlider));
    particles.push_back(tmp);
    
}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){
    
}

//--------------------------------------------------------------
void ofApp::mouseEntered(int x, int y){
    
}

//--------------------------------------------------------------
void ofApp::mouseExited(int x, int y){
    
}

//--------------------------------------------------------------
void ofApp::windowResized(int w, int h){
    
}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg){
    
}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){
    
}
