#include "OrgChart.hpp"
#include <iostream>
#include <fstream>
#include <sstream>
#include <stdexcept>
#include <string>
using namespace std;
using namespace ariel;

OrgChart::OrgChart(){}



OrgChart& OrgChart::add_root(string pos){
return *this;}

OrgChart& OrgChart::add_sub(string firstPos, string secPos){
return *this;}

OrgChart::Iterator OrgChart::begin_level_order(){
    return OrgChart::Iterator();}

OrgChart::Iterator OrgChart::end_level_order(){
    return OrgChart::Iterator();}

OrgChart::Iterator OrgChart::begin_reverse_order(){
    return OrgChart::Iterator();}

    
int* OrgChart::end(){
    int *x = 0;
    return x;}

ostream& ariel::operator<<(ostream& out, const OrgChart &original){
return out;}

int* OrgChart::begin(){
    int *x = 0;
    return x;}



OrgChart::Iterator OrgChart::begin_preorder(){
    return OrgChart::Iterator();}

OrgChart::Iterator OrgChart::end_preorder(){
    return OrgChart::Iterator();
}
OrgChart::Iterator OrgChart::reverse_order(){
    return OrgChart::Iterator();
}

