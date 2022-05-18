#pragma once
#include <iostream>
#include <string>
#include <vector>


using namespace std;


namespace ariel {

   class OrgChart : public error_code {
        
        private:

            struct Node {
            
            string _node;
            std::vector<Node*> _roots;
            
            Node(const string &name, Node* n) {
                _node = name;
            }
            };
        
            Node *root;
        
        public:
        
            OrgChart();
            OrgChart& add_root(string pos);
            

            OrgChart& add_sub(string firstPos, string secPos);
            friend ostream& operator<<(ostream& out, const OrgChart &original);
        
        class Iterator{
            
            private:
                uint index;
                Node *currentNode;
            
            public:
                
                Iterator(){
                this->index = 0;
                this->currentNode = NULL;
                }
                bool operator!=(const Iterator& it) const{
                    return false;
                }
                const Iterator operator++(int){
                    Iterator t = *this;
                    return t;
                }
                Iterator& operator++(){
                    return *this;
                }
                string operator*() const{
                    return "";
                }
                string* operator->() const{
                    return nullptr;
                }

            };
            
            int* begin();
            int* end();
            Iterator begin_level_order();
            Iterator end_level_order();
            Iterator begin_reverse_order();
            Iterator reverse_order();
            Iterator begin_preorder();
            Iterator end_preorder();
    };
   
}