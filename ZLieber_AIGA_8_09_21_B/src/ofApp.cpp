#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    
    ofSetCircleResolution(100);

}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
    
    ofBackground(0);
    
    float time = ofGetElapsedTimef();
    
    float rSin = ofMap(sin(0.1 + time), -1, 1, 0.001, 0.01);
    float gSin = ofMap(sin(0.11 + time), -1, 1, 0.0021, 0.0211);
    float bSin = ofMap(sin(0.12 + time), -1, 1, 0.0031, 0.031);
    
    for(int i = 0; i < 900; i++){
        
        float yScale = ofMap(sin(i * gSin), -1, 1, 0, ofGetHeight());
        
        ofSetColor(127 + 127 * sin(i * rSin),
                   127 + 127 * sin(i * gSin),
                   127 + 127 * sin(i * bSin));
        

        ofDrawCircle(500 + 100 * sin(i * rSin),
                     50 + yScale,
                     50 + 40 * sin(i * bSin));

    }
    
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
