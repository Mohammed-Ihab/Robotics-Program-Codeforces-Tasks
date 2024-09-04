#include <iostream>

using namespace std;

long long get_min(long long x, long long y, long long z){

    long long result {};

    if(x <= y){
        if(x <= z){
            result = x;
        }else{
            result = z;
        }
    }else {
        if(y <= z){
            result = y;
        }else{
            result = z;
        }
    }

    return result;
}

int main(){

    long long eye {}, mouth {}, body {};
    long long eye_counter {}, mouth_counter {}, body_counter {}, final_result {};
    cin >> eye >> mouth >> body;

    if (mouth > 0){
        long long min_component = get_min(eye, mouth, body);
        
        eye_counter = eye;
        mouth_counter = mouth;
        body_counter = body;

        final_result = get_min(eye_counter, mouth_counter, body_counter);
        
        if(min_component == mouth){

            eye -= mouth;
            body -= mouth;

            eye_counter = eye / 2;
            mouth_counter = eye + 1;
            body_counter = body;
    
            final_result += get_min(eye_counter, mouth_counter, body_counter);

        }

    }else{
        eye_counter = eye / 2;
        mouth_counter = eye + 1;
        body_counter = body;
    
        final_result = get_min(eye_counter, mouth_counter, body_counter);
        
    }

    cout << final_result << endl;

    return 0;
}