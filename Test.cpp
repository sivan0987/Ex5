#include "doctest.h"
#include <iostream>
#include <vector>

#include "OrgChart.hpp"

using namespace std;
using namespace ariel;



TEST_CASE("Test 1") {
        OrgChart organization;
            CHECK_THROWS(organization.add_sub("mm", "kk"));
            CHECK(organization.add_root("riv"));
            CHECK(organization.add_sub("riv", "ahuva"));         
            CHECK(organization.add_sub("riv", "gila"));         
            CHECK(organization.add_sub("riv", "ilana") );       
            CHECK(organization.add_sub("ahuva", "siv")); 
            CHECK(organization.add_sub("ilana", "stav"));;     
 /*
       riv
       |--------|--------|
       ahuva      gila      ilana
       |                 |
       siv             stav
 */
     string a;
    for (auto iter = organization.begin_level_order(); iter != organization.end_level_order(); iter++) {
        if (iter++ != organization.end_level_order()) {
            a += *iter + "|";
        } else
            a += *iter;
    }
        CHECK_EQ(a, "riv|ahuva|gila|ilana|siv|stav");
        CHECK_FALSE(a == "siv|stav|ahuva|gila|ilana|riv");
        CHECK_FALSE(a == "siv|");
        a.clear();
   
  for (auto iter = organization.begin_reverse_order(); iter != organization.reverse_order(); ++iter){
        if (iter++ != organization.end_level_order()) {
            a += *iter + "|";
        } else
            a += *iter;
    }
        CHECK_EQ(a, "siv|stav|ahuva|gila|ilana|riv");
        CHECK_FALSE(a == "riv|ahuva|gila|ilana|siv|stav");
        CHECK_FALSE(a == "siv|");
        a.clear();
  for (auto iter=organization.begin_preorder(); iter!=organization.end_preorder(); ++iter) {
        if (iter++ != organization.end_level_order()) {
            a += *iter + "|";
        } else
            a += *iter;
    }
    
     CHECK_EQ(a, "riv|ahuva|siv|gila|ilana|stav");
        CHECK_FALSE(a == "riv|ahuva|gila|ilana|siv|stav");
         CHECK_FALSE(a == "siv|stav|ahuva|gila|ilana|riv");
         CHECK_FALSE(a == "siv|");
        a.clear();
    
  for (auto element : organization)
  { // this should work like level order
        a+=element;
        a+=" ";
    
  } 
   /*
       riv
       |--------|--------|
       ahuva      gila      ilana
       |                 |
       siv             stav
 */
  CHECK_EQ(a, "riv ahuva gila ilana siv stav ");
   CHECK_FALSE(a == "siv|stav|ahuva|gila|ilana|riv");
     CHECK_FALSE(a == "riv|ahuva|gila|ilana|siv|stav");

    }


// TEST_CASE("organization one") {
//     OrgChart organization;
//     CHECK_THROWS(organization.add_sub("miri", "ofek"));
//     CHECK(organization.add_root("elka"));
//     CHECK(organization.add_sub("elka", "miri"));
//     CHECK_THROWS(organization.add_sub("stav", "aner"));
//     CHECK(organization.add_sub("miri", "ayalon"));
//     CHECK(organization.add_sub("miri", "nofar"));
//     CHECK(organization.add_sub("miri", "stav"));

// /* Prints the org chart in a reasonable format. For example:
//        elka
//        |
//        miri
//        |--------|--------|
//        ayalon   nofar     stav
//  */
//     string ans;
//     for (auto iter = organization.begin_level_order(); iter != organization.end_level_order(); iter++) {
//         if (iter++ != organization.end_level_order()) {
//             ans += *iter + "|";
//         } else
//             ans += *iter;
//     }
//     CHECK_EQ(ans, "elka|miri|ayalon|nofar|stav");
//     CHECK_FALSE(ans == "stav");
//     ans.clear();

//     for (auto iter = organization.begin_reverse_order(); iter != organization.reverse_order(); iter++) {
//         if (iter++ != organization.end_level_order()) {
//             ans += *iter + "|";
//         } else
//             ans += *iter;
//     }
//     CHECK_EQ(ans, "ayalon|nofar|stav|miri|elka");
//     ans.clear();

//     for (auto iter = organization.begin_preorder(); iter != organization.end_preorder(); iter++) {
//         if (iter++ != organization.end_level_order()) {
//             ans += *iter + "|";
//         } else
//             ans += *iter;
//     }
//     CHECK_EQ(ans, "elka|miri|ayalon|nofar|stav");
//     CHECK_FALSE(ans == "|");
//     ans.clear();
//     CHECK(organization.add_root("frida"));
// }