#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    ofBackground(0);
}

//--------------------------------------------------------------
void ofApp::update(){
    positions.push_back(ofPoint(mouseX,mouseY));
    //cout << positions.size() << endl;
    if (positions.size() > 1000) {
        positions.erase(positions.begin());
    }
}

//--------------------------------------------------------------
void ofApp::draw(){
//ofDrawCircle(mouseX, mouseY, 100);
    
//    //draw circles as each point
//    for(int i = 0 ; i < positions.size() ; i++){
//        ofDrawCircle(positions[i],3);
//    }
    
    for(int i = 0 ; i < positions.size()-1 ; i++){
        ofDrawLine(positions[i], positions[i+1]);
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
