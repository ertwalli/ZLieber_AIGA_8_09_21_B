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
    
    float rSin = ofMap(sin(0.01 + time), -1, 1, 0.001, 0.01);
    float gSin = ofMap(sin(0.011 + time), -1, 1, 0.0011, 0.011);
    float bSin = ofMap(sin(0.012 + time), -1, 1, 0.0012, 0.012);
    
    for(int i = 0; i < 900; i++){
        

        ofSetColor(127 + 127 * sin(i * rSin),
                   127 + 127 * sin(i * gSin),
                   127 + 127 * sin(i * bSin));
        

        ofDrawCircle(500 + 100 * sin(i * 0.02 + time),
                     50 + i,
                     50 + 40 * sin(i * 0.005 + time));

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
