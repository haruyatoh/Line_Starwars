#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){

    ofBackground(0, 0, 0);
    
}

//--------------------------------------------------------------
void ofApp::update(){
    
    cam.setPosition(0, 0, -ofGetFrameNum()%1000);

}

//--------------------------------------------------------------
void ofApp::draw(){
    
    cam.begin();
    
    for(int i=0; i<1200; i++){
        ofSetColor(255,ofRandom(100,255));
        int x = ofRandom(-500,500);
        int y = ofRandom(-500,500);
        int z = ofRandom(-500,500);
        ofSetLineWidth(ofRandom(4));
        ofDrawLine(0,0,0,x,y,z);
    }
    
    cam.end();

}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){

}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){

}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y ){

}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){

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
