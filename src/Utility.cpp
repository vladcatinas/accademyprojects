#include "Utility.h"

void Utility::customPrint(const std::string& message){
    std::cout<< "Printing: "<<message<<std::endl;
}

double Utility::calculateAVG(const std::vector<double>& values){
    if(values.empty()) return 0.0;

    double sum = 0.0;
    for(double val:values){
        sum+=val;
    }

    return sum / values.size();
}