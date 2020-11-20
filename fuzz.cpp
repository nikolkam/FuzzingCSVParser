#include "rapidcsv.h"
#include <iostream>

extern "C" int LLVMFuzzerTestOneInput(const uint8_t *Data, size_t Size) {
    const std::string* csv = (std::string*) Data;
    std::stringstream input(*csv);
    rapidcsv::Document doc(input, rapidcsv::LabelParams(0,0));

    return 0;
}

// int main(){
//     const std::string csv = "hello, my name is nikola ";
//     std::stringstream input(csv);
//     rapidcsv::Document doc(input, rapidcsv::LabelParams(0,0));

//     return 0;
// }