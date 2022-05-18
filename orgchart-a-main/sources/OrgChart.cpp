#include "OrgChart.hpp"
#include <iostream>
#include <fstream>
#include <sstream>
#include <stdexcept>
#include <string>
using namespace std;
using namespace ariel;

OrgChart::OrgChart(){

}

OrgChart& OrgChart::add_root(string position){
return *this;
}

OrgChart& OrgChart::add_sub(string higherPosName, string lowerPosName){
return *this;
}

ostream& ariel::operator<<(ostream& output, const OrgChart &org){
return output;
}

int* OrgChart::begin(){
    int *num = 0;
    return num;
    //return OrgChart::Iterator();
}
int* OrgChart::end(){
    int *num = 0;
    return num;
    //return OrgChart::Iterator();
}
OrgChart::Iterator OrgChart::begin_level_order(){
    return OrgChart::Iterator();
}
OrgChart::Iterator OrgChart::end_level_order(){
    return OrgChart::Iterator();
}
OrgChart::Iterator OrgChart::begin_reverse_order(){
    return OrgChart::Iterator();
}
OrgChart::Iterator OrgChart::reverse_order(){
    return OrgChart::Iterator();
}
OrgChart::Iterator OrgChart::begin_preorder(){
    return OrgChart::Iterator();
}
OrgChart::Iterator OrgChart::end_preorder(){
    return OrgChart::Iterator();
}